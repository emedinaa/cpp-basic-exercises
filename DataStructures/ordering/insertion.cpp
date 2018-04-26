//
// Created by Eduardo Medina on 26/04/18.
//arreglo desordenado, por inserción
//
#include <iostream>

using  namespace std;


int main() {
    int numeros[] ={ 4,2,3,1,5};
    int i, pos,aux;

    for(i=0;i<5;i++){
        pos=i;
        aux= numeros[i];

        while((pos>0) && (numeros[pos-1]>aux)){
            numeros[pos]=numeros[pos-1];
            pos --;
        }
        numeros[pos]=aux;
    }

    cout<< "Orden ascendente ";
    for(i=0; i<5;i++){
        cout<<numeros[i]<<" ";
    }

    cout<< "Orden descendente ";
    for(i=4; i>=0;i--){
        cout<<numeros[i]<<" ";
    }
    return 0;
}
//output
/*
 { 4,2,3,1,5}

 Orden ascendente 1 2 3 4 5 Orden descendente 5 4 3 2 1
 */