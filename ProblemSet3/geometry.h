#include <iostream>
using namespace std;
class Point{
	int x,y;  		//3.1
public:
	Point(int xx=0,int yy=0):x(xx),y(yy){} //3,2
	const int getx();		//3.3
	const int gety();
	void setx(int);
	void sety(int);

};

class PointArray {
	int size ;
	Point * points;
	void resize (int size ){this->size = size ;}
public :
	PointArray (){
		size = 0 ; 
		points = new Point[0];
	}
	PointArray ( const Point *arrp, const int n_size){
		size = n_size;
		points = new Point[n_size];
		for(int i=0;i<size;i++){
			points[i]=arrp[i];
		}
	}
	PointArray ( const PointArray &n_arr){
		size =  n_arr.getSize();
		points = new Point[size];
		for (int i = 0; i < size; ++i){
			points[i]=n_arr.points[i];
		}
	}
	~ PointArray ( ){delete[] points;}
	void clear ();
	int getSize () const { return size ;}
	void push_back ( const Point&);
	void insert ( const int , const Point &);
	void remove ( const int );
	Point *get( const int pos);
	const Point *get( const int pos) const ;
};
	//4.5.1 necesitamos get con constantes ya que solo vamos a
	//leer el dato y no modificarlo
	//4.5.2 si tenemos un PointArray constante no podremos usar las
	//los metodos push_back , insert , clear , remove 
