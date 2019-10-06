#pragma once
#include <QString>
#include <QByteArray>
#include <QDebug>

#include "ccFunction.h"

//算法
LidarPointCLoudA* HistogramExFiltProcess(QStringList qsPath, int nInterval);

//B算法
LidarPointCLoudA* HistogramFiltProcess(QStringList qsPath, int nVale);

//C算法
LidarPointCLoudA* filterprocessing(QStringList qsPath);

//D算法
LidarPointCLoudA* mDBSCAN_filterprocessing(QStringList qsPath, int nVale);

