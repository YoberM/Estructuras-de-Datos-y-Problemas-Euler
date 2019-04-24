#include "geometry.h"
#include <iostream>
using namespace std;

const int Point::getx(){return x;}
const int Point::gety(){return y;}
void Point::setx(int a){x=a;}
void Point::sety(int a){y=a;}

void PointArray::clear(){
	size=0;
	points = new Point[size];
}

void PointArray::push_back(const Point &p){
	size++;
	points[size-1]=p;
}

void PointArray::insert(const int pos,const Point &p){
	size++;
	for(int i=size-1;i>pos-1;i--){
		points[i]=points[i+1];
	}
	points[pos]=p;
}

void PointArray::remove(const int pos ){
	for (int i = pos; i < size-1; ++i){
		points[i]=points[i+1];
	}
	size--;
}

Point *PointArray::get(const int pos){
	return &points[pos-1];
} 

const Point *PointArray::get(const int pos) const {
	return &points[pos-1];
}

