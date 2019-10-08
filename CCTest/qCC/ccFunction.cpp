#include "ccFunction.h"

int ReadSiglePhotonData(char cpath[], vector<LidarALLData>&vAlldata)
{
	int nEvent_CH1[] = { 0,0,0,0,0,0,0 };		//0		CH1
	int nEvent_CH2[] = { 0,0,0,0,0,0,1 };		//1		CH2
	int nEvent_CH3[] = { 0,0,0,0,0,1,0 };		//2		CH3
	int nEvent_CH4[] = { 0,0,0,0,0,1,1 };		//3		CH4
	int nOutrangePaulse[] = { 1,1,1,1,1,1 };	//63	同步脉冲序号位溢出
	int nMarker1[] = { 0,0,0,0,0,1 };			//1		Marker1
	int nMarker2[] = { 0,0,0,0,1,0 };			//2		Marker2
	int nMarker3[] = { 0,0,0,1,0,0 };			//4		Marker3
	int nMarker4[] = { 0,0,1,0,0,0 };			//8		Marker4
	int nGPS_Header_Time[] = { 1,1,0,0,0 };		//24	GPS时间头
	int nGPS_Header_ALT[] = { 1,1,0,0,1 };		//25	经纬高度头
	int nGPS_Info_Time[] = { 1,0,0,0,0 };		//16	GPS时间信息
	int nGPS_Info_ALT[] = { 1,0,0,0,1 };		//17	经纬高度信息

	unsigned int nFill;
	unsigned int nFillstart = 3952129811;	//EB 90 B7 13
	unsigned int nFillend = 4008631773;		//EE EE DD DD
	int sync_ovfl_val = 0;					//溢出次数
	int sync_ovfl_ovfl_val = 0;				//溢出次数的次数

	FILE *fp;
	fp = fopen(cpath, "rb");
	if (!fp) return -1;

	fseek(fp, 0, SEEK_END);
	unsigned long long lSize = ftell(fp);
	rewind(fp);
	unsigned long long lLoop = lSize / sizeof(int) - 1;


	fread(&nFill, sizeof(int), 1, fp);
	nFill = htonl(nFill);
	if (nFill != nFillstart)
	{
		fseek(fp, -4, SEEK_CUR);
		lLoop += 1;
	}

	//lLoop = 3000000;	//测试
	for (int nl = 0; nl < lLoop; nl++)
	{

		uint32_t t_nMSB;
		fread(&t_nMSB, 4, 1, fp);
		t_nMSB = htonl(t_nMSB);
		if (t_nMSB == nFillend)
			break;

		uint8_t t_nFlag = (t_nMSB >> 31);
		uint8_t t_nIndex_ChannalInfo = (t_nMSB << 1) >> 26;
		uint16_t t_nIndex_TimeInfo = (t_nMSB << 7) >> 17;
		uint32_t t_nIndex_PaulseNum = t_nMSB & 0x000003FF;


		LidarALLData Alldata{ 0 };					//存放栈
		Alldata.nFlag = t_nFlag;
		Alldata.nTimeInfo = t_nIndex_TimeInfo;
		Alldata.nPaulseNum = t_nIndex_PaulseNum;
		if (t_nFlag == 0)
		{
			if (sync_ovfl_val > 0)
			{
				t_nIndex_PaulseNum += sync_ovfl_val * RANGE_MAX + sync_ovfl_ovfl_val * RANGE_MAX;
				Alldata.nPaulseNum = t_nIndex_PaulseNum;
			}

			switch (t_nIndex_ChannalInfo)
			{
			case 0:
			{
				Alldata.nChannel = 1; //cout << "CH1" << endl;
				break;
			}
			case 1:
			{
				Alldata.nChannel = 2; //cout << "CH2" << endl;
				break;
			}
			case 2:
			{
				Alldata.nChannel = 3; //cout << "CH3" << endl;
				break;
			}
			case 3:
			{
				Alldata.nChannel = 4; //cout << "CH4" << endl;
				break;
			}
			default:
				Alldata.nFlag = 0;
				Alldata.nChannel = 0;
				Alldata.nPaulseNum = 0;
				Alldata.nTimeInfo = 0;
				break;
			}
		}
		else if (t_nFlag == 1)
		{
			switch (t_nIndex_ChannalInfo)
			{
			case 63:
			{
				if (sync_ovfl_val == RANGE_MAX - 1)
					sync_ovfl_ovfl_val++;
				sync_ovfl_val = t_nIndex_PaulseNum;
				if (sync_ovfl_ovfl_val > 0)
					sync_ovfl_val = RANGE_MAX - 1;

				Alldata.nChannel = 11;
				//cout << "OutRangePaulse" << endl;
				break;
			}
			case 1:
				Alldata.nChannel = 1; //cout << "Marker1" << endl;
				break;
			case 2:
				Alldata.nChannel = 2; //cout << "Marker2" << endl;
				break;
			case 4:
				Alldata.nChannel = 3; //cout << "Marker3" << endl;
				break;
			case 8:
				Alldata.nChannel = 4; //cout << "Marker4" << endl;
				break;
			case 24:
				Alldata.nChannel = 5; //cout << "GPSHeaderTime" << endl;
				break;
			case 25:
				Alldata.nChannel = 6; //cout << "GPSHeaderALT" << endl;
				break;
			case 16:
				Alldata.nChannel = 51; //cout << "GPSInfoTime" << endl;
				break;
			case 17:
				Alldata.nChannel = 61; //cout << "GPSInfoALT" << endl;
				break;
			default:
				Alldata.nFlag = 0;
				Alldata.nChannel = 0;
				Alldata.nPaulseNum = 0;
				Alldata.nTimeInfo = 0;
				break;
			}
		}
		vAlldata.push_back(Alldata);
	}
	fclose(fp);
	return 0;
}


int CalPauseCodeTime(vector<LidarALLData>vAlldata, LidarPointCLoudA *PtA)
{
	size_t sVecSize = vAlldata.size();
	//角度
	double dM2CodeNum = 0.0;		//在一个Z相信号中，每个A相信号的码盘读数(4096?)
	bool bCirM2 = false;			//第一圈Z相
	bool bCirM3 = false;			//第一圈A相
	int nM2_start = 0;				//Z相信号中，光子的起点
	int nM2_end = 0;				//Z相信号中，光子的终点
	int nM2_num = 0;				//在一个Z相信号中，有多少个A相信号
	int nM3_start = 0;				//A相信号中，光子的起点
	int nM3_end = 0;				//A相信号中，光子的终点
	int nNum_M3 = 0;				//A相信号中有多少个脉冲序列号
	int nnM2 = 0;					//第几圈Z相信号
	int nnM3 = 0;					//第几圈A相信号

	for (size_t i = 0; i < sVecSize; i++)
	{
		if (vAlldata[i].nFlag == 1 && vAlldata[i].nChannel == 2 && bCirM2 == true)
		{
			nM2_end = (int)i;
			if (nM2_end - nM2_start > 10)
			{
				dM2CodeNum = 360.0 / nM2_num;
				nnM2++;
				nnM3 = 0;

				double dCodeSum = 0.0;		//当前光子码盘读数
				double dCodeTemp = 0.0;		//每个光子在A相之间码盘读数
				for (int j = nM2_start; j < nM2_end; j++)
				{
					if (vAlldata[j].nFlag == 1 && vAlldata[j].nChannel == 3 && bCirM3 == true)
					{
						nM3_end = j;
						nnM3++;

						int nn1 = vAlldata[nM3_start].nPaulseNum;	//A相第一个序列号
						int nn2 = vAlldata[nM3_end].nPaulseNum;		//A相最后一个序列号
						int m = 0;
						while (vAlldata[nM3_start + m].nFlag == 1)
						{
							m++;
							nn1 = vAlldata[nM3_start + m].nPaulseNum;
							if (nM3_start + m >= nM3_end)break;
						}
						m = 0;
						while (vAlldata[nM3_end - m].nFlag == 1)
						{
							m++;
							nn2 = vAlldata[nM3_end - m].nPaulseNum;
							if (nM3_end - m <= nM3_start)break;
						}
						nNum_M3 = nn2 - nn1;
						if (nn1 == nn2 && nn1 != 0)nNum_M3 = 1;
						if (nNum_M3 > 0)
						{
							dCodeTemp = dM2CodeNum / nNum_M3;
							int nb = 1;									//每个A相信号角度的倍数
							for (int k = 0; k < (nM3_end - nM3_start); k++)
							{
								if (vAlldata[nM3_start + k].nPaulseNum == nn1)
								{
									PtA[nM3_start + k].dAngle = dCodeSum + dCodeTemp * nb;
									PtA[nM3_start + k].nSingleZ = nnM2;
									PtA[nM3_start + k].nSingleA = nnM3;
								}
								else if (vAlldata[nM3_start + k].nPaulseNum > nn1)
								{
									nb++;
									nn1++;
									k--;
								}
							}
						}
						dCodeSum += dM2CodeNum;
						nM3_start = nM3_end;
					}
					else if (vAlldata[j].nFlag == 1 && vAlldata[j].nChannel == 3 && bCirM3 == false)
					{
						nM3_start = j;
						bCirM3 = true;
					}

				}
				nM2_start = nM2_end;
				nM2_num = 0;

			}

		}
		else if (vAlldata[i].nFlag == 1 && vAlldata[i].nChannel == 2 && bCirM2 == false)
		{
			nM2_num = 0;
			nM2_start = (int)i;
			bCirM2 = true;
		}
		if (vAlldata[i].nFlag == 1 && vAlldata[i].nChannel == 3)nM2_num++;

	}


	//时间
	int nT1, nT2, nT3;
	nT1 = nT2 = nT3 = 0;
	double dT = 0;
	int nt = 0;
	bool bT = false;
	bool bCirM1 = false;
	int nM1_start = 0;
	int nM1_end = 0;
	int nNum_M1 = 0;
	for (size_t i = 0; i < sVecSize; i++)
	{
		if (vAlldata[i].nFlag == 1 && vAlldata[i].nChannel == 51)
		{
			bT = true;
			nt++;
			int ntemp1[15], ntemp2[10], ntemp[25];
			dec2bin(vAlldata[i].nTimeInfo, ntemp1, 15);
			dec2bin(vAlldata[i].nPaulseNum, ntemp2, 10);
			for (int i = 0; i < 15; i++)
				ntemp[i] = ntemp1[i];
			for (int i = 0; i < 10; i++)
				ntemp[i + 15] = ntemp2[i];

			int nhex = bin2dec(ntemp, 25);
			string shex = dec2hex(nhex);

			if (nt == 1)
			{
				nT1 = stoi(shex);
				nT1 += 20000000;
			}
			if (nt == 2)
			{
				if (shex == "")
					nT2 = 0;
				else
				{
					nT2 = stoi(shex);
					int nT2hour = nT2 / 10000;
					int nT2Min = (nT2 - nT2hour * 10000) / 100;
					int nT2Sec = nT2 - nT2hour * 10000 - nT2Min * 100;
					nT2 = nT2hour * 3600 + nT2Min * 60 + nT2Sec;
				}
			}
			if (nt == 3)
			{
				if (shex == "")
					nT3 = 0;
				else
					nT3 = stoi(shex);
				dT = nT2 + (double)nT3*0.001;
				nt = 0;
			}

		}
		if (vAlldata[i].nFlag == 1 && vAlldata[i].nChannel == 1 && bCirM1 == true)
		{
			nM1_end = (int)i;

			int nn1 = vAlldata[nM1_start].nPaulseNum;	//PPS第一个序列号
			int nn2 = vAlldata[nM1_end].nPaulseNum;		//PPS最后一个序列号
			int m = 0;
			while (vAlldata[nM1_start + m].nFlag == 1)
			{
				m++;
				nn1 = vAlldata[nM1_start + m].nPaulseNum;
			}
			m = 0;
			while (vAlldata[nM1_end - m].nFlag == 1)
			{
				m++;
				nn2 = vAlldata[nM1_end - m].nPaulseNum;
			}
			nNum_M1 = nn2 - nn1;
			int nb = 1;
			for (int j = 0; j < (nM1_end - nM1_start); j++)
			{
				if (vAlldata[nM1_start + j].nPaulseNum == nn1 && bT == true)
				{
					PtA[nM1_start + j].dSegTime = dT + nb / (double)nNum_M1 + 18;	//2019年 UTC +18s -> GPS
					PtA[nM1_start + j].nDate = nT1;
				}
				if (vAlldata[nM1_start + j].nPaulseNum > nn1)
				{
					nb++;
					nn1++;
					j--;
				}
			}
			nM1_start = nM1_end;
		}
		else if (vAlldata[i].nFlag == 1 && vAlldata[i].nChannel == 1 && bCirM1 == false)
		{
			nM1_start = (int)i;
			bCirM1 = true;
		}

	}

	for (size_t i = 0; i < sVecSize; i++)
	{
		PtA[i].nChannel = vAlldata[i].nChannel;
		PtA[i].nPauseNum = vAlldata[i].nPaulseNum;
		PtA[i].dL = vAlldata[i].nTimeInfo*0.000000000001 * 64 * LightSpeed / 2.0;
	}

	return 0;
}


void CalBtXYZ(LidarPointCLoudA* &PtA, int nsize, double dAngle, double dR1, double dR2)
{
	for (size_t i = 0; i < nsize; i++)
	{
		if (PtA[i].dAngle > 0)
		{
			double dPsi = (360 - PtA[i].dAngle - dAngle)*PI / 180.0;
			double dVectorNormalRaypath1 = (2.5033e66*pow(cos(dPsi), 2.0) - 1.3571e67*cos(dPsi) +
				4.4718e65*pow(cos(dPsi), 4.0) + 8.786e65) / ((1.3124e67*cos(dPsi) + 8.6388e65*pow(cos(dPsi), 2.0) - 5.157e67));
			double dVectorNormalRaypath2 = (1.1697e66*sin(2.0*dPsi) + 5.2036e63*sin(4.0*dPsi) + 2.3715e65*sin(3.0*dPsi) -
				1.8639e67*sin(dPsi)) / (2.6247e67*cos(dPsi) + 1.7278e66*pow(cos(dPsi), 2.0) - 1.0314e68);
			double dVectorNormalRaypath3 = (8.9436e64*pow(cos(dPsi), 3.0) - 6.9111e65*pow(cos(dPsi), 2.0) - 5.16e66*cos(dPsi) +
				5.8872e63*pow(cos(dPsi), 4.0) + 2.0277e67) / (5.2495e66*cos(dPsi) + 3.4555e65*pow(cos(dPsi), 2.0) - 2.0628e67);

			PtA[i].dL += dR1 + dR2 * PtA[i].dL;

			PtA[i].dX = PtA[i].dL * dVectorNormalRaypath1;
			PtA[i].dY = PtA[i].dL * dVectorNormalRaypath2;
			PtA[i].dZ = PtA[i].dL * dVectorNormalRaypath3;
		}

	}
}



vector<POS> ReadPOS(string pos_path)
{
	vector<POS> pos_data;
	ifstream pos_file_stream(pos_path);
	stringstream pos_buffer;
	pos_buffer << pos_file_stream.rdbuf();
	string start_marker = "  (time in Sec, distance in Meters, position in Meters, lat, long in Degrees, orientation angles and SD in Degrees, velocity in Meter/Sec, position SD in Meters)  ";
	bool start_flag = false;
	string line;
	while (getline(pos_buffer, line))
	{
		if (!start_flag)
		{
			if (line.compare(start_marker) == 0)
			{
				start_flag = true;
				continue;
			}
		}
		else
		{
			if (line.length() == 0)
			{
				continue;
			}
			stringstream rs(line);
			POS pos = { 0 };
			rs >> pos.Time >> pos.Distance >> pos.Easting >> pos.Northing >> pos.EllipsoidHeight
				>> pos.Latitude >> pos.Longitude >> pos.Height >> pos.Roll >> pos.Pitch >> pos.Heading
				>> pos.EastVelocity >> pos.NorthVelocity >> pos.UpVelocity >> pos.EastSD >> pos.NorthSD
				>> pos.HeightSD >> pos.RollSD >> pos.PitchSD >> pos.HeadingSD;
			pos_data.push_back(pos);
		}
	}
	return pos_data;
}

vector<WFW> ReadWFW(string pos_path)
{
	vector<WFW> pos_data;
	ifstream pos_file_stream(pos_path);
	stringstream pos_buffer;
	pos_buffer << pos_file_stream.rdbuf();
	string start_marker = " ID, # EVENT, TIME (s), EASTING, NORTHING, ELLIPSOID HEIGHT, OMEGA, PHI, KAPPA, LAT, LONG";
	bool start_flag = false;
	string line;
	while (getline(pos_buffer, line))
	{
		if (!start_flag)
		{
			if (line.compare(start_marker) == 0)
			{
				start_flag = true;
				continue;
			}
		}
		else
		{
			if (line.length() == 0)
			{
				continue;
			}
			stringstream rs(line);
			WFW pos = { 0 };
			rs >> pos.nEvent >> pos.dTime >> pos.dEasting >> pos.dNorthing >> pos.dHeight >> pos.dOmega >>
				pos.dPhi >> pos.dKappa >> pos.dLat >> pos.dLong;
			pos_data.push_back(pos);
		}
	}
	return pos_data;
}


int CheckStacking(vector<LidarALLData>vFilterData)
{
	int nMaxNum = 1;
	int nMinNum = 0;
	int *nNum = new int[500];
	int nMaxRange = 0;
	int nMaxLoc = 0;
	for (int i = 0; i < 500; i++)
	{
		int nNumTemp = 0;
		for (size_t j = 0; j < vFilterData.size(); j+=10000)
		{
			double dL = vFilterData[j].nTimeInfo*0.000000000001 * 64 * LightSpeed / 2.0;
			if (vFilterData[i].nFlag != 1 && dL > nMinNum&&dL < nMaxNum)
				nNumTemp++;
		}
		nNum[i] = nNumTemp;
		nMaxNum++;
		nMinNum++;
	}
	for (int i = 50; i < 500; i++)
	{
		if (nNum[i] > nMaxRange)
		{
			nMaxRange = nNum[i];
			nMaxLoc = i;
		}
	}
	delete[]nNum; nNum = NULL;

	double dUsuDis = 0;
	int nM1_start = 0;
	int nM1_end = 0;
	int nNum_M1 = 0;
	bool bCirM1 = false;
	int nSum = 0;
	if (nMaxLoc < 150)
	{
		for (size_t i = 0; i < vFilterData.size(); i++)
		{
			if (vFilterData[i].nFlag == 1 && vFilterData[i].nChannel == 1 && bCirM1 == true)
			{
				nM1_end = (int)i;

				int nn1 = vFilterData[nM1_start].nPaulseNum;
				int nn2 = vFilterData[nM1_end].nPaulseNum;
				int m = 0;
				while (vFilterData[nM1_start + m].nFlag == 1)
				{
					m++;
					nn1 = vFilterData[nM1_start + m].nPaulseNum;
				}
				m = 0;
				while (vFilterData[nM1_end - m].nFlag == 1)
				{
					m++;
					nn2 = vFilterData[nM1_end - m].nPaulseNum;
				}
				nNum_M1 = nn2 - nn1;
				break;
			}
			else if (vFilterData[i].nFlag == 1 && vFilterData[i].nChannel == 1 && bCirM1 == false)
			{
				nM1_start = (int)i;
				bCirM1 = true;
			}
		}
		if (nNum_M1 > 0)
			dUsuDis = LightSpeed / nNum_M1 * 0.5;
		else
			dUsuDis = 0;
	}

	return dUsuDis;
}

vector<LidarALLData> HistogramExFilter(vector<LidarALLData>vAlldata, int nValue)
{
	vector<LidarALLData>vFilter;

	int nMaxNum = 1;
	int nMinNum = 0;
	int *nNum = new int[500];
	int nMaxRange = 0;
	int nMaxLoc = 0;
	for (int i = 0; i < 500; i++)
	{
		int nNumTemp = 0;
		for (size_t j = 0; j < vAlldata.size(); j++)
		{
			double dL = vAlldata[j].nTimeInfo*0.000000000001 * 64 * LightSpeed / 2.0;
			if (vAlldata[i].nFlag != 1 && dL > nMinNum&&dL < nMaxNum)
				nNumTemp++;
		}
		nNum[i] = nNumTemp;
		nMaxNum++;
		nMinNum++;
	}
	for (int i = 50; i < 500; i++)
	{
		if (nNum[i] > nMaxRange)
		{
			nMaxRange = nNum[i];
			nMaxLoc = i;
		}
	}

	for (size_t i = 0; i < vAlldata.size(); i++)
	{
		double dL = vAlldata[i].nTimeInfo*0.000000000001 * 64 * LightSpeed / 2.0;
		if (vAlldata[i].nFlag == 1 || (dL > nMaxLoc - nValue && dL < nMaxLoc + nValue))
		{
			vFilter.push_back(vAlldata[i]);
		}
	}
	delete[]nNum; nNum = NULL;

	return vFilter;
}

vector<LidarALLData>HistogramFilter(vector<LidarALLData>vAlldata, int nValue)
{
	vector<LidarALLData>vFilterData;
	////////////////////////////////////////////////////
	int nMaxNum = 1;						//1m分辨率上限
	int nMinNum = 0;						//1m分辨率下限
	int nPaulseSatart = 0;					//时间窗口起始 光子个数起始位置/脉冲个数
	int nPaulseEnd = 1000;					//时间窗口终止 光子个数终止位置/脉冲个数
	int nStart = 0;							//斜距窗口起始
	int nEnd = 0;							//斜距窗口终止
	bool bValldata = false;					//数据size控制
	double *dNum = new double[500]();		//概率密度统计
	StatsMax *GroupMax = new StatsMax[10]();

	while (bValldata == false)
	{
		memset(dNum, 0, sizeof(double) * 500);
		memset(GroupMax, 0, sizeof(StatsMax) * 10);
		nMaxNum = 1;
		nMinNum = 0;

		for (int i = 0; i < 500; i++)
		{
			int nNumTemp = 0;
			int nMark = 0;
			for (int j = nPaulseSatart; j < nPaulseEnd; j++)
			{
				double dLtimeinfo = vAlldata[j].nTimeInfo*pow(10, -12) * 64 * LightSpeed / 2.0;
				if (vAlldata[j].nFlag != 1 && dLtimeinfo > nMinNum && dLtimeinfo < nMaxNum)
					nNumTemp++;
				if (vAlldata[j].nFlag == 0)
					nMark++;
			}
			dNum[i] = (double)nNumTemp / nMark;
			nMaxNum += 1;
			nMinNum += 1;
			//cout << i<<" "<< setprecision(6)<<dNum[i] << endl;
		}

		double dNoise = 0.0;
		for (int i = 30; i < 50; i++)
		{
			if (dNum[i] > dNoise)
				dNoise = dNum[i];
		}
		dNoise = nValue * dNoise;
		//cout << dNoise << endl;

		double dMaxTemp = 0.0;
		int nMaxLocTemp = 0;
		for (int i = 50; i < 500; i++)
		{
			if (dNum[i] > dMaxTemp)
			{
				dMaxTemp = dNum[i];
				nMaxLocTemp = i;
			}
		}
		nStart = nMaxLocTemp - 10;
		nEnd = nMaxLocTemp + 10;
		if (nEnd > 300)
			nEnd = 300;


		for (int m = 0; m < 10; m++)
		{
			for (int i = nStart; i < nEnd; i++)
			{
				if (dNum[i] > GroupMax[m].dMaxRange && m == 0)
				{
					GroupMax[m].dMaxRange = dNum[i];
					GroupMax[m].nMaxLoc = i;
				}
				else if (dNum[i] > GroupMax[m].dMaxRange && dNum[i] < GroupMax[m - 1].dMaxRange)
				{
					GroupMax[m].dMaxRange = dNum[i];
					GroupMax[m].nMaxLoc = i;
				}
			}
			//cout << GroupMax[m].nMaxLoc << " " << GroupMax[m].dMaxRange << " " << dNum[GroupMax[m].nMaxLoc] << endl;
			for (int i = nPaulseSatart; i < nPaulseEnd; i++)
			{
				double dLtimeinfo = vAlldata[i].nTimeInfo*pow(10, -12) * 64 * LightSpeed / 2.0;
				if (vAlldata[i].nFlag == 1 || (dLtimeinfo > GroupMax[m].nMaxLoc - 1 && dLtimeinfo < GroupMax[m].nMaxLoc && GroupMax[m].dMaxRange > dNoise))
				{
					vAlldata[i].nClass = 1;
				}
			}
		}
		//cout << endl;

		nPaulseSatart = nPaulseEnd;
		nPaulseEnd += 1000;
		if (nPaulseEnd > (int)vAlldata.size())
			nPaulseEnd = (int)vAlldata.size();
		if (nPaulseSatart == (int)vAlldata.size())
			bValldata = true;

	}

	for (size_t i = 0; i < vAlldata.size(); i++)
	{
		if (vAlldata[i].nClass == 1)
		{
			LidarALLData tempdata;
			tempdata = vAlldata[i];
			vFilterData.push_back(tempdata);
		}
	}
	delete[]dNum; dNum = NULL;
	delete[]GroupMax; GroupMax = NULL;

	return vFilterData;
}


bool compareItemByTimeInfo(const GroupItem &a, const GroupItem &b) {
	return a.data.nTimeInfo < b.data.nTimeInfo;
}

bool compareItemByIndex(const GroupItem &a, const GroupItem &b) {
	return a.index < b.index;
}

bool compareStatsByMean(const GroupStats &a, const GroupStats &b) {
	return a.mean < b.mean;
}
int HALF_K_NEIGHBOUR = 20;
double N_STDEV = 1.0;
// filter_period
int PERIOD_GROUP_COUNT = 50000 / PULSE_NUM_INT;
double MIN_MEAN_PERCENT = 0.20;

int filter(vector<LidarALLData>&vAlldata, vector<LidarALLData>&filteredData) {
	int i = 0;
	while (true) {
		if (i >= vAlldata.size()) {
			break;
		}
		vector<GroupItem> group;
		i = getGroup(vAlldata, group, i);
		if (group.size() == 0) {
			continue;
		}
		GroupStats stats = statsGroup(group);
		sort(group.begin(), group.end(), compareItemByIndex);
		for (int j = 0; j < group.size(); j++) {
			// keep marker
			if (group[j].data.nFlag != 1) {
				if (group[j].kmean_dist > stats.mean + stats.stdev * N_STDEV) {
					continue;
				}
			}
			//if (group[j].kmean_dist < stats.mean - stats.stdev * N_STDEV) {
			//  continue;
			//}
			vAlldata[group[j].index].nClass = 1;
			filteredData.push_back(group[j].data);
		}
	}
	return 0;
}

int filter_period(vector<LidarALLData>&vAlldata, vector<LidarALLData>&filteredData) {
	int i = 0;
	while (true) {
		if (i >= vAlldata.size()) {
			break;
		}
		vector<vector<GroupItem>> group_list;
		vector<GroupStats> stats_list;
		for (int p = 0; p < PERIOD_GROUP_COUNT; p++) {
			if (i >= vAlldata.size()) {
				break;
			}
			vector<GroupItem> group;
			i = getGroup(vAlldata, group, i);
			if (group.size() == 0) {
				continue;
			}
			GroupStats stats = statsGroup(group);
			group_list.push_back(group);
			stats_list.push_back(stats);
		}
		if (group_list.size() == 0) {
			continue;
		}
		sort(stats_list.begin(), stats_list.end(), compareStatsByMean);
		int pstats_index = (stats_list.size() - 1)*MIN_MEAN_PERCENT;
		GroupStats period_stats = stats_list[pstats_index];
		for (int p = 0; p < group_list.size(); p++) {
			vector<GroupItem> group = group_list[p];
			sort(group.begin(), group.end(), compareItemByIndex);
			for (int j = 0; j < group.size(); j++) {
				// keep marker
				if (group[j].data.nFlag != 1) {
					if (group[j].kmean_dist > period_stats.mean + period_stats.stdev * N_STDEV) {
						continue;
					}
				}
				//if (group[j].kmean_dist < stats.mean - stats.stdev * N_STDEV) {
				//  continue;
				//}
				vAlldata[group[j].index].nClass = 1;
				filteredData.push_back(group[j].data);
			}
		}
	}
	return 0;
}


int getGroup(vector<LidarALLData>&vAlldata, vector<GroupItem>&group, int start) {
	int i = start;
	int startPulseNum = 0;
	for (; true; i++) {
		if (i >= vAlldata.size()) {
			break;
		}
		if (startPulseNum == 0) {
			startPulseNum = vAlldata[i].nPaulseNum;
		}
		if (vAlldata[i].nPaulseNum > startPulseNum + PULSE_NUM_INT) {
			break;
		}
		// filter glass
		//if (vAlldata[i].nTimeInfo <= 105) {
		if (vAlldata[i].nTimeInfo <= GLASS_FILTER_THRESHOLD) {
			// keep marker
			if (vAlldata[i].nFlag != 1) {
				continue;
			}
		}
		GroupItem item;
		item.data = vAlldata[i];
		item.index = i;
		item.kmean_dist = 0;
		group.push_back(item);
	}
	return i;
}
GroupStats statsGroup(vector<GroupItem> &group) {
	int half_k = HALF_K_NEIGHBOUR;
	int k = half_k * 2;
	if (k > group.size()) {
		k = group.size();
	}
	sort(group.begin(), group.end(), compareItemByTimeInfo);
	// TODO NOT STATS MARKER DATA
	for (int i = 0; i < group.size(); i++) {
		int start;
		if (i - half_k < 0)
		{
			start = 0;
		}
		else if (i + half_k > group.size() - 1)
		{
			start = group.size() - k - 1;
		}
		else
		{
			start = i - half_k;
		}
		uint16_t i_nTimeInfo = group[i].data.nTimeInfo;
		double sum_dist = 0.0;
		for (int j = 0; j < k + 1; j++) {
			sum_dist += abs(group[start + j].data.nTimeInfo - i_nTimeInfo);
		}
		group[i].kmean_dist = sum_dist / k;
	}
	/*
	double group_dist_sum = 0.0;
	for (int i = 0; i < group.size(); i++) {
		group_dist_sum += group[i].kmean_dist;
	}
	double group_dist_mean = group_dist_sum / group.size();
	double group_dist_accum = 0.0;
	for (int i = 0; i < group.size(); i++) {
		double v = (group[i].kmean_dist - group_dist_mean)*(group[i].kmean_dist - group_dist_mean);
		group_dist_accum += v;
	}
	double stdev = sqrt(group_dist_accum / group.size());
	*/
	vector<double> kmean_dist_list;
	for (int i = 0; i < group.size(); i++) {
		kmean_dist_list.push_back(group[i].kmean_dist);
	}
	sort(kmean_dist_list.begin(), kmean_dist_list.end());
	int kdl_index = (kmean_dist_list.size() - 1)*MIN_MEAN_PERCENT;
	GroupStats stats;
	stats.mean = kmean_dist_list[kdl_index];
	stats.stdev = stats.mean * 0.2;
	return stats;
}

void filter_mDBSCAN(std::vector<LidarALLData>&vAlldata, std::vector<LidarALLData>&filteredData) {
	int i = 0;
	while (true) {
		if (i >= vAlldata.size()) {
			break;
		}
		std::vector<GroupItem> group;
		std::vector<GroupItem> marker;
		i = getGroupAndMarker(vAlldata, group, marker, i);
		if (group.size() == 0) {
			continue;
		}

		for (int m = 0; m < marker.size(); m++) {
			int index = marker[m].index;
			filteredData.push_back(vAlldata[index]);
			vAlldata[index].nClass = MARKER_CLUSTER_K;
		}

		std::map<int, DataNeighbour> neighbours;
		std::set<int> core_set;
		getNeighbours(group, neighbours, core_set);
		std::set<int> unvisited_core_set = core_set;
		std::set<int> unvisited_set = initUnvisitedSet(group);
		int cluster_k = 10;
		while (unvisited_core_set.size() > 0) {
			std::queue<int> q;
			int index = *(unvisited_core_set.begin());
			filteredData.push_back(vAlldata[index]);
			vAlldata[index].nClass = cluster_k;
			q.push(index);
			unvisited_set.erase(index);
			if (index % 100 == 0) {
				std::cout << "filtered point i=" << index << " nTimeInfo=" << vAlldata[index].nTimeInfo << std::endl;
			}
			while (!q.empty()) {
				int data_index = q.front();
				q.pop();
				if (core_set.find(data_index) == core_set.end()) {
					continue;
				}
				unvisited_core_set.erase(data_index);
				std::vector<int> selected_neighbours = neighbours[data_index].neighbours;
				for (auto iter = selected_neighbours.begin(); iter != selected_neighbours.end(); iter++) {
					int neighbour_index = *iter;
					if (unvisited_set.find(neighbour_index) == unvisited_set.end()) {
						continue;
					}
					filteredData.push_back(vAlldata[neighbour_index]);
					vAlldata[neighbour_index].nClass = cluster_k;
					q.push(neighbour_index);
					unvisited_set.erase(neighbour_index);
				}
			}
			cluster_k += 1;
		}
	}
}

int getGroupAndMarker(std::vector<LidarALLData>&vAlldata, std::vector<GroupItem>&group, std::vector<GroupItem> &marker, int start) {
	int i = start;
	uint32_t startPulseNum = 0;
	for (; true; i++) {
		if (i >= vAlldata.size()) {
			break;
		}
		if (startPulseNum == 0) {
			startPulseNum = vAlldata[i].nPaulseNum;
		}
		if (vAlldata[i].nPaulseNum > startPulseNum + PULSE_NUM_INT) {
			break;
		}
		// keep marker
		if (vAlldata[i].nFlag == 1) {
			GroupItem item;
			item.data = vAlldata[i];
			item.index = i;
			item.kmean_dist = 0;
			marker.push_back(item);
			continue;
		}
		// filter glass
		if (vAlldata[i].nTimeInfo <= GLASS_FILTER_THRESHOLD) {
			continue;
		}
		GroupItem item;
		item.data = vAlldata[i];
		item.index = i;
		item.kmean_dist = 0;
		group.push_back(item);
	}
	return i;
}


void getNeighbours(std::vector<GroupItem> &group, std::map<int, DataNeighbour> &neighbours, std::set<int> &core_set) {
	// estimate params
	int min_pts = MIN_PTS;
	sort(group.begin(), group.end(), compareItemByTimeInfo);
	std::vector<double> windows_dist_mean;
	for (int i = 0; i + min_pts - 1 < group.size(); i += min_pts) {
		double sum = 0;
		for (int j = i; j < i + min_pts; j++) {
			sum += group[j].data.nTimeInfo;
		}
		if (sum == 0) {
			continue;
		}
		double mean = sum / min_pts;
		double dist_sum = 0;
		for (int j = i; j < i + min_pts; j++) {
			dist_sum += abs(group[j].data.nTimeInfo - mean);
		}
		double dist_mean = dist_sum / min_pts;
		windows_dist_mean.push_back(dist_mean);
	}
	sort(windows_dist_mean.begin(), windows_dist_mean.end());
	int selected_dist_mean_index = 0;
	if (windows_dist_mean.size() > 0) {
		selected_dist_mean_index = int((windows_dist_mean.size() - 1) * MEAN_DIST_TOP_K_PERCENT);
	}
	double distance_threshold = windows_dist_mean[selected_dist_mean_index];
	distance_threshold = distance_threshold / min_pts * 4;
	if (distance_threshold < MIN_DIST_THRESHOLD) {
		distance_threshold = MIN_DIST_THRESHOLD;
	}
	if ((*group.begin()).index % 100 == 0) {
		std::cout << "estimate params" << " i=" << (*group.begin()).index << " distance_threshold=" << distance_threshold
			<< " selected_dist_mean_index=" << selected_dist_mean_index << std::endl;
	}

	for (int i = 0; i < group.size(); i++) {
		DataNeighbour data_neighbour;
		data_neighbour.data = group[i].data;
		for (int j = i - 1; j >= 0; j--) {
			int dist = abs(group[j].data.nTimeInfo - group[i].data.nTimeInfo);
			if (dist > distance_threshold) {
				break;
			}
			data_neighbour.neighbours.push_back(group[j].index);
		}
		for (int k = i + 1; k < group.size(); k++) {
			int dist = abs(group[k].data.nTimeInfo - group[i].data.nTimeInfo);
			if (dist > distance_threshold) {
				break;
			}
			data_neighbour.neighbours.push_back(group[k].index);
		}
		neighbours[group[i].index] = data_neighbour;
		if (data_neighbour.neighbours.size() >= min_pts) {
			core_set.insert(group[i].index);
		}
	}
}

std::set<int> initUnvisitedSet(std::vector<GroupItem> &group) {
	std::set<int> unvisited_set;
	for (int i = 0; i < group.size(); i++) {
		unvisited_set.insert(group[i].index);
	}
	return unvisited_set;
}


vector<LidarALLData> ChooseChannel(vector<LidarALLData>vFilter, int nChannelNum)
{
	vector<LidarALLData>vFilterAll;
	switch (nChannelNum)
	{
	case 1:
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			if (vFilter[j].nFlag == 1 || vFilter[j].nChannel == nChannelNum)
				vFilterAll.push_back(vFilter[j]);
		}
		break;
	case 2:
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			if (vFilter[j].nFlag == 1 || vFilter[j].nChannel == nChannelNum)
				vFilterAll.push_back(vFilter[j]);
		}
		break;
	case 3:
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			if (vFilter[j].nFlag == 1 || vFilter[j].nChannel == nChannelNum)
				vFilterAll.push_back(vFilter[j]);
		}
		break;
	case 4:
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			if (vFilter[j].nFlag == 1 || vFilter[j].nChannel == nChannelNum)
				vFilterAll.push_back(vFilter[j]);
		}
		break;
	case 12:
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			if (vFilter[j].nFlag == 1 || vFilter[j].nChannel == 1 || vFilter[j].nChannel == 2)
				vFilterAll.push_back(vFilter[j]);
		}
		break;
	case 13:
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			if (vFilter[j].nFlag == 1 || vFilter[j].nChannel == 1 || vFilter[j].nChannel == 3)
				vFilterAll.push_back(vFilter[j]);
		}
		break;
	case 14:
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			if (vFilter[j].nFlag == 1 || vFilter[j].nChannel == 1 || vFilter[j].nChannel == 4)
				vFilterAll.push_back(vFilter[j]);
		}
		break;
	case 23:
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			if (vFilter[j].nFlag == 1 || vFilter[j].nChannel == 2 || vFilter[j].nChannel == 3)
				vFilterAll.push_back(vFilter[j]);
		}
		break;
	case 24:
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			if (vFilter[j].nFlag == 1 || vFilter[j].nChannel == 2 || vFilter[j].nChannel == 4)
				vFilterAll.push_back(vFilter[j]);
		}
		break;
	case 34:
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			if (vFilter[j].nFlag == 1 || vFilter[j].nChannel == 3 || vFilter[j].nChannel == 4)
				vFilterAll.push_back(vFilter[j]);
		}
		break;
	case 123:
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			if (vFilter[j].nFlag == 1 || vFilter[j].nChannel == 1 || vFilter[j].nChannel == 2 || vFilter[j].nChannel == 3)
				vFilterAll.push_back(vFilter[j]);
		}
		break;
	case 124:
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			if (vFilter[j].nFlag == 1 || vFilter[j].nChannel == 1 || vFilter[j].nChannel == 2 || vFilter[j].nChannel == 4)
				vFilterAll.push_back(vFilter[j]);
		}
		break;
	case 134:
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			if (vFilter[j].nFlag == 1 || vFilter[j].nChannel == 1 || vFilter[j].nChannel == 3 || vFilter[j].nChannel == 4)
				vFilterAll.push_back(vFilter[j]);
		}
		break;
	case 234:
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			if (vFilter[j].nFlag == 1 || vFilter[j].nChannel == 4 || vFilter[j].nChannel == 2 || vFilter[j].nChannel == 3)
				vFilterAll.push_back(vFilter[j]);
		}
		break;
	case 1234:
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			if (vFilter[j].nFlag == 1 || vFilter[j].nChannel == 1 || vFilter[j].nChannel == 2 || vFilter[j].nChannel == 3 || vFilter[j].nChannel == 4)
				vFilterAll.push_back(vFilter[j]);
		}
		break;
	default:
		break;
	}
	return vFilterAll;
}