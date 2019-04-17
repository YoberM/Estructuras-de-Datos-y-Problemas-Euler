#include <iostream>
using namespace std;

int dias(int a,int b,int c=7){
	int aux=0;
	for(int i=a;i<b;i++){
		if(i%4==0 && (!(i%100==0) || i%400==0)){
			aux+=366;
			cout<<i<<"\n";
		}
		else {
			aux+=365;
			cout<<i<<endl;
		}
	}
	cout<<"______________ "<<aux/365<<endl;
	return aux/c;
}

int main(){
	int a,b;
	cin>>a>>b;
	int rpta=dias(a,b),rptab=dias(1900,a);
	cout<<rpta<<"|"<<rptab<<endl;
	cout<<rpta-rptab<<endl;
	
}
