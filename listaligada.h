#ifndef LISTALIGADA_H
#define LISTALIGADA_H
#include <iostream>
using namespace std;

template<class T>
class ListaLigada{
    private:
        struct Nodo{
        T dato;
        Nodo *sig;

        Nodo(const T &dato,Nodo *sig=nullptr)
        :dato(dato),sig(sig){}
        };
        Nodo *head;
        int cont;
    public:
        ListaLigada();
        ~ListaLigada();
        void pushfront(const T &dato);
        void popfront();
        size_t size();
        void print();
        void pushback(const T &dato);
        void popback();
};

template<class T>
ListaLigada<T>::ListaLigada(){
    head=nullptr;
    cont=0;
}
template<class T>
ListaLigada<T>::~ListaLigada(){
    while(cont>=0){
        popfront();
    }
}
template<class T>
void ListaLigada<T>::pushfront(const T &dato){
    Nodo *nodo= new Nodo(dato,head);
    head=nodo;
    cont++;
}
template<class T>
void ListaLigada<T>::popfront(){
    if(cont==0){
        cout<<"Lista Vacia"<<endl;
        return;
    }
    else{
        Nodo *temp=head;
        head=head->sig;
        delete temp;
        cont--;
    }
}
template<class T>
size_t ListaLigada<T>::size(){
    return cont;
}
template<class T>
void ListaLigada<T>::print(){
    Nodo *temp=head;
    while(temp!=nullptr){
        cout<<temp->dato<<endl;
        temp=temp->sig;
    }
}
template<class T>
void ListaLigada<T>::pushback(const T &dato){
    if(cont==0){
        pushfront(dato);
    }
    else{
        Nodo *nodo=new Nodo(dato);
        Nodo *temp=head;
        while(temp->sig!=nullptr){
            temp=temp->sig;
        }
        temp->sig=nodo;
        cont++;
    }
}
template<class T>
void ListaLigada<T>::popback(){
    Nodo *temp=head;
    if(cont==0){
        cout<<"Arreglo Vacio"<<endl;
    }
    else if(cont==1){
        popfront();
    }
    else{
        while(temp->sig->sig!=nullptr){
            temp=temp->sig;
        }
        delete temp->sig;
        temp->sig=nullptr;
        cont--;
    }
}

#endif 
