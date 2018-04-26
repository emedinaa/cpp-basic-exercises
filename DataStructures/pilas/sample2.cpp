//
// Created by Eduardo Medina on 25/04/18. \n
//
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main(){
    Nodo *pila = NULL;
    int dato;
    char rpta;

    do{
        cout<<"Digite un número ";
        cin >> dato;
        agregarPila(pila,dato);

        cout<<"\nDeseas agregar otro elemento a la PILA(s/n )";
        cin>>rpta;
    }
    while ((rpta=='S') || (rpta=='s'));

    cout<<"\nSacando todos los elementos de la Pila : ";
    while(pila!=NULL){
        sacarPila(pila,dato);

        if(pila!=NULL){
            cout<<dato<<" , ";
        }else{
            cout<<dato<<" . ";
        };
    }
    return 0;
}

void sacarPila(Nodo *&pila,int &n){
    Nodo *aux= pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete(aux);
}

void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_nodo= new Nodo();
    nuevo_nodo->dato= n;
    nuevo_nodo->siguiente= pila;
    pila= nuevo_nodo;

    cout<< "Elemento "<<n<< " ha sido agregado"<<endl;
}