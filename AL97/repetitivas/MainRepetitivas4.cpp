//
// Created by Eduardo José Medina Alfaro on 18/10/17.

/*
    4.- Elabore un pseudocódigo que muestre los términos de la serie Fibonacci que sean menores a 100000.
        0,1, 1, 2, 3, 5, 8, 13, 21, 34...
*/

/*
   Variables a utilizar en el pseudocódigo
        serie   Números de la serie
        prev    Número previo
        next    Número siguiente
        i       Contador

   Inicio
        //Definir variables
        entero : prev <- 0 , next <- -1, serie <-1
        entero : i <- 0

        Escribir("",prev)
        Desde (i<-0) hasta (i < 1000) con incremento 1 Hacer
              Escribir("",serie)
              serie <- prev + next
              prev= next
              next = serie
        Fin_desde
   Fin
*/

#include <iostream>
int main() {
    const int max= 1000;

    int serie=1;
    int prev=0,next=1;

    std::cout << " "  << prev << std::endl;
    for (int i = 0; i <max ; ++i) {
        std::cout << " " << serie << std::endl;
        serie= prev + next;
        prev= next;
        next= serie;
    }

    return 0;
}
/* Resultado

     0
     1
     1
     2
     3
     5
     8
     13
     21
     34
     55
     89
     144
     233
     377
     610
     987
     1597
     2584
     4181
     6765
     ...
*/