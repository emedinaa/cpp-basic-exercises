// Created by Eduardo José Medina Alfaro on 18/10/17.
/*
     2.- Escribir un pseudocódigo que permita determinar si un carro de altura /y/
     puede pasar por debajo de un puente de altura /x/ si puede se debe imprimir un
     aviso que diga adelante y si no puede se debe imprimir un aviso que diga debe tomar otro camino
*/

/*
    Variables a utilizar en el pseudocódigo
        alturaCarro    Altura de un carro
        alturaPuente  Altura de un puente
        mensaje       Mensaje de aviso

    Inicio
        //Definir variables
        real  : alturaCarro, alturaPuente
        cadena : mensaje

        Escribir("Ingresar la altura del puente")
        Leer(alturaPuente)

        Escribir("Ingresar la altura del carro")
        Leer(alturaCarro)

        Si(alturaCarro < alturaPuente) entonces
            mensaje <- "Aviso, adelante !"
        Sino
            mensaje <- "Aviso , debe tomar otro camino"
        Fin_si

        Escribir("Mensaje ", mensaje)

    Fin
 */

#include <iostream>
#include <string>
using namespace std;

int main() {

    double alturaCarro,alturaPuente;
    string mensaje;

    std::cout << "Ingresar la altura del puente : "; std::cin >> alturaPuente;
    std::cout << "Ingresar la altura del carro : "; std::cin >> alturaCarro;

    if(alturaCarro<alturaPuente){
        mensaje= "Aviso, adelante !";
    }else{
        mensaje= "Aviso , debe tomar otro camino";
    }

    std::cout << "Mensaje : " << mensaje << std::endl;
    return 0;
}

/*  Resultado
    Ingresar la altura del puente : 10
    Ingresar la altura del carro : 5
    Mensaje : Aviso, adelante !

    Ingresar la altura del puente : 5
    Ingresar la altura del carro : 6
    Mensaje : Aviso , debe tomar otro camino
 */