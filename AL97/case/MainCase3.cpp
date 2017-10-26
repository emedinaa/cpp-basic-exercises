//
// Created by Eduardo José Medina Alfaro on 18/10/17.

/*
    3.- Elabore un pseudocódigo que permita ingresar un número entero (1 a 10), y muestre su equivalente en romanos.
*/

/*
    Variables a utilizar en el pseudocódigo
    valor       Número ingresado
    nroRomano   Representación de número en romano

    Inicio
        //Definir variables
        entero valor
        cadena  nroRomano

        Escribir("Ingrese un número de 1-10 : ")
        Leer(valor)

        En caso sea (valor) hacer
            1 :
                nroRomano <- "I"
            2:
                nroRomano <- "II"
            3:
                nroRomano <- "III"
            4:
                nroRomano <- "IV"
            5:
                nroRomano <- "V"
            6:
                nroRomano <- "VI"
            7:
                nroRomano <- "VII"
            8:
                nroRomano <- "VIII"
            9:
                nroRomano <- "IX"
            10:
                nroRomano <- "X"
        Sino
            Escribir (“Número fuera del rango”)
        Fin_caso

        Escribir("Número en romanos  " nroRomano)
    Fin
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    int valor;
    string  nroRomano;

    std::cout << "Ingrese un número de 1-10 : "; std::cin >> valor;

    switch (valor){
        case 1:
            nroRomano= "I";
            break;
        case 2:
            nroRomano= "II";
            break;
        case 3:
            nroRomano= "III";
            break;
        case 4:
            nroRomano= "IV";
            break;
        case 5:
            nroRomano= "V";
            break;
        case 6:
            nroRomano= "VI";
            break;
        case 7:
            nroRomano= "VII";
            break;
        case 8:
            nroRomano= "VIII";
            break;
        case 9:
            nroRomano= "IX";
            break;
        case 10:
            nroRomano= "X";
            break;
        default:
            std::cout << "Numero fuera de rango : " << std::endl;
            break;
    }
    std::cout << "Número en romanos : " << nroRomano << std::endl;
    return 0;
}

/*  Resultado
    Ingrese un número de 1-10 : 2
    Número en romanos : II

    Ingrese un número de 1-10 : 4
    Número en romanos : IV

    Ingrese un número de 1-10 : 10
    Número en romanos : X

    Ingrese un número de 1-10 : 9
    Número en romanos : IX
 */