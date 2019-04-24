#include "geometry.h"
class Polygon {
protected :
	static int numPolygons ;
	PointArray points ;
public :
	Polygon ( const PointArray &pa){
		points=pa;
		numPolygons++;
	};
	Polygon ( const Point parr[], const int numPoints) :	points(parr,numPoints)
		{
		numPolygons++;
		
	}
	~ Polygon () {
		--numPolygons ;
	}
	virtual double area () const = 0;
	static int getNumPolygons () { return numPolygons ;}
	int getNumSides () const { return points.getSize () ;}
	const PointArray * getPoints () const { return & points ;}
};

class Rectangle : public Polygon {
	
	public :
	Rectangle ( Point &a,  Point &b);
	Rectangle ( const int a, const int b, const int c, const int d);
	virtual double area () const ;
};
