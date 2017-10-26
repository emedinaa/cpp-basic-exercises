//
// Created by Eduardo José Medina Alfaro on 18/10/17.

/*
    1.- El sindicato de empleados de una empresa desea que se les elabore un pseudocódigo que les pueda imprimir
    cuánto pagan de salud y pensión en base a su sueldo teniendo en cuenta que si usted gana un salario mínimo va
    a pagar por salud un 5% de su sueldo y por pensión un 3.5% si gana dos salarios mínimos por salud un 6% y
    por pensión un 4% de su salud, si gana tres salarios mínimos paga 7% por salud y 4.5 por pensión,
    si gana 4 salarios por salud pagara 8% y por pensión un 5% si gana más de 5 salarios pagara por salud 9% y por pensión un 5%.
*/

/*
    Variables a utilizar en el pseudocódigo
    salarioMin    Salario Mínimo
    sueldo        Sueldo
    ppension      Pension
    psalud        Salud
    nrosal        Número de salario

    Inicio
        //Definir variables
        real : salarioMin, sueldo, psalud <-0, ppension<-0
        entero : nrosal

        Escribir("Salario Mínimo ")
        Leer(salarioMin)

        Escribir("Ingresar nrosal ")
        Leer(nrosal)

        sueldo <- salarioMin*nrosal;

        En caso sea (nrosal) hacer
            1 :
              psalud <- sueldo*0.05
              ppension <- sueldo*0.035

            2:
              psalud <- sueldo*0.06
              ppension <- sueldo*0.04
            3:
              psalud <- sueldo*0.07
              ppension <- sueldo*0.045
            4:
              psalud <- sueldo*0.08
              ppension <- sueldo*0.05
            5:
              psalud <- sueldo*0.09
              ppension <- sueldo*0.05
        Sino
            Escribir (“Número de salarios fuera del rango”)
        Fin_caso

        Escribir("Pago salud : " , psalud , " Pago pensión : " ppension)
    Fin
 */
#include <iostream>

int main() {
    double salarioMin,sueldo,psalud=0, ppension=0;
    int nrosal;

    std::cout << "Salario Mínimo : "; std::cin >> salarioMin;
    std::cout << "Ingresar nrosal : "; std::cin >> nrosal;

    sueldo = salarioMin*nrosal;

    switch (nrosal){
        case 1:
                psalud = sueldo*0.05;
                ppension= sueldo*0.035;
            break;
        case 2:
                psalud = sueldo*0.06;
                ppension= sueldo*0.04;
            break;
        case 3:
                psalud= sueldo*0.07;
                ppension= sueldo*0.045;
            break;
        case 4:
                psalud= sueldo*0.08;
                ppension= sueldo*0.05;
            break;
        case 5:
                psalud= sueldo*0.09;
                ppension= sueldo*0.05;
            break;
        default:
            std::cout << "Número de salarios fuera del rango" << std::endl;
            break;
    }
    std::cout << "Pago salud : " << psalud << " Pago pensión : "<< ppension << std::endl;
    return 0;
}
/*  Resultado
    Salario Mínimo : 200
    Ingresar nrosal : 2
    Pago salud : 24 Pago pensión : 16

    Salario Mínimo : 100
    Ingresar nrosal : 4
    Pago salud : 32 Pago pensión : 20

    Salario Mínimo : 1000
    Ingresar nrosal : 5
    Pago salud : 450 Pago pensión : 250
*/