//
// Created by Eduardo José Medina Alfaro on 18/10/17.

/*
    4.- Elabore un pseudocódigo que permita ingresar un número entero (1 a 10), y muestre un mensaje indicando la vocal
    correspondiente, considerando que la vocal A=1.
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