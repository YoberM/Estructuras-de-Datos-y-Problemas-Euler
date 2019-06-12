#include <iostream>
using namespace std;
template <class T>
class nodo {
    T dato;
    nodo<T> *sig=NULL;
    int key;
public:
    nodo(){

    }
    nodo(nodo<T> &b){
        dato = b.dato;
        key=1;
    }
    nodo(T a){
        dato = a;
    }
    void Set(T a){
        dato = a;
    }
    T get(){
        return dato;
    }
    void agregar(T a){
        if(sig!=NULL){
            sig[0].agregar(a);
        }
        else{
            sig = new nodo<T>(a);
        }
    }
    void Mostrar(){
        if(sig!=NULL){
            cout<<dato<<"("<<&dato<<") -> ";
            sig[0].Mostrar();
        }
        else{
            cout<<dato<<"("<<&dato<<") -> ";
            cout<<"Nulo\n";
        }
    }
};
int main(){
    int n;
    cin >> n ;
    nodo <int>NODO(0);
    int m;
    cin>>m;
    NODO.Set(m);
    for (int i = 0 ; i< n-1 ; i++){
        cin>>m;
        NODO.agregar(m);
    }
    NODO.Mostrar();
}
