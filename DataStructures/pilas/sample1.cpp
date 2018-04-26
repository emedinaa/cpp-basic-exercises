//
// Created by Eduardo Medina on 25/04/18.
//
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int); //prototipo
void sacarPila(Nodo *&, int &);

int main(){
    Nodo *pila = NULL;

    int dato;

    cout<<"Digite un número : ";
    cin>>dato;
    agregarPila(pila,dato);

    cout<<"Digite otro número : ";
    cin>>dato;
    agregarPila(pila,dato);

    cout<<"Sacando los elementos de la pila : ";

    while (pila !=NULL){
        sacarPila(pila,dato);
        if(pila!=NULL){
            cout<<dato<<",";
        }else{
            cout<<dato<<".";
        }
    }
    return 0;
}

void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo(); //espacio de memoria
    nuevo_nodo->dato = n; // cargar el valor dentro del nodo(dato)
    nuevo_nodo->siguiente= pila; //cargar el putero pila dentro del nodo
    pila= nuevo_nodo;//asignar el nuevo nodo a pila

    cout<<" Elemento "<<n<<" ha sido agregado a la PILA "<<endl;
}

void sacarPila(Nodo *&pila, int &n){
    //1. Nodo auxiliar
    Nodo *aux = pila;
    //2. Igual el n a aux -> dato
    n = aux->dato;
    //3. Pasar pila a siguiente nodo
    pila= aux->siguiente;
    //4. Eliminar auxiliar;
    delete aux;
}
