#include<iostream>
using namespace std;
#define FOR(a,n) for(int a;a<n;a++)

int number_spiral_diagonals(int size){
	int aux=1;int aux2=1;
	for(int i=3;i<size+1 && size>1;i+=2){
		for(int j=0;j<4;j++){
			cout<<aux<<" 1"<<endl;
			aux+=i-1;
			aux2+=aux;
			cout<<aux<<" 2"<<endl;
		}
	}
	return aux2;
}

int main(){
	int n;
	cin>>n;
	cout<<number_spiral_diagonals(n)<<endl;
}

