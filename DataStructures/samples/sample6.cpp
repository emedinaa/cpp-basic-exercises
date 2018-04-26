//
// Created by Eduardo Medina on 24/04/18.
// Binaria
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
class BINARIA{
    int num;
public:
    void menu(){
        cout<< "\nMENU DE OPCIONES\n";
        cout<< "----------------\n" ;
        cout<<"<1> Ingresar\n";
        cout<<"<2> Busqueda binaria\n";
        cout<<"<3> Mostrar vector\n";
        cout<<"<4> Salir \n";
    }
    void ingresarDatos(){
        fflush(stdin);
        cout<<"\n leer codigo: ";
        cin>>num;
    }
    void mostrarDatos(){
        cout<<num<<setw(5);
    }
    void registrarDatos(BINARIA a[50], int &n, BINARIA x ){
        a[n]=x;
        n++;
    }
    bool buscaBinaria (BINARIA a[50], int n, int ele) 		{
        // Declarar e inicializar variables
        int inf, sup, medio = 0;
        bool recorre = false, p = false;
        inf = 0;
        sup = n - 1;
        if (ele >= a[0].num && ele <= a[n-1].num)
            recorre = true;
        else
            recorre = false;
        while (recorre)			{
            medio = (inf + sup) / 2;
            if (ele > a[medio].num)
                inf = medio + 1;
            else
                sup = medio- 1;
            if (inf <= sup && a[medio].num != ele)
                recorre =true;
            else
                recorre = false;
        }
        p = (a[medio].num == ele);
        return p;
    }
    void visualizar(BINARIA a[50],int num){
        // Definir variable
        int i;
        for(i = 0;i < num;i++)
            a[i].mostrarDatos();
    }
};
int main(){
    char opcion;
    BINARIA a[50],x;
    int indice=0,ele;
    do{
        x.menu();
        cout<<"\ningrese opcion : ";
        opcion=cin.get();
        switch(opcion)		{
            case '1':
                x.ingresarDatos();
                x.registrarDatos(a,indice,x);
                break;
            case '2':
                cout<<"Ingrese elemento a buscar: ";
                cin>>ele;
                x.buscaBinaria(a,indice, ele);
                if(x.buscaBinaria(a,indice, ele))
                    cout<<"Elemento se encuentra en el vector";
                else
                    cout<<"Elemento no se encuentra en el vector";
                break;
            case '3':
                x.visualizar(a,indice);
                break;
        }
        cin.ignore();
    }
    while( opcion !='4');
    system("PAUSE");
    return 0;
}

