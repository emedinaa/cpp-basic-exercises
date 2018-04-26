//
// Created by Eduardo Medina on 26/04/18.
//Se tiene un arreglo y la cantidad de elementos que tiene (n) y
// un procedimiento denominado algoritmo al cual se le pasan el arreglo
// y el número de elementos que tiene el arreglo.
// Se quiere saber cómo quedan los datos del arreglo después de ser procesados por el algoritmo.
//arreglo: 6, 4, 1, 3
//n : 4
//

#include <iostream>
using  namespace std;

void algoritmo(int arr[], int n);

int main() {
    int arreglo[]={6,4,1,3};
    int n=4;

    algoritmo(arreglo,n);
    return 0;
}

void algoritmo(int arreglo[],int n)
{
    int t,k,i;
    k= n-1;
    t=arreglo[k];

    while(k>0){
        arreglo[k]=arreglo[k-1];
        k=k-1;
        cout<< "k "<<k<<endl;
    }
    arreglo[0]=t;

    cout<< "entrada  {6,4,1,3}"<<endl;
    cout<< "salida :";
    for(i=0; i<n;i++){
        cout<<arreglo[i]<<" ";
    }
}
//output
/*
entrada  {{6,4,1,3}}
salida :3 6 4 1
 */