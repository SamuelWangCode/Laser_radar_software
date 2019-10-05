#pragma once
#pragma once

#include <iostream>
#include<sstream>
#include <fstream>
#include <assert.h>
#include <vector>
#include <basetsd.h>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <queue>
#include <set>

#include "ccNamed.h"
#include "ccByteTrans.h"
using namespace std;

int ReadSiglePhotonData(char cpath[], vector<LidarALLData>&vAlldata);
int CalPauseCodeTime(vector<LidarALLData>vAlldata, LidarPointCLoudA *PtA,double dUsuDis);
int CalXYZ(vector<LidarCalData>vCaldata, vector<LidarPt>&vPt);
vector<POS> ReadPOS(string pos_path);
vector<WFW> ReadWFW(string pos_path);
int CheckStacking(vector<LidarALLData>vFilterData);


vector<LidarALLData> HistogramExFilter(vector<LidarALLData>vAlldata, int nInterval);
vector<LidarALLData>HistogramFilter(vector<LidarALLData>vAlldata, int nValue);

int getGroup(vector<LidarALLData>&vAlldata, vector<GroupItem>&group, int start);
GroupStats statsGroup(vector<GroupItem> &group);
bool compareItemByTimeInfo(const GroupItem &a, const GroupItem &b);
bool compareItemByIndex(const GroupItem &a, const GroupItem &b);
bool compareStatsByMean(const GroupStats &a, const GroupStats &b);

int filter_period(vector<LidarALLData>&vAlldata, vector<LidarALLData>&filteredData);
int filter(vector<LidarALLData>&vAlldata, vector<LidarALLData>&filteredData);
void filter_mDBSCAN(std::vector<LidarALLData>&vAlldata, std::vector<LidarALLData>&filteredData);

int getGroupAndMarker(std::vector<LidarALLData>&vAlldata, std::vector<GroupItem>&group, std::vector<GroupItem> &marker, int start);
void getNeighbours(std::vector<GroupItem> &group, std::map<int, DataNeighbour> &neighbours, std::set<int> &core_set);
std::set<int> initUnvisitedSet(std::vector<GroupItem> &group);

