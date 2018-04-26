//
// Created by Eduardo Medina on 26/04/18.
//


#include <iostream>

using  namespace std;

int main() {
    int a[]= {3,4,2,1,5};
    int i, dato;
    char band= 'F';

    //búsqueda secuencial
    dato=3;
    i=0;
    while ((band=='F' && (i<5))){
        if(a[i]==dato){
            band= 'V';
        }
        i++;
    }

    if(band=='F'){
        cout<<"El número a buscar no existe en el arreglo";
    }else if(band=='V'){
        cout<<"El número "<<dato<<" ha sido encontrado en la pos : "<<(i-1)<<endl;
    }

    return 0;
}
//output
/*
El número 3 ha sido encontrado en la pos : 0
 */