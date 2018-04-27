//
// Created by Eduardo José Medina Alfaro on 4/26/18.
//Eliminar elementos de una cola
//1. Obtener el valor del nodo
//2. Crear el nodo aux y asignarle el frente de la cola
//3. Eliminar el nodo del frente de la cola
//

#include <iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarCola(Nodo *&, Nodo *&,int);

bool colaVacia(Nodo *);

void muestraCola(Nodo *);

void suprimirCola(Nodo *&, Nodo *&, int &);

int main(){

    Nodo *frente=NULL;
    Nodo *fin=NULL;
    int dato=0;

    insertarCola(frente,fin,1);
    insertarCola(frente,fin,2);
    insertarCola(frente,fin,3);
    insertarCola(frente,fin,4);

    cout<<"Mostrar cola "<<endl;

    muestraCola(frente);

    cout<<"\nEliminar cola "<<endl;

    while (frente!=NULL){
        suprimirCola(frente,fin,dato);

        if(frente!=NULL){
            cout<<dato<<" , ";
        }else{
            cout<<dato<<" . ";
        }
    }
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

void suprimirCola(Nodo *&frente, Nodo *&fin, int &n){
    n = frente->dato;
    Nodo *aux=frente;

    if (frente==fin){
        frente=NULL;
        fin=NULL;
    } else{
        frente= frente->siguiente;
    }
    delete aux;
}

//output
/*
Mostrar cola
   1   2   3   4
Eliminar cola
1 , 2 , 3 , 4 .
 */