#include "ccDataProcessing.h"
void HistogramExFiltProcess(QString qsPath, int nInterval)
{
	char *cPath;
	QByteArray qba;
	qba = qsPath.toLatin1();
	cPath = qba.data();

	vector<LidarALLData>vAlldata;
	vector<LidarALLData>vFilter;
	double dUsuDis = 0.0;			//需要传出

	ReadSiglePhotonData(cPath, vAlldata);
	vFilter = HistogramExFilter(vAlldata, nInterval);
	dUsuDis = CheckStacking(vFilter);

	LidarPointCLoudA* PtA = new LidarPointCLoudA[vFilter.size()]();	//需要传出
	//memset(PtA, 0, sizeof(LidarPointCLoudA)*vFilter.size());
	CalPauseCodeTime(vFilter, PtA);

}

void HistogramFiltProcess(QString qsPath, int nValue)
{
	char *cPath;
	QByteArray qba;
	qba = qsPath.toLatin1();
	cPath = qba.data();

	vector<LidarALLData>vAlldata;
	vector<LidarALLData>vFilter;
	double dUsuDis = 0.0;			//需要传出

	ReadSiglePhotonData(cPath, vAlldata);
	vFilter = HistogramFilter(vAlldata, nValue);
	dUsuDis = CheckStacking(vFilter);

	LidarPointCLoudA* PtA = new LidarPointCLoudA[vFilter.size()]();	//需要传出
	//memset(PtA, 0, sizeof(LidarPointCLoudA)*vFilter.size());
	CalPauseCodeTime(vFilter, PtA);

}