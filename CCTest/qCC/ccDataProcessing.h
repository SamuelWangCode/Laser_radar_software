#pragma once
#include <QString>
#include <QByteArray>
#include <QDebug>

#include "ccFunction.h"

//K近邻算法
LidarPointCLoudA* KNNProcess(QStringList qsPath, int nInterval, size_t &nVecSize, int nChannelNum);

//移动窗口统计直方图算法
LidarPointCLoudA* HistogramFiltProcess(QStringList qsPath, int nVale, size_t &nVecSize, int nChannelNum);

//基于密度聚类算法
LidarPointCLoudA* mDBSCAN_filterprocessing(QStringList qsPath, int nVale, size_t &nVecSize, int nChannelNum);

//不去噪算法
LidarPointCLoudA* Unfilterprocessing(QStringList qsPath, size_t &nVecSize, int nChannelNum);

//写入预处理文件
int WritePreProcessingFile(QString qsOutPath, LidarPointCLoudA* PtA, size_t nVecSize);

//读入临时存放的二进制文件
LidarPointCLoudA* ReadPreProcessingFile(QString qaInPath, int &nFileLoop);

LidarPointCLoudA* CalBtXYZprocess(LidarPointCLoudA* &PtA, int nFileLoop);