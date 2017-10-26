// Created by Eduardo José Medina Alfaro on 18/10/17.
/*
    5.- Elaborar un pseudocódigo que permita determinar el orden de tres números de mayor a menor.
*/

/*
    Variables a utilizar en el pseudocódigo
        nro1    Número 1
        nro2    Número 2
        nro3    Número 3
        menor   Menor de los números
        mayor   Mayor de los números
        medio   Valor intermedio de los números

    Inicio
        //Definir variables
        entero : nro1 , nro2, nro3, menor, mayor, medio

        Escribir("Ingresar número 1 : ")
        Leer(nro1)

        Escribir("Ingresar número 2 : ")
        Leer(nro2)

        Escribir("Ingresar número 3 : ")
        Leer(nro3)

        Si ( nro1 > nro2 ) entonces
            mayor <- nro1
            menor <- nro2
        Sino
            mayor <- nro2
            menor <- nro1
        Fin_si

        medio <- nro3
        Si (nro3 > mayor) entonces
            medio <- mayor
            mayor <- nro3
        Fin_si

        Si (nro3 < menor) entonces
            medio <- menor
            menor <- nro3
        Fin_si

        Escribir("Ordenar números  mayor : ",mayor, " medio : ", medio," menor : ", menor)
    Fin
 */

#include <iostream>
int main() {
    int nro1, nro2, nro3,menor,medio,mayor;

    std::cout << "Ingresar número 1 : "; std::cin >> nro1;
    std::cout << "Ingresar número 2 : "; std::cin >> nro2;
    std::cout << "Ingresar número 3 : "; std::cin >> nro3;

    if(nro1>nro2){
        mayor= nro1;
        menor= nro2;
    }else{
        mayor= nro2;
        menor= nro1;
    }
    medio= nro3;
    if(nro3>mayor){
        medio= mayor;
        mayor= nro3;
    }
    if(nro3<menor){
        medio= menor;
        menor= nro3;
    }


    std::cout << "Ordenar números " <<  " mayor : " << mayor << " medio : " << medio << " menor : " << menor << std::endl;
    return 0;
}

/*  Resultado
    Ingresar número 1 : 3
    Ingresar número 2 : 3
    Ingresar número 3 : 3
    Ordenar números  mayor : 3 medio : 3 menor : 3

    Ingresar número 1 : 3
    Ingresar número 2 : 6
    Ingresar número 3 : 1
    Ordenar números  mayor : 6 medio : 3 menor : 1
*/