//numeros amigables
#include <iostream>
using namespace std;

int amicable_num(int n){
	int res=0;
	for(int i=1;i<n/2+1;i++){
		if(n%i==0 )res+=i;
	}
	return res;
}

int prob_21(int a){
	int aux1=amicable_num(a);
	if(amicable_num(aux1)==a &&a!=aux1){
		cout<<"problema:"<<a<<endl;	
		return a;
	}
	return 0;
}

int main(){
	int n;
	cin>>n;
	cout<<"amigable "<<amicable_num(n)<<endl;
	cout<<"prob     "<<prob_21(n)<<endl;
	int aux=0;
	for (int i = 2; i < n+1; ++i){
		aux+=prob_21(i);
		//cout<<aux<<endl;
	}
	cout<<aux<<endl;
	return 0;
}
