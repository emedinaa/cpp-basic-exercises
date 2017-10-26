//
// Created by Eduardo José Medina Alfaro on 18/10/17.
//

/*

    2.- Modifique el pseudocódigo del problema 1 para que, en vez de comprobar que el número es menor que 5,
    compruebe que se encuentre en el rango (5,15).
*/

/*
   Variables a utilizar en el pseudocódigo
        flag    Bandera
        nro     Número ingresado

   Inicio
        //Definir variables
        entero : nro , flag <- -1

        Mientras ( flag<0) hacer
              Escribir("Ingresar número : ")
              Leer(nro)

              Si (nro>=5 and nro <=15) entonces
                flag <- 1
                Escribir("Número : ", nro )
              Fin_si

        Fin_Mientras
   Fin
*/


#include <iostream>
int main() {
    int flag =-1;
    int nro;

    while(flag<0){
        std::cout << "Ingresar número en el ranro 5, 15  : "; std::cin >> nro;
        if(nro>=5 && nro <=15){
            flag=1;
            std::cout << "Número " << nro << std::endl;
        }
    }
    return 0;
}

/*  Resultado

    Ingresar número en el ranro 5, 15  : 4
    Ingresar número en el ranro 5, 15  : 5
    Número 5
*/

