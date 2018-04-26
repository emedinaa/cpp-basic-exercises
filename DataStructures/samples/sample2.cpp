//
// Created by Eduardo Medina on 24/04/18.
//
/*
 * Solución:

Especificación del TAD y los algoritmos

Especificación VECTOR
variable
num						: entero.
métodos
menu()					: no retorna valor.
ingresarDatos()				: no retorna valor.
mostrarDatos()				: no retorna valor.
registrarDatos(a, n , x)			: no retorna valor.
insertarPorPosicion(a, n1, posición,valor	: no retorna valor.
mostrarVector(a,n)				: no retorna valor.

significado
menu muestra las opciones a escoger.
ingresarDatos ingresa datos al vector.
mostrarDatos muestra los datos del vector.
registrarDatos añade x del tipo VECTOR al vector a, con una cantidad de n elementos.
insertarPorPosicion(), tiene como precondición el vector a, su número de elementos n1, la posición y el valor, y como postcondición el vector a, con su número de elementos n1+1.
mostrarVector muestra el contenido del vector a, con una cantidad de n elementos.
Fin_especificacion
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
        cout<<"<2> Insertar  \n";
        cout<<"<3> Mostrar vector \n";
        cout<<"<4> Salir \n";
    }
    void ingresarDatos(){
        fflush(stdin);
        cout<<"\n leer numero   : ";cin>>num;
    }
    void mostrarDatos(){
        cout<<num<<setw(5);
    }

    void registrarDatos(VECTOR a[100],int &n,VECTOR x ){
        a[n]=x;
        n++;
    }
    bool insertarPorPosicion(VECTOR a[50],int &n1, int posicion,
                             int valor)	{
        bool encontro=false;
        int i=0, j;
        while (i<n1 && !encontro){
            if (i==posicion)
                encontro= true;
            else
                i++;
        }
        if(encontro){
            j=n1;
            while( i< j){
                a[j]=a[j-1];
                j--;
            }
            a[i].num=valor;
            n1++;
        }
        return encontro;
    }
    void mostrarVector(VECTOR a[50],int n){
        for(int i=0; i<n; i++)
            a[i].mostrarDatos();
        cout<<"\n";
    }
};


int main(int argc, char** argv) {
    char opcion;
    VECTOR a[50],x;
    int n1=0,n2=0,n3=0,valor,posicion;
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
                cout<<"\nValor a insertar:";
                cin>>valor;
                cout<<"\nInsertar posicion:";
                cin>>posicion;
                if(x.insertarPorPosicion(a, n1,posicion,valor))
                    cout<<"\n Se inserto exitosamente\n";
                else
                    cout<<"\n no se inserto\n";
                break;
            case '3':
                cout<<"Vector A:"<<"\n";
                x.mostrarVector(a,n1);
                break;
        }
        cin.ignore();
    }
    while( opcion !='4');
    return 0;
}
