#include <iostream>
#include "geometry.h"
#define FOR(i,n) for(int i=0;i<n;i++)
using namespace std;

//Logica   PointArrau	[0,1,2,3,4]
//indexacion del codigo [1,2,3,4,5]

int main() {
	Point p1(1,2);
	Point p2(3,4);
	Point p3(5,6);
	cout<<p1.getx()<<" "<<p1.gety()<<endl;
	cout<<p2.getx()<<" "<<p2.gety()<<endl;
	cout<<p3.getx()<<" "<<p3.gety()<<endl;
	
	PointArray parr;
	parr.push_back(p1);
	parr.push_back(p2);
	parr.push_back(p3);
	FOR(i,3)
	cout << parr.get(i+1)->getx()<<" "<<parr.get(i+1)->gety()<<endl;
	return 0;
}
