//
// Created by Eduardo José Medina Alfaro on 18/10/17.

/*
    4.- Elabore un pseudocódigo que permita ingresar un número entero (1 a 10), y muestre un mensaje indicando la vocal
    correspondiente, considerando que la vocal A=1.
*/

/*
    Variables a utilizar en el pseudocódigo
    valor   Número ingresado
    vocal   Representación en vocal

    Inicio
        //Definir variables
        entero valor
        cadena  vocal

        Escribir("Ingrese un número de 1-10 : ")
        Leer(valor)

        En caso sea (valor) hacer
            1:
                vocal <- "A"

            2:
                vocal <- "E"

            3:
                vocal <- "I"

            4:
                vocal <- "O"

            5:
                vocal <- "U"

        Sino
            vocal <- " Valor incorrecto"
        Fin_caso

        Escribir(" Mensaje : ", vocal)
    Fin
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
    int valor;
    string  vocal;

    std::cout << "Ingrese un número de 1-10 : "; std::cin >> valor;

    switch (valor){
        case 1:
            vocal= "A";
            break;
        case 2:
            vocal= "E";
            break;
        case 3:
            vocal= "I";
            break;
        case 4:
            vocal= "O";
            break;
        case 5:
            vocal= "U";
            break;
        default:
            vocal=" Valor incorrecto";
    }
    std::cout << "Mensaje : " << vocal << std::endl;
    return 0;
}
/*  Resultado
    Ingrese un número de 1-10 : 5
    Mensaje : U

    Ingrese un número de 1-10 : 9
    Mensaje :  Valor incorrecto

    Ingrese un número de 1-10 : 3
    Mensaje : I

    Ingrese un número de 1-10 : 2
    Mensaje : E
*/