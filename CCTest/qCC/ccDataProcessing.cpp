#include "ccDataProcessing.h"
LidarPointCLoudA* KNNProcess(QStringList qsPath, int nInterval)
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
		vFilter = HistogramExFilter(vAlldata, nInterval);
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			vFilterAll.push_back(vFilter[j]);
		}
		vAlldata.clear();
		vFilter.clear();

	}

	double dUsuDis = CheckStacking(vFilterAll);
	LidarPointCLoudA* PtA = new LidarPointCLoudA[vFilter.size()]();
	CalPauseCodeTime(vFilter, PtA, dUsuDis);

	return PtA;
}

LidarPointCLoudA* HistogramFiltProcess(QStringList qsPath, int nVale)
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

	double dUsuDis = CheckStacking(vFilterAll);
	LidarPointCLoudA* PtA = new LidarPointCLoudA[vFilter.size()]();
	CalPauseCodeTime(vFilter, PtA, dUsuDis);

	return PtA;
}

LidarPointCLoudA* Unfilterprocessing(QStringList qsPath)
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
		for (size_t j = 0; j < vFilter.size(); j++)
		{
			vFilterAll.push_back(vFilter[j]);
		}
		vAlldata.clear();
		vFilter.clear();

	}

	double dUsuDis = CheckStacking(vFilterAll);
	LidarPointCLoudA* PtA = new LidarPointCLoudA[vFilter.size()]();
	CalPauseCodeTime(vFilter, PtA, dUsuDis);

	return PtA;
}

LidarPointCLoudA* mDBSCAN_filterprocessing(QStringList qsPath, int nVale)
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

	double dUsuDis = CheckStacking(vFilterAll);
	LidarPointCLoudA* PtA = new LidarPointCLoudA[vFilter.size()]();
	CalPauseCodeTime(vFilter, PtA, dUsuDis);

	return PtA;
}

