#include "ccDataProcessing.h"
LidarPointCLoudA* HistogramExFiltProcess(QString qsPath, int nInterval)
{
	char *cPath;
	QByteArray qba;
	qba = qsPath.toLatin1();
	cPath = qba.data();

	vector<LidarALLData>vAlldata;
	vector<LidarALLData>vFilter;

	ReadSiglePhotonData(cPath, vAlldata);
	vFilter = HistogramExFilter(vAlldata, nInterval);
	double dUsuDis = CheckStacking(vFilter);

	LidarPointCLoudA* PtA = new LidarPointCLoudA[vFilter.size()]();
	CalPauseCodeTime(vFilter, PtA, dUsuDis);

	return PtA;
}

LidarPointCLoudA* HistogramFiltProcess(QString qsPath, int nValue)
{
	char *cPath;
	QByteArray qba;
	qba = qsPath.toLatin1();
	cPath = qba.data();

	vector<LidarALLData>vAlldata;
	vector<LidarALLData>vFilter;
	double dUsuDis = 0.0;

	ReadSiglePhotonData(cPath, vAlldata);
	vFilter = HistogramFilter(vAlldata, nValue);
	dUsuDis = CheckStacking(vFilter);

	LidarPointCLoudA* PtA = new LidarPointCLoudA[vFilter.size()]();
	CalPauseCodeTime(vFilter, PtA, dUsuDis);

	return PtA;
}

LidarPointCLoudA* filterprocessing(QString qsPath)
{
	char *cPath;
	QByteArray qba;
	qba = qsPath.toLatin1();
	cPath = qba.data();

	vector<LidarALLData>vAlldata;
	vector<LidarALLData>vFilter;
	double dUsuDis = 0.0;

	ReadSiglePhotonData(cPath, vAlldata);
	filter(vAlldata, vFilter);
	dUsuDis = CheckStacking(vFilter);

	LidarPointCLoudA* PtA = new LidarPointCLoudA[vFilter.size()]();
	CalPauseCodeTime(vFilter, PtA, dUsuDis);

	return PtA;
}

LidarPointCLoudA* mDBSCAN_filterprocessing(QString qsPath)
{
	char *cPath;
	QByteArray qba;
	qba = qsPath.toLatin1();
	cPath = qba.data();

	vector<LidarALLData>vAlldata;
	vector<LidarALLData>vFilter;
	double dUsuDis = 0.0;

	ReadSiglePhotonData(cPath, vAlldata);
	filter_mDBSCAN(vAlldata, vFilter);
	dUsuDis = CheckStacking(vFilter);

	LidarPointCLoudA* PtA = new LidarPointCLoudA[vFilter.size()]();
	CalPauseCodeTime(vFilter, PtA, dUsuDis);

	return PtA;
}

