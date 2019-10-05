#pragma pack(push,1)//把原来对齐方式设置压栈，并设置新的对齐方式为一个字节对齐;
#pragma once

#define RANGE_MAX 1024
#define PI 3.1415926535898
#define LightSpeed 299792458
#define  WGS84_a 6378137						//WGS84椭球长半轴
#define  WGS84_b 6356752.3142					//WGS84椭球短半轴
#define  WGS84_e1 0.0066943800042608			//WGS84椭球第一偏心率的平方
#define  WGS84_e2 0.0067394967565869			//WGS84椭球第二偏心率的平方
#define  WGS84_f 0.00335281067831240			//WGS84椭球扁率    1/f=298.25722235630016

// normal filter
#define PULSE_NUM_INT 250
#define GLASS_FILTER_THRESHOLD 3000

// mDBSCAN
#define MEAN_DIST_TOP_K_PERCENT 0.2
#define MIN_PTS 16
#define MIN_DIST_THRESHOLD 10.0
#define MARKER_CLUSTER_K 1


struct LidarALLData
{
	/*uint8_t nFlag;
	uint8_t nChannel;
	uint32_t nPaulseNum;
	uint16_t nTimeInfo;
	uint8_t nClass;*/
	int nFlag;
	int nChannel;
	int nPaulseNum;
	int nTimeInfo;
	int nClass;
};

struct LidarCalData
{
	int nChannel;
	int nPaulseNum;
	int nTimeInfo;
	double dL;
	double dCodeNum;
	int nDate;
	double dSegTime;
};


struct LidarPt
{
	/*int nChannel;
	int nDate;
	int nTime;*/

	double X;
	double Y;
	double Z;
	double L;
};


struct LidarBLH
{
	double B;
	double L;
	double H;
};


struct POS
{
	double Time;
	double Distance;
	double Easting;
	double Northing;
	double EllipsoidHeight;
	double Latitude;
	double Longitude;
	double Height;
	double Roll;		//Roll			翻滚角	Z
	double Pitch;		//Pitch			俯仰角	Y
	double Heading;		//Yaw(Heading)	航向角	X
	double EastVelocity;
	double NorthVelocity;
	double UpVelocity;
	double EastSD;
	double NorthSD;
	double HeightSD;
	double RollSD;
	double PitchSD;
	double HeadingSD;
};

struct WFW
{
	int nEvent;
	double dTime;
	double dEasting;
	double dNorthing;
	double dHeight;
	double dOmega;
	double dPhi;
	double dKappa;
	double dLat;
	double dLong;
};



struct LidarPointCLoudA
{
	int nDate;
	double dSegTime;
	int nPauseNum;
	int nSingleZ;
	int nSingleA;
	double dAngle;
	int nChannel;
	double dL;
	double dX;
	double dY;
	double dZ;
};


struct GroupItem {
	LidarALLData data;
	int index;
	double kmean_dist;
};

struct GroupStats {
	double mean;
	double stdev;
};

struct StatsMax
{
	int nMaxLoc;
	double dMaxRange;
};


struct DataNeighbour {
	LidarALLData data;
	std::vector<int> neighbours;
};


#pragma pack(pop)//恢复对齐状态;