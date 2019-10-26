#include "ccDataProcessing.h"
LidarPointCLoudA* KNNProcess(QStringList &qsPath, int &nInterval, size_t &nVecSize, int &nChannelNum, QProgressDialog *progress)
{
	char *cPath;
	vector<LidarALLData>vAlldata;
	vector<LidarALLData>vFilter;
	vector<LidarALLData>vFilter1;
	vector<LidarALLData>vFilterAll;
	for (int i = 0; i < qsPath.count(); i++)
	{
		QByteArray qba;
		qba = qsPath[i].toLatin1();
		cPath = qba.data();

		ReadSiglePhotonData(cPath, vAlldata,progress);
		vFilter1 = HistogramExFilter(vAlldata, nInterval,progress);
		filter(vFilter1, vFilter);
		vFilterAll = ChooseChannel(vFilter, nChannelNum);

		vAlldata.clear();
		vFilter1.clear();
		vFilter.clear();
	}
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
	vector<LidarALLData>vAlldata;
	vector<LidarALLData>vFilter;
	vector<LidarALLData>vFilterAll;

	for (int i = 0; i < qsPath.count(); i++)
	{
		QByteArray qba;
		qba = qsPath[i].toLatin1();
		cPath = qba.data();

		ReadSiglePhotonData(cPath, vAlldata,new QProgressDialog());
		vFilter = HistogramFilter(vAlldata, nVale);
		vFilterAll = ChooseChannel(vFilter, nChannelNum);
		vAlldata.clear();
		vFilter.clear();
	}

	nVecSize = vFilterAll.size();
	LidarPointCLoudA* PtA = new LidarPointCLoudA[nVecSize]();
	CalPauseCodeTime(vFilterAll, PtA, new QProgressDialog());

	return PtA;
}


LidarPointCLoudA* mDBSCAN_filterprocessing(QStringList &qsPath, int &nVale, size_t &nVecSize, int& nChannelNum)
{
	char *cPath;
	vector<LidarALLData>vAlldata;
	vector<LidarALLData>vFilter;
	vector<LidarALLData>vFilterAll;

	for (int i = 0; i < qsPath.count(); i++)
	{
		QByteArray qba;
		qba = qsPath[i].toLatin1();
		cPath = qba.data();

		ReadSiglePhotonData(cPath, vAlldata, new QProgressDialog());
		filter_mDBSCAN(vAlldata, vFilter);
		vFilterAll = ChooseChannel(vFilter, nChannelNum);
		vAlldata.clear();
		vFilter.clear();
	}

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
		vFilterAll = ChooseChannel(vAlldata, nChannelNum);
		vAlldata.clear();
	}

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
		ft.write((char*)&PtA[i], sizeof(LidarPointCLoudA));
	}
	ft.close();
	/*ofstream ft(cPath, ios::out);
	for (size_t i = 0; i < nVecSize; i++)
	{
		ft << PtA[i].dX << " " << PtA[i].dY <<" "<<PtA[i].dZ<< endl;
	}
	ft.close();*/

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