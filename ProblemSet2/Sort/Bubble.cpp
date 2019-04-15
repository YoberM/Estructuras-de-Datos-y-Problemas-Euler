
#include <iostream> 
using namespace std;

void rellenarArray(int miArray[], int tam){
	cout << "Introduzca los elementos del array" << endl;
	
	for (int i = 0; i < tam; i++){ // Input del Array
		cin >> miArray[i];
	}
}
 
void ordenarArray(int miArray[],int tam){
	float temporal;
    for(int i=0;i<tam;i++){     //se usa para mostrar el array
        cout<<miArray[i]<<" ";
    }
    cout<<endl;
	for (int i = 0;i < tam; i++){
		for (int j = 0; j< tam-1-i; j++){
		  if (miArray[j] < miArray[j+1]){//Ordena el array de		
		  temporal = miArray[j]; 	// mayor a menor cambiar 
	      miArray[j] = miArray[j+1]; //el "<" a ">" 
		  miArray[j+1] = temporal;  //para ordenar de
		  }                         //menor a mayor
		}
        for(int i=0;i<tam;i++){
            cout<<miArray[i]<<" "; //Mostrar el proceso 
        }                          //de ordenamiento
		cout<<endl;
	}
}
 
void mostrarArray(const int miArray[],int tam){
	cout << "Mostrando array ordenado..." << endl;
	
	for (int i = 0; i < tam; i++) // Imprime las i posiciones
		cout << miArray[i] << " ";
    cout<<endl;
}	

int main(){
    int tam;
    cin>>tam;
	int  miArray[tam];
	
	rellenarArray(miArray,tam);
	ordenarArray(miArray,tam);
	mostrarArray(miArray,tam);
	return 0;
}
 
