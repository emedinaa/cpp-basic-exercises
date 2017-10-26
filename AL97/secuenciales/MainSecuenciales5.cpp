// Created by Eduardo José Medina Alfaro on 19/10/17.
/*
    5.Elaborar un  pseudocódigo  que  calcule  el  promedio  final  del  curso  de  matemáticas,  sabiendo
    que  el  examen  parcial  equivale  a  un  30%  del  promedio,  el  examen  final  equivale  a  50%  y  el
    promedio simple de 3 prácticas calificadas equivale al 20% del promedio.
*/
/*
    Variables a utilizar en el pseudocódigo
        pc1         nota práctica calificada 1
        pc2         nota práctica calificada 2
        pc3         nota práctica calificada 3
        examp       nota examen parcial
        examf       nota examen final
        promediof   promedio final
    Inicio
        //Definir variables
        real : pc1,pc2,pc3,examp,examf,promediof

        Escribir("Ingresar nota de práctica calificada 1")
        Leer(pc1)

        Escribir("Ingresar nota de práctica calificada 2")
        Leer(pc2)

        Escribir("Ingresar nota de práctica calificada 3")
        Leer(pc3)

        promediof <- (examp*0.3)+(examf*0.5)+ ((pc1+pc2+pc3)/3 )*0.2

        Escribir("Promedio final ", promediof)
    Fin
*/
#include <iostream>

int main() {
    double pc1,pc2,pc3,examp,examf,promediof;
    std::cout << "Ingresar nota de práctica calificada 1 : "; std::cin >> pc1;
    std::cout << "Ingresar nota de práctica calificada 2 : "; std::cin >> pc2;
    std::cout << "Ingresar nota de práctica calificada 3 : "; std::cin >> pc3;
    std::cout << "Ingresar nota de examen parcial : "; std::cin >> examp;
    std::cout << "Ingresar nota de examen final : "; std::cin >> examf;

    promediof=(examp*0.3)+(examf*0.5)+ ((pc1+pc2+pc3)/3 )*0.2;

    std::cout << "Promedio final : " << promediof << std::endl;
    return 0;
}
/*
    Resultado
    Ingresar nota de práctica calificada 1 : 10
    Ingresar nota de práctica calificada 2 : 10
    Ingresar nota de práctica calificada 3 : 10
    Ingresar nota de examen parcial : 13
    Ingresar nota de examen final : 13
    Promedio final : 12.4
*/