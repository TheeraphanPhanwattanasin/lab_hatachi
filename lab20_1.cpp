#include<iostream>
#include <algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
double remx,remy;

remx = min(R1.x+R1.w,R2.x+R2.w)-max(R1.x,R2.x);
remy = min(R1.y,R2.y)-max(R1.y-R1.h,R2.y-R2.h);

if(remx < 0 || remy < 0) return 0;
else return remx*remy;

}
