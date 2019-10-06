#include "ccDataProcessing.h"
LidarPointCLoudA* KNNProcess(QStringList qsPath, int nInterval, size_t &nVecSize)
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

		ReadSiglePhotonData(cPath, vAlldata);
		vFilter1 = HistogramExFilter(vAlldata, nInterval);
		filter(vFilter1, vFilter);
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			vFilterAll.push_back(vFilter[j]);
		}
		vAlldata.clear();
		vFilter1.clear();
		vFilter.clear();
	}

	nVecSize = vFilterAll.size();
	LidarPointCLoudA* PtA = new LidarPointCLoudA[nVecSize]();
	CalPauseCodeTime(vFilterAll, PtA);

	return PtA;
}

LidarPointCLoudA* HistogramFiltProcess(QStringList qsPath, int nVale, size_t &nVecSize)
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

		ReadSiglePhotonData(cPath, vAlldata);
		vFilter = HistogramFilter(vAlldata, nVale);
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			vFilterAll.push_back(vFilter[j]);
		}
		vAlldata.clear();
		vFilter.clear();
	}

	nVecSize = vFilterAll.size();
	LidarPointCLoudA* PtA = new LidarPointCLoudA[nVecSize]();
	CalPauseCodeTime(vFilterAll, PtA);

	return PtA;
}


LidarPointCLoudA* mDBSCAN_filterprocessing(QStringList qsPath, int nVale, size_t &nVecSize)
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

		ReadSiglePhotonData(cPath, vAlldata);
		filter_mDBSCAN(vAlldata, vFilter);
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			vFilterAll.push_back(vFilter[j]);
		}
		vAlldata.clear();
		vFilter.clear();
	}

	nVecSize = vFilterAll.size();
	LidarPointCLoudA* PtA = new LidarPointCLoudA[nVecSize]();
	CalPauseCodeTime(vFilterAll, PtA);

	return PtA;
}


LidarPointCLoudA* Unfilterprocessing(QStringList qsPath, size_t &nVecSize)
{
	char *cPath;
	vector<LidarALLData>vAlldata;
	vector<LidarALLData>vFilterAll;

	for (int i = 0; i < qsPath.count(); i++)
	{
		QByteArray qba;
		qba = qsPath[i].toLatin1();
		cPath = qba.data();

		ReadSiglePhotonData(cPath, vAlldata);
		for (size_t j = 0; j < vAlldata.size(); j++)
		{
			vFilterAll.push_back(vAlldata[j]);
		}
		vAlldata.clear();
	}

	//double dUsuDis = CheckStacking(vFilterAll);
	LidarPointCLoudA* PtA = new LidarPointCLoudA[vFilterAll.size()]();
	CalPauseCodeTime(vFilterAll, PtA);

	return PtA;
}


int WritePreProcessingFile(QString qsOutPath, LidarPointCLoudA* &PtA, size_t nVecSize)
{
	char* cPath;
	QByteArray qba;
	qba = qsOutPath.toLatin1();
	cPath = qba.data();

	ofstream ft(cPath, ios::out | ios::binary);
	for (size_t i = 0; i < nVecSize; i++)
	{
		ft.write((char*)&PtA[i], sizeof(PtA));
	}
	return 0;
}