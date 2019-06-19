// https://www.youtube.com/watch?v=YrUjHXxKz2g
//cola
// http://www.conclase.net/c/edd/?cap=002d

#include <iostream>
using namespace std;

template<typename T>
class Nodo{
public:
    T dato;
    Nodo<T> *next;
public:
    Nodo<T>(T n)
    {
        dato=n;
        next=NULL;
    }
    void Mostrar(){
        if(next != NULL){
            cout<<dato<<" -> ";
            next->Mostrar();
        }
        else {
            cout<<dato<<" -> ";
            cout << "Nulo"<<endl;
        }
    }
    void set(Nodo<T> *setnodo){
        next=setnodo;
    }
    Nodo<T>* get(){
        return next;
    }
};

template <typename T>
class Pila
{
    Nodo<T> *head;
    Nodo<T> *iterador;
    unsigned int tam=0;
public:
    Pila():head(NULL){}
    ~Pila()
    {
        delete head;
        delete iterador;
    }

    void Push(T v)
    {
        tam++;
        if(tam==1){
            Nodo<T> *nuevo= new Nodo<T>(v);
            head = nuevo;
            iterador=nuevo;
        }
        else{
            Nodo<T> *nuevo = new Nodo<T>(v);
            iterador->set(nuevo);
            iterador=nuevo;
        }
        /* Ahora, el comienzo de nuestra pila es en nuevo nodo */
    }
    T Pop() 
    {
        Nodo<T> *iteradortemp=head ;
        for(int i=0;i<tam-2;i++){
            iteradortemp=iteradortemp->get();
        }
        iteradortemp->set(NULL);
        tam--;
    }
    void Mostrar(){
        head->Mostrar();
    }
};

typedef char ward;

int main()
{
    Pila<ward> a;
    ward b;
    cin>>b;
    a.Push(b);
    a.Push(b+1);
    a.Push(b+2);
    a.Push(b+3);
    a.Push(b+4);
    a.Mostrar();
    a.Pop();
    a.Mostrar();
    a.Pop();
    a.Mostrar();
    a.Pop();
    a.Mostrar();
    return 0;
}