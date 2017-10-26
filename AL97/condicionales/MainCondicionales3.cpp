// Created by Eduardo José Medina Alfaro on 18/10/17.
/*
  3.- Elaborar un pseudocódigo en el que una persona /x/ ingrese su edad y
  este le responda si es mayor de edad o si no lo es, si es mayor de edad
  que le diga hace cuantos años y si es menor que le diga cuantos años le faltan
*/

/*
    Variables a utilizar en el pseudocódigo
        edadPersona   Edad de la persona
        mensaje       Mensaje para la persona

    Inicio
        //Definir variables
        entero  : edadPersona,anios
        cadena : mensaje

        Escribir("Ingresar la edad de la persona")
        Leer(edadPersona)

        Si(edadPersona < 18) entonces
            anios <- 18-edadPersona
            mensaje <- "No es mayor de edad "
        Sino
            anios <- edadPersona -18
            mensaje <- "Mayor de edad desde "
        Fin_si

        Escribir("Mensaje ", mensaje, "años ",anios)

    Fin
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    int edadPersona, anios;
    string mensaje;

    std::cout << "Ingresar la edad de la persona : "; std::cin >> edadPersona;

    if(edadPersona<18){
        anios= 18-edadPersona;
        mensaje= "No es mayor de edad : ";
    }else{
        anios= edadPersona-18;
        mensaje= "Mayor de edad desde : ";
    }
    std::cout << "Mensaje : " << mensaje << "años : "<< anios << std::endl;

    return 0;
}

/* Resultado
    Ingresar la edad de la persona : 23
    Mensaje : Mayor de edad desde : años : 5
 */