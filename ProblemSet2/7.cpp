#include <iostream>
#include <cstdlib>
using namespace std; //excersice 7

int tam_arr(const char *arr){ //7.1
	int len=0;
	for(;*(arr+len)!='\0';len++);
	return len;
}

void swap(int &a,int &b){     //7.2
	a^=b;
	b^=a;
	a^=b;
}

void swap(int *a,int *b){     //7.3
	int temp=*a;
	*a=*b;
	*b=temp;
}

void swap(int **a,int **b){     //7.4
	int temp=**a;
	**a=**b;
	**b=temp;
}

int main(){
	char *pal="zxca";
	cout<<pal<<endl;
	cout<<tam_arr(pal)<<endl;
	
	int a[4]={5,9,7,4};
	for(int i=0;i<4;cout<<a[i++]);cout<<endl;
	swap(a[0],a[3]); swap(a[1],a[2]);
	for(int i=0;i<4;cout<<a[i++]);
	
	cout<<endl;
	int x=5,y=6;				//7.4
	int *ptrx=&x,*ptry=&y;
	swap(&ptrx,&ptry);
	cout<<*ptrx<<" "<<*ptry<<endl;
	
	char * oddOrEven = "Never odd or even";   //7.5.1
	char *nthCharPtr=&*(oddOrEven+5);		//7.5.2
	nthCharPtr-=2;							//7.5.3
	cout<<*nthCharPtr<<endl;				//7.5.4
	char **pointerPtr=&nthCharPtr;			//7.5.5
	cout<<pointerPtr<<endl;					//7.5.6
	cout<<**pointerPtr<<endl;				//7.5.7
	nthCharPtr+=1; cout<<**pointerPtr<<endl; //7.5.8 con cout para comprobar c:
	cout<<tam_arr(oddOrEven)-tam_arr(nthCharPtr)<<endl;//7.5.9
}
