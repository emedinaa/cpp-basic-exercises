//
// Created by Eduardo José Medina Alfaro on 18/10/17.
//

/*
    1.- Escriba un pseudocódigo que lea un número entero y que compruebe si es menor que 5. Si no lo es,
    debe volver a leer un número, repitiendo la operación hasta que el usuario escriba un valor correcto.
    Finalmente debe escribir por pantalla el valor leído.
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

              Si (nro<5) entonces
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
        std::cout << "Ingresar número menor que 5 : "; std::cin >> nro;
        if(nro<5){
            flag=1;
            std::cout << "Número " << nro << std::endl;
        }
    }
    return 0;
}

/*  Resultado
    Ingresar número menor que 5 : 6
    Ingresar número menor que 5 : 5
    Ingresar número menor que 5 : 7
    Ingresar número menor que 5 : 4
    Número 4
 */