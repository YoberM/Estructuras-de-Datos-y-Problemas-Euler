#include <iostream>
#include <cstdlib>
using namespace std;

int sum(const int a,const int b){ //4.1
	return a+b;
}/*
double sum(const double a,const double b){ //4.1
	return a+b;
}*/
double sum(const double a,const double b,const double c=0,const double d=0){
	return a+b+c+d;				//4.3 de 2 a 4
								//4.4 de 2 a 4 con parametros default
								//
}
double sumaarr(double a[], int len){ //suma iterativa
	double aux=0;
	for(;len>0;len--){
		aux=aux+a[len-1];
	}
	return aux;
}
double sumre(double arr[],int len){  //suma recursiva
	if(len<=0)return 0;
	return arr[len-1]+sumre(arr,len-1);
}

int main(){
	int a=14,b=9;
	double da=23.4123,db=21.6712;
	cout<<sum(a,b)<<endl;
	cout<<sum(da,db)<<endl;//4.1
	//cout<<sum(0,10.0)<<endl;//4.2 gives error because the compiler dont knows 
							//what type of data should convert it
	cout<<sum(3,5,7)<<endl;
	double arr[5]={3,5,6,1,2};//4.5
	cout<<sumaarr(arr,5)<<endl;
	cout<<sumre(arr,5)<<endl;
	return 0;
}
