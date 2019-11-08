

//#include <iostream>
#include "include/pdal/ToDEMandDSM.h"
//#include <pdal/PDALUtils.hpp>
//#include <pdal/util/FileUtils.hpp>
//#include <pdal/log.hpp>

//using namespace std;

void ToDEMandDSM::todem(std::string dem_filename, std::string dem_resolution, std::string dem_radius
	, std::string dem_bounds, std::string dem_output_path) {
	using namespace std;
	using namespace pdal;
	string purename = "aaa";
	PipelineManager mgr;
	stringstream ss22;
	//string scalar = "1.2";
	//the DSM will be blank if resolution is too big (eg. > 0.2)
	ss22 << R"({
  "pipeline":[")"<<dem_filename<<R"(",
    {
      "type":"filters.assign",
      "assignment": [ "NumberOfReturns[:]=1", "ReturnNumber[:]=1" ]
   },
    {
      "type":"filters.smrf",
      "scalar":"1.2",
      "slope":0.2,
      "threshold":0.45,
      "window":16.0
    },
    {
      "type":"filters.range",
      "limits":"Classification[2:2]"
    },
    {
      "resolution": )"<<(string)dem_resolution<<R"(,
      "radius": )" << (string)dem_radius << R"(,
      "bounds":"()"<< (string)dem_bounds<<R"())" << R"(",
      "filename":")" << (string)dem_output_path <<R"("}]})";
	cout << "continue" << endl;
	mgr.readPipeline(ss22);

	mgr.execute();
	cout << "complete" << endl;

	//remove("temp2.las");


	getchar();
	
}

void ToDEMandDSM::todsm(std::string dem_filename, double dem_resolution, double dem_radius
	, double minx, double maxx, double miny, double maxy)
{
	using namespace std;
	using namespace pdal;
	PipelineManager mgr;
	stringstream ss22;
	int pointpos = 0;
	for (pointpos;; pointpos++)
	{
		if (dem_filename[pointpos] == '.')
			break;
	}
	string purename(dem_filename, 0, pointpos);
	//string scalar = "1.2";
	//the DSM will be blank if resolution is too big (eg. > 0.2)
	//cout << dem_filename << to_string(dem_resolution);
	ss22 << R"({"pipeline":[")" << dem_filename << R"(",{
	"resolution":)" << to_string(dem_resolution) << R"(,
	"radius":)" << to_string(dem_radius) << R"(,
	"bounds":"([)" << to_string(minx) << R"(,)" << to_string(maxx) << R"(],[)" << to_string(miny) << R"(,)"
		<< to_string(maxy) << R"(]))" << R"(",
	"filename":")" << purename << R"(-DSM.tif"}]})";
	cout << "continue" << endl;
	mgr.readPipeline(ss22);
	mgr.execute();
	//cout << "complete" << endl;

	//remove("temp2.las");


	//getchar();

}

std::string ToDEMandDSM::boundaryMaxX(std::string filename) {
	using namespace std;
	using namespace pdal;
	PipelineManager mgr;
	stringstream ss22;
	int pointpos = 0;
	//filename = "D:/class/ForthTest/x64/Debug/temp1.las";
	for (pointpos;; pointpos++)
	{
		if (filename[pointpos] == '.')
			break;
	}
	string purename(filename, 0, pointpos);
	//string scalar = "1.2";
	//the DSM will be blank if resolution is too big (eg. > 0.2)
	//cout << dem_filename << to_string(dem_resolution);
	ss22 << R"([
					")"<<filename<<R"(",
	{
	 "type":"filters.locate",
        "dimension":"X",
        "minmax":"max"
	},
		")"<<purename<<R"(-boundaryMaxX.txt"
	]
		)";
	cout << "continue" << endl;
	mgr.readPipeline(ss22);
	mgr.execute();

	ifstream maxXtxt(purename+"-boundaryMaxX.txt");
	string maxX;
	getline(maxXtxt, maxX);
	char a[20];
	int i = 0;
	do {
		maxXtxt >> a[i];
		i++;
	} while (a[i-1]!=',');
	maxX = a;
	maxX = maxX.substr(0, i - 1);
	maxXtxt.close();
	return maxX;

}
std::string ToDEMandDSM::boundaryMinX(std::string filename) {
	using namespace std;
	using namespace pdal;
	PipelineManager mgr;
	stringstream ss22;
	int pointpos = 0;
	//filename = "D:/class/ForthTest/x64/Debug/temp1.las";
	for (pointpos;; pointpos++)
	{
		if (filename[pointpos] == '.')
			break;
	}
	string purename(filename, 0, pointpos);
	//string scalar = "1.2";
	//the DSM will be blank if resolution is too big (eg. > 0.2)
	//cout << dem_filename << to_string(dem_resolution);
	ss22 << R"([
					")" << filename << R"(",
	{
	 "type":"filters.locate",
        "dimension":"X",
        "minmax":"min"
	},
		")" << purename << R"(-boundaryMinX.txt"
	]
		)";
	cout << "continue" << endl;
	mgr.readPipeline(ss22);
	mgr.execute();

	ifstream minXtxt(purename + "-boundaryMinX.txt");
	string minX;
	getline(minXtxt, minX);
	char a[20];
	int i = 0;
	do {
		minXtxt >> a[i];
		i++;
	} while (a[i - 1] != ',');
	minX = a;
	minX = minX.substr(0, i - 1);
	minXtxt.close();
	return minX;

}
std::string ToDEMandDSM::boundaryMaxY(std::string filename) {
	using namespace std;
	using namespace pdal;
	PipelineManager mgr;
	stringstream ss22;
	int pointpos = 0;
	//filename = "D:/class/ForthTest/x64/Debug/temp1.las";
	for (pointpos;; pointpos++)
	{
		if (filename[pointpos] == '.')
			break;
	}
	string purename(filename, 0, pointpos);
	//string scalar = "1.2";
	//the DSM will be blank if resolution is too big (eg. > 0.2)
	//cout << dem_filename << to_string(dem_resolution);
	ss22 << R"([
					")" << filename << R"(",
	{
	 "type":"filters.locate",
        "dimension":"Y",
        "minmax":"max"
	},
		")" << purename << R"(-boundaryMaxY.txt"
	]
		)";
	cout << "continue" << endl;
	mgr.readPipeline(ss22);
	mgr.execute();

	ifstream maxYtxt(purename + "-boundaryMaxY.txt");
	string maxY;
	getline(maxYtxt, maxY);
	char a[20];
	int i = 0;
	do {			//跳过x坐标
		maxYtxt >> a[i];
		i++;
	} while (a[i - 1] != ',');
	i = 0;
	do {
		maxYtxt >> a[i];
		i++;
	} while (a[i - 1] != ',');
	maxY = a;
	maxY = maxY.substr(0, i - 1);
	maxYtxt.close();
	return maxY;

}

std::string ToDEMandDSM::boundaryMinY(std::string filename) {
	using namespace std;
	using namespace pdal;
	PipelineManager mgr;
	stringstream ss22;
	int pointpos = 0;
	//filename = "D:/class/ForthTest/x64/Debug/temp1.las";
	for (pointpos;; pointpos++)
	{
		if (filename[pointpos] == '.')
			break;
	}
	string purename(filename, 0, pointpos);
	//string scalar = "1.2";
	//the DSM will be blank if resolution is too big (eg. > 0.2)
	//cout << dem_filename << to_string(dem_resolution);
	ss22 << R"([
					")" << filename << R"(",
	{
	 "type":"filters.locate",
        "dimension":"Y",
        "minmax":"min"
	},
		")" << purename << R"(-boundaryMinY.txt"
	]
		)";
	cout << "continue" << endl;
	mgr.readPipeline(ss22);
	mgr.execute();

	ifstream minYtxt(purename + "-boundaryMinY.txt");
	string minY;
	getline(minYtxt, minY);
	char a[20];
	int i = 0;
	do {			//跳过x坐标
		minYtxt >> a[i];
		i++;
	} while (a[i - 1] != ',');
	i = 0;
	do {
		minYtxt >> a[i];
		i++;
	} while (a[i - 1] != ',');
	minY = a;
	minY = minY.substr(0, i - 1);
	minYtxt.close();
	return minY;

}