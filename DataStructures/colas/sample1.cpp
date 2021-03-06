//
// Created by Eduardo Medina on 25/04/18.
// https://www.youtube.com/watch?v=AoepPzqwggU&index=101&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh
//
#include <iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

/**
 * insertar elementos en una cola
 * 1. crear espacio en memoria
 * 2. Asignar ese nuevo nodo al dato que queremos insertar
 * 3. Asigmar punteros frente y fin hacia el nuevo nodo
 */

void insertarCola(Nodo *&, Nodo *&,int);

bool colaVacia(Nodo *);

void muestraCola(Nodo *);

int main(){

    Nodo *frente=NULL;
    Nodo *fin=NULL;

    insertarCola(frente,fin,1);
    insertarCola(frente,fin,2);
    insertarCola(frente,fin,3);
    insertarCola(frente,fin,4);

    muestraCola(frente);
    return 0;
}

void insertarCola(Nodo *&frente, Nodo *&fin,int n){

    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato= n;
    nuevo_nodo->siguiente= NULL;

    if (colaVacia(frente)){
        frente= nuevo_nodo;
    }else{
        fin->siguiente= nuevo_nodo;
    }

    fin= nuevo_nodo;
}

bool colaVacia(Nodo *frente){
    if(frente==NULL){
        return true;
    }else{
        return false;
    }
}

void muestraCola(Nodo *frente )
{
    Nodo  *aux;

    aux = frente;

    while( aux != NULL )
    {
        cout<<"   "<< aux->dato ;
        aux = aux->siguiente;
    }
}

//output
/*
 * 1   2   3   4
 */
