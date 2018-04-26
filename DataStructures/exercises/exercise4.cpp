//
// Created by Eduardo Medina on 26/04/18.
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
int sacarElementoPila(Nodo *&, int &);
void show(Nodo *&);

int main() {
    int dato = 1;
    Nodo *pila = NULL;
    agregarPila(pila, 1);
    agregarPila(pila, 2);
    agregarPila(pila, 3);
    agregarPila(pila, 4);

    show(pila);
    int tmp = sacarElementoPila(pila, dato);
    cout << "\nborrar tmp  " << tmp << endl;
    show(pila);
    /*while (pila != NULL) {
        sacarPila(pila, dato);

        if (pila != NULL) {
            cout << dato << " , ";
        } else {
            cout << dato << " . ";

            return 0;
        }
    }*/
}

    void sacarPila(Nodo *&pila, int &n) {
        Nodo *aux = pila;
        n = aux->dato;
        pila = aux->siguiente;
        delete (aux);
    }

    int sacarElementoPila(Nodo *&pila, int &n) {

        Nodo *aux = pila;
        n = aux->dato;
        pila = aux->siguiente;
        delete (aux);

        return n;
    }

    void agregarPila(Nodo *&pila, int n) {
        Nodo *nuevo_nodo = new Nodo();
        nuevo_nodo->dato = n;
        nuevo_nodo->siguiente = pila;
        pila = nuevo_nodo;

        cout << "Elemento " << n << " ha sido agregado" << endl;
    }

void show(Nodo *&pila) {
    Nodo * aux = pila;

    if (pila == NULL) {
        cout << "\nLa pila esta vacia!\n\n";
    } else {

        cout << "------" << endl;
        while (aux != NULL) {
            cout << aux->dato << "  ";
            aux = aux->siguiente;
        }
    }
}
