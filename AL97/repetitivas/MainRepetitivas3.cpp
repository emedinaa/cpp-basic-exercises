//
// Created by Eduardo José Medina Alfaro on 18/10/17.

/*
    3.- Modifique el pseudocódigo del problema 2 para que cuente las veces que ha leído un número
    y escriba el resultado por pantalla.
*/

/*
   Variables a utilizar en el pseudocódigo
        flag    Bandera
        nro     Número ingresado
        count   Contador de números

   Inicio
        //Definir variables
        entero : nro , flag <- -1, count <-0

        Mientras ( flag<0) hacer
              Escribir("Ingresar número : ")
              Leer(nro)
              count <- count +1

              Si (nro>=5 and nro <=15) entonces
                flag <- 1
                Escribir("Número : ", nro , "Contador ",count)
                count <- 0
              Fin_si

        Fin_Mientras
   Fin
*/

#include <iostream>
int main() {
    int flag =-1;
    int nro;
    int count = 0;

    while(flag<0){
        std::cout << "Ingresar número en el rango 5, 15  : "; std::cin >> nro;
        count= count+1;
        if(nro>=5 && nro <=15){
            flag=1;
            std::cout << "Número " << nro << " Contador : "<< count << std::endl;
            count=0;
        }
    }
    return 0;
}

/*  Resultado

    Ingresar número en el rango 5, 15  : 2
    Ingresar número en el rango 5, 15  : 1
    Ingresar número en el rango 5, 15  : 4
    Ingresar número en el rango 5, 15  : 6
    Número 6 Contador : 4
*/
