#include "geometry5.h"
#include <math.h>

Point constructorPoints [4];

Point * updateConstructorPoints ( const Point &p1 , const Point &p2 ,
	const Point &p3 , const Point &p4 = Point (0 ,0)) {
	constructorPoints [0] = p1;
	constructorPoints [1] = p2;
	constructorPoints [2] = p3;
	constructorPoints [3] = p4;
	return constructorPoints ;
}

Rectangle :: Rectangle (  Point &ll ,  Point &ur):
Polygon (updateConstructorPoints (ll, Point (ll.getx() , ur.gety()),ur, Point (ur.getx() , ll.gety())), 4) {}
Rectangle :: Rectangle ( const int llx , const int lly , const int urx ,const int ury)
: Polygon ( updateConstructorPoints ( Point (llx , lly), Point (llx ,ury),
	Point (urx , ury), Point (urx ,lly)), 4) {}

double Rectangle :: area () const {
int length = points.get(2)->gety() - points.get(1)->gety();
int width =  points.get(3)->getx() - points.get(2)->getx();
return abs (( double ) length * width );
}
