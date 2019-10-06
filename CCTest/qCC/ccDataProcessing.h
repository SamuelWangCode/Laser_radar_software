#pragma once
#include <QString>
#include <QByteArray>
#include <QDebug>

#include "ccFunction.h"

//K近邻算法
LidarPointCLoudA* KNNProcess(QStringList qsPath, int nInterval);

//移动窗口统计直方图算法
LidarPointCLoudA* HistogramFiltProcess(QStringList qsPath, int nVale);

//基于密度聚类算法
LidarPointCLoudA* mDBSCAN_filterprocessing(QStringList qsPath, int nVale);

//不去噪算法
LidarPointCLoudA* Unfilterprocessing(QStringList qsPath);


