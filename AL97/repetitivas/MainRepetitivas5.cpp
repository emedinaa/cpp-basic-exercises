//
// Created by Eduardo José Medina Alfaro on 18/10/17.

/*
    5.- Elaborar un pseudocódigo que permita definir el tiempo que se demora una moto en dar /y/vueltas
    con un tiempo de ‘x’ segundos por vuelta, teniendo en cuenta que en cada giro va aumentar 1.5 segundos el tiempo,
    imprimir tiempo por cada vuelta y tiempo total en las /y/ vueltas.
*/

/*
   Variables a utilizar en el pseudocódigo
        a   acumulador de giro
        t   acumulador de tiempo
        s   acumulador total del tiempo
        y   número de vueltas
        x   tiempo en segundos por vuelta

   Inicio
        //Definir variables
        real : a <- 0 , t <- 0, s <-0
        entero : y , x

        Escribir("Ingresar el número de vueltas : ")
        Leer(y)

        Escribir("Tiempo en segundos por vuelta  : ")
        Leer(x)

        Desde (i<-1) hasta (i <= y) con incremento 1 Hacer
              t <- x + a
              a <- a + v
              s <- t + s

              Escribir("Vuelta ", i, " tiempo : ", t)
        Fin_desde

        Escribir("Tiempo total para ", y, " vueltas es : ", s)
   Fin
*/

#include <iostream>
int main() {
    const  double v=1.5;
    double a=0,t=0,s=0;
    int y,x;

    std::cout << "Ingresar el número de vueltas : "; std::cin >> y;
    std::cout << "Tiempo en segundos por vuelta : "; std::cin >> x;

    for (int i = 1; i <=y ; ++i) {
        t= x+a;
        a= a + v;
        s= t+s;

        std::cout << "Vuelta " << i << " , tiempo  : "<< t << std::endl;
    }

    std::cout << "Número  de vueltas " << y << " , tiempo  : "<< s << std::endl;
    return 0;
}

/*  Resultado

    Ingresar el número de vueltas : 4
    Tiempo en segundos por vuelta : 1
    Vuelta 1 , tiempo  : 1
    Vuelta 2 , tiempo  : 2.5
    Vuelta 3 , tiempo  : 4
    Vuelta 4 , tiempo  : 5.5

    Número  de vueltas 4 , tiempo  : 13
*/