//
// Created by Eduardo Medina on 26/04/18.
// Ordenar una lista de n números
//1. buscar el mínimo elemento de una lista
//2. Intercambiar con el primer elemento
//3. Buscar el mínimo del resto de la lista
//4. Intercambiar con el segundo
//5. Repetir

//{4,3,1,5,2}

#include <iostream>
using  namespace std;

int main() {
    int numeros[] = {3,2,1,5,4};
    int i,j,aux,min;

    for(i=0;i<5;i++){
        min=i;//suponer que el primero es el mínimo
        for(j=i+1;j<5;j++){
            if(numeros[j]< numeros[min]){
                min=j;
            }
        }
        aux= numeros[i];
        numeros[i]= numeros[min];
        numeros[min]= aux;
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
{4,3,1,5,2}
Orden ascendente 1 2 3 4 5
Orden descendente 5 4 3 2 1
 */
