#pragma once
#include <QString>
#include <QByteArray>
#include <QDebug>

#include "ccFunction.h"

//A算法
LidarPointCLoudA* HistogramExFiltProcess(QString qsPath, int nInterval);

//B算法
LidarPointCLoudA* HistogramFiltProcess(QString qsPath, int nValue);

//C算法
LidarPointCLoudA* filterprocessing(QString qsPath);

//D算法
LidarPointCLoudA* mDBSCAN_filterprocessing(QString qsPath);

