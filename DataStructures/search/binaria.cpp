// Created by Eduardo José Medina Alfaro on 4/25/18.
//

#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    //algoritmo de búsqueda binaria, arreglo ordenado ascendente
    int numeros[] = {1,2,3,4,5,6};
    int inf, sup,mitad,dato;
    char band= 'F';

    dato= 4;
    inf =0;
    sup = 6;

    while (inf <= sup){
        mitad= (inf+sup)/2;

        if(numeros[mitad]==dato){
            band='V';
            break;
        }

        if(numeros[mitad] > dato){
            sup= mitad;
            mitad= (inf+ sup)/2;
        }

        if(numeros[mitad]< dato){
            inf= mitad;
            mitad= (inf+sup)/2;
        }
    }

    if(band=='V'){
        cout<<"Número encontrado en "<<mitad<<endl;
    }else{
        cout<<"El número NO ha sido encontrado"<<endl;
    }

    return 0;
}
