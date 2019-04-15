#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
using namespace std; //excersice 5

double computePi ( const int n ) {
	srand ( time (0) ) ;
	int dartsInCircle = 0;

	for(int i = 0; i < n ; ++i ) {
		double x = rand () / ( double ) RAND_MAX , y = rand () / ( double )RAND_MAX ;
		if( sqrt ( x * x + y * y ) < 1 ) {
		++ dartsInCircle ;
		}
	}
	// r^2 is 1 , and a/4 = dartsInCircle /n, yielding this for pi:
	return dartsInCircle / static_cast <double >(n ) * 4;
}
 
int main(){
	int n; cin>>n;
	cout <<computePi(n);
 }
