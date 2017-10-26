// Created by Eduardo José Medina Alfaro on 18/10/17.
/*
    Template
    Variables a utilizar en el pseudocódigo
        nro1    primer número
        nro2    segundó número
        suma    suma de dos números

    Inicio
        //Definir variables
        entero : nro1, nro2, suma
    Fin
*/
/*
     1.- Escribir un pseudocódigo que le permita al dueño de un supermercado
    definir de cuánto va a ser el bono de descuento que les va a dar a sus clientes por su compra teniendo en cuenta que el
    bono  va  ser  igual  a  el  7.5%  de  la  compra  siempre  y  cuando  el  valor  de  la  compra  sea  superior  a
    10000, se debe imprimir el valor del bono  y el total a pagar
*/
/*
    Variables a utilizar en el pseudocódigo
        bonoDcto    Bono de descuento
        totalPagar  Total a pagar
        compra      Valor de la compra
    Inicio
        //Definir variables
        real : bonoDcto <- 0, compra, totalPagar

        Escribir("Ingresar el valor de la compra")
        Leer(compra)

        Si(compra >1000) entonces
            bonoDcto <- 0.075*compra
        Fin_si

        totalPagar <- compra- bonoDcto

        Escribir("Bono de Descuento : ",bonoDcto, " totalPagar : ",totalPagar)

    Fin
 */
#include <iostream>

int main() {
    double bonoDcto=0,totalPagar,compra;

    std::cout << "Ingresar el valor de la compra : "; std::cin >> compra;

    if(compra>1000){
        bonoDcto=0.075*compra;
    }
    totalPagar= compra-bonoDcto;

    std::cout << "Bono de Descuento : " << bonoDcto << " Total a Pagar : "<< totalPagar << std::endl;
    return 0;
}

/*
    Resultado
    Ingresar el valor de la compra : 2000
    Bono de Descuento : 150 Total a Pagar : 1850
*/