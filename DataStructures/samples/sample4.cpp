//
// Created by Eduardo Medina on 24/04/18.
//Búsqueda
//

#include <iostream>
#include <iomanip>
using namespace std;
class BUSCA{
    int num;
public:
    void menu(){
        cout<< "\nMENU DE OPCIONES\n";
        cout<< "----------------\n" ;
        cout<<"<1> Ingresar\n";
        cout<<"<2> Busqueda\n";
        cout<<"<3> Mostrar vector\n";
        cout<<"<4> Salir \n";
    }
    void ingresarDatos(){
        fflush(stdin);
        cout<<"\n ingresar numero: ";
        cin>>num;
    }
    void mostrarDatos(){
        cout<<num<<setw(5);
    }
    void registrarDatos(BUSCA a[50], int &n, BUSCA x){
        a[n]=x;
        n++;
    }
    bool buscaVectorDesordenado (BUSCA a[50] , int n, int ele){
        // Definir variables
        int i;
        bool  r;
        i = 0;
        while (a[i].num != ele  && i < n)
            i = i + 1;
        r = (a[i].num == ele);
        return r;
    }
    void mostrarVector(BUSCA a[50],int num){
        // Definir variable
        int i;
        for(i = 0;i < num;i++)
            a[i].mostrarDatos();
    }
};

int main(int argc, char** argv) {
    char opcion;
    BUSCA a[50],x;
    int indice=0,ele;
    do{
        x.menu();
        cout<<"\ningrese opcion : ";
        opcion=cin.get();
        switch(opcion){
            case '1':
                x.ingresarDatos();
                x.registrarDatos(a,indice,x);
                break;
            case '2':
                cout<<"Ingrese elemento a buscar: ";
                cin>>ele;
                x.buscaVectorDesordenado(a,indice, ele);
                if(x.buscaVectorDesordenado(a,indice, ele))
                    cout<<"Elemento se encuentra en el vector";
                else
                    cout<<"Elemento no se encuentra en el vector";
                break;
            case '3':
                x.mostrarVector(a,indice);
                break;
        }
        cin.ignore();
    }
    while( opcion !='4');
    return 0;
}


