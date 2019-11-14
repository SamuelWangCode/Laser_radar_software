#include "ccDataProcessing.h"
LidarPointCLoudA* KNNProcess(QStringList &qsPath, int &nInterval, size_t &nVecSize, int &nChannelNum, QProgressDialog *progress)
{
	char *cPath;
	//vector<LidarALLData>vFilter1;
	vector<LidarALLData>vFilterAll;
	for (int i = 0; i < qsPath.count(); i++)
	{
		QByteArray qba;
		qba = qsPath[i].toLatin1();
		cPath = qba.data();

		vector<LidarALLData>vAlldata;
		vector<LidarALLData>vFilter;
		ReadSiglePhotonData(cPath, vAlldata,progress);
		//vFilter1 = HistogramExFilter(vAlldata, nInterval,progress);
		filter(vAlldata, vFilter, progress);

		for (size_t j = 0; j < vFilter.size(); j++)
		{
			progress->setValue(i * 100 / vFilter.size() / 15 + 65);
			vFilterAll.push_back(vFilter[j]);
		}
		vAlldata.clear();
		vFilter.clear();
	}
	vFilterAll = ChooseChannel(vFilterAll, nChannelNum);
	nVecSize = vFilterAll.size();
	LidarPointCLoudA* PtA = new LidarPointCLoudA[nVecSize]();
	CalPauseCodeTime(vFilterAll, PtA, progress);
	progress->setValue(100);
	progress->close();
	return PtA;
}

LidarPointCLoudA* HistogramFiltProcess(QStringList &qsPath, int &nVale, size_t &nVecSize, int &nChannelNum)
{
	char *cPath;
	vector<LidarALLData>vFilterAll;

	for (int i = 0; i < qsPath.count(); i++)
	{
		QByteArray qba;
		qba = qsPath[i].toLatin1();
		cPath = qba.data();

		vector<LidarALLData>vAlldata;
		vector<LidarALLData>vFilter;
		ReadSiglePhotonData(cPath, vAlldata,new QProgressDialog());
		vFilter = HistogramFilter(vAlldata, nVale);
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			vFilterAll.push_back(vFilter[j]);
		}

		vAlldata.clear();
		vFilter.clear();
	}
	vFilterAll = ChooseChannel(vFilterAll, nChannelNum);

	nVecSize = vFilterAll.size();
	LidarPointCLoudA* PtA = new LidarPointCLoudA[nVecSize]();
	CalPauseCodeTime(vFilterAll, PtA, new QProgressDialog());

	return PtA;
}


LidarPointCLoudA* mDBSCAN_filterprocessing(QStringList &qsPath, int &nVale, size_t &nVecSize, int& nChannelNum)
{
	char *cPath;
	vector<LidarALLData>vFilterAll;

	for (int i = 0; i < qsPath.count(); i++)
	{
		QByteArray qba;
		qba = qsPath[i].toLatin1();
		cPath = qba.data();

		vector<LidarALLData>vAlldata;
		vector<LidarALLData>vFilter;
		ReadSiglePhotonData(cPath, vAlldata, new QProgressDialog());
		filter_mDBSCAN(vAlldata, vFilter);
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			vFilterAll.push_back(vFilter[j]);
		}

		vAlldata.clear();
		vFilter.clear();
	}
	vFilterAll = ChooseChannel(vFilterAll, nChannelNum);

	nVecSize = vFilterAll.size();
	LidarPointCLoudA* PtA = new LidarPointCLoudA[nVecSize]();
	CalPauseCodeTime(vFilterAll, PtA, new QProgressDialog());

	return PtA;
}


LidarPointCLoudA* Unfilterprocessing(QStringList &qsPath, size_t &nVecSize, int &nChannelNum)
{
	char *cPath;
	vector<LidarALLData>vAlldata;
	vector<LidarALLData>vFilterAll;

	for (int i = 0; i < qsPath.count(); i++)
	{
		QByteArray qba;
		qba = qsPath[i].toLatin1();
		cPath = qba.data();

		ReadSiglePhotonData(cPath, vAlldata, new QProgressDialog());
		for (size_t j = 0; j < vAlldata.size(); j++)
		{
			vFilterAll.push_back(vAlldata[j]);
		}
		vAlldata.clear();
	}
	vFilterAll = ChooseChannel(vFilterAll, nChannelNum);

	//double dUsuDis = CheckStacking(vFilterAll);
	nVecSize = vFilterAll.size();
	LidarPointCLoudA* PtA = new LidarPointCLoudA[nVecSize]();
	CalPauseCodeTime(vFilterAll, PtA, new QProgressDialog());

	return PtA;
}


int WritePreProcessingFile(QString &qsOutPath, LidarPointCLoudA* PtA, size_t &nVecSize)
{
	char* cPath;
	QByteArray qba;
	qba = qsOutPath.toLatin1();
	cPath = qba.data();

	ofstream ft(cPath, ios::out | ios::binary);
	if (!ft) return -1;
	for (size_t i = 0; i < nVecSize; i++)
	{
		if (PtA[i].dSegTime > 0 && PtA[i].dAngle > 0)
		{
			ft.write((char*)&PtA[i], sizeof(LidarPointCLoudA));
		}
	}
	ft.close();
	/*ofstream ft(cPath, ios::out);
	for (size_t i = 0; i < nVecSize; i++)
	{
		if (PtA[i].dSegTime > 0 && PtA[i].dAngle > 0)
		{
			ft << PtA[i].nPauseNum << " " << PtA[i].dL << " " << PtA[i].dAngle << " " << PtA[i].dSegTime << endl;
		}
	}*/
	ft.close();

	return 0;
}


LidarPointCLoudA* ReadPreProcessingFile(QString &qaInPath, size_t &nFileLoop)
{
	char* cPath;
	QByteArray qba;
	qba = qaInPath.toLatin1();
	cPath = qba.data();


	ifstream ft(cPath, ios::binary);
	if (!ft) return 0;
	ft.seekg(0, ios::end);
	streampos lFileSize = ft.tellg();
	nFileLoop = lFileSize / sizeof(LidarPointCLoudA);
	ft.seekg(0, ios::beg);
	LidarPointCLoudA* PtA = new LidarPointCLoudA[nFileLoop];

	for (int i = 0; i < nFileLoop; i++)
	{
		ft.read((char*)&PtA[i], sizeof(LidarPointCLoudA));
	}
	ft.close();

	//CalBtXYZ(PtA, nFileLoop);

	return PtA;
}


LidarPointCLoudA* CalBtXYZprocess(LidarPointCLoudA* &PtA, size_t &nFileLoop, double &dAngle, double &dR1, double &dR2)
{
	CalBtXYZ(PtA, nFileLoop, dAngle, dR1, dR2);
	return PtA;
}

int CalClXYZprocess(QString &POSpath, QString &Lidarpath, QString &PtOutpath)
{
	string sPOSpath = POSpath.toStdString();
	vector<WFW>vPos;
	vPos = ReadWFW(sPOSpath);

	LidarPointCLoudA* PtA = new LidarPointCLoudA();
	size_t nFileLoop = 0;
	PtA = ReadPreProcessingFile(Lidarpath, nFileLoop);

	char* cPath;
	QByteArray qba;
	qba = PtOutpath.toLatin1();
	cPath = qba.data();
	ofstream ft;
	ft.open(cPath, ios::out);

	int nPosLoc = 0;
	bool bPos = false;
	//flightArgumentsDlg 需要前面菜单赋值，不赋值为0
	extern double dDeltaX;
	extern double dDeltaY;
	extern double dDeltaZ;
	extern double dDeltaOmega;
	extern double dDeltaPhi;
	extern double dDeltaKappa;

	for (size_t i = 0; i < nFileLoop; i++)
	{
		if (PtA[i].dAngle > 0 && PtA[i].dSegTime > 0)
		{
			for (size_t j = nPosLoc; j < vPos.size(); j++)
			{
				if (vPos[j].dLat == 0 || vPos[j].dLong == 0)
				{
					nPosLoc++;
					break;
				}

				int nPosHour = ((int)vPos[j].dTime / 3600) % 24;
				double dPosHourT = (int)vPos[j].dTime / 3600;
				int nHour = (int)dPosHourT - nPosHour;
				double dPosTime = vPos[j].dTime - nHour * 3600;
				double dt = abs(PtA[i].dSegTime - dPosTime);
				if (dt < 0.01)
				{
					nPosLoc = (int)j;
					bPos = true;
					break;
				}

				if (bPos == true)
				{
					bPos = false;

					double dDeltaAngle11 = cos(dDeltaPhi)*cos(dDeltaKappa) - sin(dDeltaPhi)*sin(dDeltaOmega)*sin(dDeltaKappa);
					double dDeltaAngle12 = cos(dDeltaPhi)*sin(dDeltaKappa) + sin(dDeltaPhi)*sin(dDeltaOmega)*cos(dDeltaKappa);
					double dDeltaAngle13 = -sin(dDeltaPhi)*cos(dDeltaOmega);
					double dDeltaAngle21 = -cos(dDeltaOmega)*sin(dDeltaKappa);
					double dDeltaAngle22 = cos(dDeltaOmega)*cos(dDeltaKappa);
					double dDeltaAngle23 = sin(dDeltaOmega);
					double dDeltaAngle31 = sin(dDeltaPhi)*cos(dDeltaKappa) + cos(dDeltaPhi)*sin(dDeltaOmega)*sin(dDeltaKappa);
					double dDeltaAngle32 = sin(dDeltaPhi)*sin(dDeltaKappa) - cos(dDeltaPhi)*sin(dDeltaOmega)*cos(dDeltaKappa);
					double dDeltaAngle33 = cos(dDeltaPhi)*cos(dDeltaOmega);

					double dBx = dDeltaX + PtA[i].dX * dDeltaAngle11 + PtA[i].dY * dDeltaAngle12 + PtA[i].dZ * dDeltaAngle13;
					double dBy = dDeltaY + PtA[i].dX * dDeltaAngle21 + PtA[i].dY * dDeltaAngle22 + PtA[i].dZ * dDeltaAngle23;
					double dBz = dDeltaZ + PtA[i].dX * dDeltaAngle31 + PtA[i].dY * dDeltaAngle32 + PtA[i].dZ * dDeltaAngle33;

					double  dPhi = vPos[nPosLoc].dPhi*PI / 180.0;
					double  dOmega = vPos[nPosLoc].dOmega*PI / 180.0;
					double dKappa = vPos[nPosLoc].dKappa * PI / 180.0;


					double dIMU11 = cos(dPhi)*cos(dKappa) - sin(dPhi)*sin(dOmega)*sin(dKappa);
					double dIMU12 = cos(dPhi)*sin(dKappa) + sin(dPhi)*sin(dOmega)*cos(dKappa);
					double dIMU13 = -sin(dPhi)*cos(dOmega);
					double dIMU21 = -cos(dOmega)*sin(dKappa);
					double dIMU22 = cos(dOmega)*cos(dKappa);
					double dIMU23 = sin(dOmega);
					double dIMU31 = sin(dPhi)*cos(dKappa) + cos(dPhi)*sin(dOmega)*sin(dKappa);
					double dIMU32 = sin(dPhi)*sin(dKappa) - cos(dPhi)*sin(dOmega)*cos(dKappa);
					double dIMU33 = cos(dPhi)*cos(dOmega);

					PtA[i].dX = vPos[nPosLoc].dNorthing + dBx * dIMU11 + dBy * dIMU12 + dBz * dIMU13;
					PtA[i].dY = vPos[nPosLoc].dEasting + dBx * dIMU21 + dBy * dIMU22 + dBz * dIMU23;
					PtA[i].dZ = vPos[nPosLoc].dHeight + dBx * dIMU31 + dBy * dIMU32 + dBz * dIMU33;

					ft << setprecision(12) << PtA[i].dX << " " << PtA[i].dY << " " << PtA[i].dZ << " " << PtA[i].dL << " " << PtA[i].nPauseNum << " "
						<< vPos[nPosLoc].dLat << " " << vPos[nPosLoc].dLong << " " << vPos[nPosLoc].dHeight << endl;
				}
			}

		}
	}

	ft.close();

	return 0;
}