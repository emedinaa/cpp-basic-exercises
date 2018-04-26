//
// Created by Eduardo Medina on 26/04/18.
/*
 Usted tiene como entrada dos vectores (a y b) y se quiere saber qué valores y el orden correcto que se almacena en el tercer vector c después de aplicarles el algoritmo1:
     Vector a: 8, 3,  4, 12
     Vector b: 10,  5, 9
 */

#include <iostream>
using  namespace std;

bool algoritmo2(int x);
void algoritmo(int a[], int b[]);

int main() {

    int a[]={8,3,4,12};
    int b[]={10,5,9};

    //algoritmo(a,b);
    cout<< "algoritmo ";
    algoritmo(a,b);
    return 0;
}

void algoritmo(int a[], int b[]){

    int i=0,j,n1=4,n2=3,n3=0,k=0;
    int c[5]={};
    while (i<n1){
        if(algoritmo2(a[i])){
            c[n3]= a[i];
            n3= n3+1;
        }
        i= i+1;
    }
    j=0;
    while (j<n2){
        if(!algoritmo2(b[j])){
            c[n3]= b[j];
            n3= n3+1;
        }
        j=j+1;
    }

    int sizeC= sizeof(c)/sizeof(c[0]);
    cout<< "c[] :"<<sizeC<<endl;

    for(k=0; k<sizeC;k++){
        cout<<c[k]<<" ";
    }
}

bool algoritmo2(int x){

    if(x%2==0){
        return true;
    }else{
        return false;
    }
}

//output
/*
algoritmo c[] :5
8 4 12 5 9
 */