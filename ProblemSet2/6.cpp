#include <iostream>
#include <cstdlib>
using namespace std; //excersice 6

const int LENGHT=4,WIDTH=2;

void printArray ( const int arr [], const int len ) { //6.1
    for(int i = 0; i < len; ++i ) {
        cout << arr [ i];
        if( i < len -1) {
            cout << ",";
        }
    }
}

void ReverseArr( int arr[],const int len){			  //6.2
	for(int i=0;i<len/2;i++){
		arr[i]^=arr[len-i-1];
		arr[len-i-1]^=arr[i];
		arr[i]^=arr[len-i-1];
	}
}

void ReverseArr_P(int arr[],const int len){
	for(int i=0;i<len/2;i++){
		*(arr+i)^=*(arr+len-i-1);
		*(arr+len-i-1)^=*(arr+i);
		*(arr+i)^=*(arr+len-i-1);
		
	}
}

void Traspuesta ( const int input[][WIDTH],int output[][LENGHT]) { //6.3
    for(int i = 0; i < LENGHT ; ++ i ) {
        for (int j = 0; j < WIDTH ; ++ j ) {
        output [ j ][ i ] = input [ i ][ j ]; //si inicializamos un matriz en esta
        }									  //funcion , desaparecera porque solo
    }										  //estara sera valida hasta salir de la
}											  //funcion
 
void printMatriz(const int matrix[LENGHT][WIDTH]){
	cout<<"_____\n";
	for(int i=0;i<LENGHT;i++){
		for(int j=0;j<WIDTH;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"_____\n";
}
void printMatriz2(const int matrix[WIDTH][LENGHT]){
	cout<<"_____\n";
	for(int i=0;i<WIDTH;i++){
		for(int j=0;j<LENGHT;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"_____\n";
}

int main(){
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	printArray(arr,n); //1er
	
	ReverseArr(arr,n); //2do
	cout<<endl;
	printArray(arr,n);
	
	cout<<endl;
	ReverseArr_P(arr,n); //3ro
	printArray(arr,n);cout<<endl;
	
	int matriz[LENGHT][WIDTH]={{3,5},{1,3},{6,2},{9,7}},
		matriz2[WIDTH][LENGHT]; 
	cout<<endl;
	printMatriz(matriz);
	Traspuesta(matriz,matriz2);
	printMatriz2(matriz2);
}
