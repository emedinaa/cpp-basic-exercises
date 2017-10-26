// Created by Eduardo José Medina Alfaro on 18/10/17.
/*
    4. Elaborar un pseudocódigo que lea un número entero de 2 cifras y que se muestre el número de
    unidades, decenas que lo componen.
 */
/*
    Variables a utilizar en el pseudocódigo
        nro2crifras número de 2 cifras
        unidades   números de unidades de un número
        decenas número de decenas de un número

    Inicio
        //Definir variables
        entero : nro2crifras,unidades,decenas,

        Escribir("Ingresar un número de 2 cifras")
        Leer(nro2crifras)

        unidades <- nro2crifras Mod 10
        nro2crifras <- nro2crifras Div 10
        decenas <- nro2crifras Mod 10

        Escribir("Unidades : ",unidades, " Decenas : "+decenas)

    Fin
 */
#include <iostream>

int main() {
    int nro2crifras,unidades,decenas;
    std::cout << "Ingresar un número de 2 cifras : "; std::cin >> nro2crifras;

    unidades= nro2crifras%10;
    nro2crifras= nro2crifras/10;
    decenas= nro2crifras%10;

    std::cout << "Unidades : " << unidades << " Decenas : " << decenas << std::endl;
    return 0;
}
/*
    Resultado
    Ingresar un número de 2 cifras : 35
    Unidades : 5 Decenas : 3
*/