//
// Created by Eduardo José Medina Alfaro on 18/10/17.

/*
    2.- Un restaurante automatizado desea imprimir la orden y el valor de la factura de un cliente dependiendo del tipo de plato
    que coma y si es desayuno almuerzo o comida.

    Desayuno Corriente=3500; ejecutivo=4500; Especial=6000;
    Almuerzo Corriente=4000; ejecutivo=5000; Especial=7000;
    Comida Corriente=3000; ejecutivo=4500; Especial=5500;
*/

/*
    Variables a utilizar en el pseudocódigo
    valFactura   Valor de factura
    comida       Comida
    tipo         Tipo de comida
    orden        Orden

    Inicio
        //Definir variables
        real : valFactura
        entero : comida,tipo
        cadena : orden

        Escribir("Tipo de plato , Corriente 1, Ejecutivo 2 , Especial 3 :")
        Leer(tipo)

        Escribir("Comida , Desayuno 1 , Almuerzo 2 , Comida 3 :  ")
        Leer(comida)

        sueldo <- salarioMin*nrosal

        En caso sea (comida) hacer
            1 :
              orden <- "Desayuno "
                En caso sea (tipo) hacer
                    1 :
                        valFactura<-3500
                        orden<- orden + "Corriente"
                    2 :
                        valFactura<-4500
                        orden<- orden + "Ejecutivo"
                    3 :
                        valFactura<-6000
                        orden<- orden + "Especial"
                  Sino
                        Escribir (“Tipo de comida fuera del rango”)
                  Fin_caso
            2:
                En caso sea (tipo) hacer
                    1 :
                        valFactura<-4000
                        orden<- orden + "Corriente"
                    2 :
                        valFactura<-5000
                        orden<- orden + "Ejecutivo"
                    3 :
                        valFactura<-7000
                        orden<- orden + "Especial"
                  Sino
                        Escribir (“Tipo de comida fuera del rango”)
                  Fin_caso
            3:
                En caso sea (tipo) hacer
                    1 :
                        valFactura<-3000
                        orden<- orden + "Corriente"
                    2 :
                        valFactura<-4500
                        orden<- orden + "Ejecutivo"
                    3 :
                        valFactura<-5500
                        orden<- orden + "Especial"
                  Sino
                        Escribir (“Tipo de comida fuera del rango”)
                  Fin_caso
        Sino
            Escribir (“Tipo de comida fuera del rango”)
        Fin_caso

        Escribir( "Orden : " , orden , " factura : ",valFactura )
    Fin
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    double valFactura;
    int comida,tipo;
    string  orden;

    std::cout << "Tipo de plato , Corriente 1, Ejecutivo 2 , Especial 3 : "; std::cin >> tipo;
    std::cout << "Comida , Desayuno 1 , Almuerzo 2 , Comida 3 : "; std::cin >> comida;

    switch (comida){
        case 1: // Desayuno
            orden= "Desayuno ";
                switch(tipo){
                    case 1: //corriente
                        valFactura=3500;
                        orden+= "Corriente";
                        break;
                    case 2: //ejecutivo
                        valFactura=4500;
                        orden+= "Ejecutivo";
                        break;
                    case 3: //especial
                        valFactura=6000;
                        orden+= "Especial";
                        break;
                }
            break;
        case 2: // Almuerzo
            orden= "Almuerzo ";
            switch(tipo){
                case 1: //corriente
                    valFactura=4000;
                    orden+= "Corriente";
                    break;
                case 2: //ejecutivo
                    valFactura=5000;
                    orden+= "Ejecutivo";
                    break;
                case 3: //especial
                    valFactura=7000;
                    orden+= "Especial";
                    break;
            }
            break;
        case 3: // Comida
            orden= "Comida ";
            switch(tipo){
                case 1: //corriente
                    valFactura=3000;
                    orden+= "Corriente";
                    break;
                case 2: //ejecutivo
                    valFactura=4500;
                    orden+= "Ejecutivo";
                    break;
                case 3: //especial
                    valFactura=5500;
                    orden+= "Especial";
                    break;
            }
            break;
    }
    std::cout << "Orden : " << orden << " factura : "<< valFactura << std::endl;
    return 0;
}

/* Resultado

    Tipo de plato , Corriente 1, Ejecutivo 2 , Especial 2 : 3
    Comida , Desayuno 1 , Almuerzo 2 , Comida 3 3
    Orden : Comida Especial factura : 5500

    Tipo de plato , Corriente 1, Ejecutivo 2 , Especial 3 : 2
    Comida , Desayuno 1 , Almuerzo 2 , Comida 3 2
    Orden : Almuerzo Ejecutivo factura : 5000
*/