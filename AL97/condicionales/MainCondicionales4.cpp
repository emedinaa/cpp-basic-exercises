// Created by Eduardo José Medina Alfaro on 18/10/17.
/*
    4.- Elabore un pseudocódigo que imprima una factura de cobro para los clientes de un restaurante,
    teniendo en cuenta que por compras iguales o mayores a 100000 se le otorgara un descuento del 10%,
    por compras iguales o superiores a 50000 será un descuento del 5%, por compras iguale o superiores a
    25000 un descuento del 2.5% y por compras inferiores no habrá descuento, la factura debe llevar el
    valor del bono de descuento el tota a pagar y un agradecimiento al comprador el cual debe ingresar su nombre
*/

/*
    Variables a utilizar en el pseudocódigo
        compra    Compra del cliente
        descuento Descuento de la compra
        total     Total a pagar
        mensaje   Mensaje para el cliente
        cliente   Nombre del cliente

    Inicio
        //Definir variables
        real  : compra, descuento, total
        cadena : mensaje, cliente

        Escribir("Ingresar nombre del cliente")
        Leer(cliente)

        Escribir("Ingresar la compra del cliente")
        Leer(compra)

        Si(compra >= 100000) entonces
            descuento <- 0.10*compra
        Sino
            Si(compra >= 50000) entonces
                descuento <- 0.5*compra
            Sino
                Si(compra >= 25000) entonces
                    descuento <- 0.25*compra
                Sino
                    descuento <- 0
                Fin_si
            Fin_si
        Fin_si

        total= compra-descuento

        Escribir("Gracias por la compra ", cliente, " bono de descuento  ",descuento, " total : "+total)

    Fin
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    double compra, descuento, total;
    string mensaje, cliente;

    std::cout << "Ingresar nombre del cliente : "; std::cin >> cliente;
    std::cout << "Ingresar la compra del cliente : "; std::cin >> compra;

    if(compra>100000){
        descuento= 0.10*compra;
    }else if(compra>= 50000){
        descuento= 0.5*compra;
    }else if(compra >= 25000){
        descuento = 0.25*compra;
    }else{
        descuento=0;
    }
    total= compra-descuento;
    std::cout << cliente <<  ", gracias por la compra ! " <<  "bono de descuento " << descuento << " total " << total << std::endl;

    return 0;
}

/*
 *  Resultado
    Ingresar nombre del cliente : edu
    Ingresar la compra del cliente : 25000
    edu, gracias por la compra ! bono de descuento 6250 total 18750
 */