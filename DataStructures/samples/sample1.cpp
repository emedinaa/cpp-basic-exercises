//
// Created by Eduardo Medina on 24/04/18.

/*

Especificación del TAD y los algoritmos

Especificación VECTOR
variable
num					: entero.
métodos
menu()				: no retorna valor.
ingresarDatos()			: no retorna valor.
mostrarDatos()			: no retorna valor.
registrarDatos(a, n , x)		: no retorna valor.
eliminarPorValor(a, n1, valor)	: retorna valor lógico.
mostrarVector(a,n)			: no retorna valor.
significado
menu muestra las opciones a escoger.
ingresarDatos ingresa datos al vector.
mostrarDatos muestra los datos del vector.
registrarDatos añade x del tipo VECTOR al vector a, con una cantidad de n elementos.
eliminarPorValor tiene como precondición el vector a, con número de elementos n1 y su valor, como postcondición el vector a, con su número de elementos n1.
mostrarVector muestra el contenido del vector a, con una cantidad de n elementos.
Fin_especificacion

Funcion eliminarPorValor(a, n1,valor) : booleano
	// Definir variables
	Lógico: encontro  false
	Entero: i  0
	Mientras (i<n1  y  no encontro) Hacer
		Si  (a[i].num =valor)  entonces
			encontro  true
		Sino
			i  i+1
		Fin_si
Fin_mientras
	Si (encontro) entonces
		Mientras ( i<n1) Hacer
			a[i]a[i+1]
			i  i+1
		Fin_mientras
		n1  n1-1
	Fin_si
	retornar encontro
Fin_funcion

Implementación del TAD
 */

#include <iostream>
#include <iomanip>

using namespace std;

class VECTOR{
    int num;
    public:
        void menu(){
                cout << "\nMENU DE OPCIONES \n";
                cout << "------------------ \n";
                cout << "<1> Ingresar vecto A \n";
                cout << "<2> Eliminar por valor \n";
                cout << "<3> Mostrar vector \n";
                cout << "<4> Salir \n";
        }

        void ingresarDatos(){
            fflush(stdin);
            cout << "\n leer número : ";cin>>num;
        }

        void mostrarDatos(){
            cout << num << setw(5);
        }

        void registrarDatos(VECTOR a[100], int &n, VECTOR x){
            a[n]=x;
            n++;
        }

       bool eliminarPorValor(VECTOR a[50],int &n1,int valor){
            bool encontro=false;
            int i=0;
            while (i<n1 && !encontro){
                if (a[i].num==valor)
                    encontro= true;
                else
                    i++;
            }
            if(encontro){
                while( i<n1){
                    a[i]=a[i+1];
                    i++;
                }
                n1--;
            }
            return encontro;
        }

        void mostrarVector(VECTOR a[50],int n){
            for(int i=0; i<n; i++)
                a[i].mostrarDatos();
            cout<<"\n";
        }

};

int  main(){

    char opcion;
    VECTOR a[50],x;
    int valor, n1=0;
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
                x.mostrarVector(a,n1);
                cout<<"\n Ingrese valor a eliminar:";cin>>valor;
                if(x.eliminarPorValor(a,n1,valor))
                    cout<<"\n Se elimino exitosamente\n ";
                else
                    cout<<"no se elimino";
                break;
            case '3':
                cout<<"Vector A:"<<"\n";
                x.mostrarVector(a,n1);
                break;
        }
        cin.ignore();
    }
    while(opcion!='4');

    return 0;
}

