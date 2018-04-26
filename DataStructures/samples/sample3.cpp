//
// Created by Eduardo Medina on 24/04/18.
//
/*
Solución:

Especificación del TAD y los algoritmos

Especificación VECTOR
variable
num						: entero.
métodos
menu						: no retorna valor.
ingresarDatos()  				: no retorna valor.
mostrarDatos()				: no retorna valor.
registrarDatos(a, n, x)			: no retorna valor.
concatenarVector(a, n1, b, n2, c, n3) 	: no retorna valor.
mostrarVector(a,n)				: no retorna valor.

Significado
menu muestra las opciones a escoger.
ingresarDatos ingresa datos al vector.
mostrarDatos muestra los datos del vector.
registrarDatos añade x del tipo VECTOR al vector a, con una cantidad n de elementos.
concatenarVector tiene como precondición a los vectores a y b cada uno con su respectivo número de elementos n1, n2, y como postcondición al  vector c, con su número de elementos n3.
mostrarVector muestra el contenido del vector a, con una cantidad de n elementos.
Fin_especificacion

Procedimiento concatenarVector (a, n1, b, n2, c, n3)
// Definir variables
Entero: i
Desde i  0  hasta i<n1 con incremento 1 Hacer
	c[n3]  a[i]
	n3  n3+1
Fin_desde
Desde i  0 hasta i<n2 con incremento 1 Hacer
	c[n3]  b[i]
	n3  n3+1
Fin_desde
Fin_procedimiento

Implementación del TAD
 */
#include <iostream>
#include <iomanip>
using namespace std;
class VECTOR{
    int num;
public:
    void menu(){
        cout<< "\n MENU DE OPCIONES \n";
        cout<< "----------------\n" ;
        cout<<"<1> Ingresar vector A \n";
        cout<<"<2> Ingresar vector B \n";
        cout<<"<3> Concatenar vector \n";
        cout<<"<4> Mostrar vector \n";
        cout<<"<5> Salir \n";
    }

    void ingresarDatos(){
        fflush(stdin);
        cout<<"\n leer numero   : ";cin>>num;
    }

    void mostrarDatos(){
        cout<<num<<setw(5);
    }

    void registrarDatos(VECTOR a[100],int &n, VECTOR x )	{
        a[n]=x;
        n++;
    }
    void concatenarVector(VECTOR a[50], int n1, VECTOR b[50],
                          int n2, VECTOR c[50], int &n3){
        int i;
        for(i=0;i<n1;i++){
            c[n3]=a[i];
            n3++;
        }
        for(i=0;i<n2;i++){
            c[n3]=b[i];
            n3++;
        }

    }
    void mostrarVector(VECTOR a[50], int n){
        for(int i=0; i<n; i++)
            a[i].mostrarDatos();
        cout<<"\n";
    }
};

int main(int argc, char** argv) {
    char opcion;
    VECTOR a[50], b[50], c[50], x;
    int n1=0, n2=0, n3=0;
    do{
        x.menu();
        cout<<"\n Ingrese opcion : ";
        opcion=cin.get();
        switch(opcion)	{
            case '1':
                x.ingresarDatos();
                x.registrarDatos(a,n1,x);
                break;
            case '2':
                x.ingresarDatos();
                x.registrarDatos(b,n2,x);
                break;
            case '3':
                x.concatenarVector(a,n1,b,n2,c,n3);
                cout<<"\n Se concateno exitosamente\n ";
                break;
            case '4':
                cout<<"Vector A:"<<"\n";
                x.mostrarVector(a,n1);
                cout<<"Vector B:"<<"\n";
                x.mostrarVector(b,n2);
                cout<<"Vector C concatenacion "<<"\n";
                x.mostrarVector(c,n3);
                break;
        }
        cin.ignore();
    }
    while( opcion !='5');
    return 0;
}


