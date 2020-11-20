#include <iostream>
#include "listaligada.h"
using namespace std;

int main(){
    ListaLigada<int>lista;
    /*Nodo<int> *a= new Nodo<int>(3);
    Nodo<int> *b= new Nodo<int>(4,a);
    Nodo<int> *c= new Nodo<int>(5);
    c->sig=b;*/
    lista.pushfront(5);
    lista.pushfront(7);
    lista.pushfront(9);
    lista.pushback(100);
    //lista.popfront();
    lista.print();
    cout<<"La cantidad de elementos es "<<lista.size()<<endl;
    lista.popback();
    lista.print();
    cout<<"La cantidad de elementos es "<<lista.size()<<endl;
    return 0;
}