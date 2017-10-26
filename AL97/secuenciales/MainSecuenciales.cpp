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
    1. Elaborar  un  pseudocódigo  que  solicite  el  número  de  respuestas  correctas,  incorrectas  y  en
    blanco,  correspondientes  a  postulantes,  y  muestre  su  puntaje  final  considerando,  que
    por  cada respuesta  correcta  tendrá  4  puntos,  respuestas  incorrectas  tendrá -1  y  respuestas  en  blanco
    tendrá 0.
*/
/*
    Variables a utilizar en el pseudocódigo
        nroRC    número de respuestas correctas
        nroRI    número de respuestas incorrectas
        nroRB    número de respuestas en blanco
        puntFI   puntaje final

    Inicio
        //Definir variables
        entero : nroRC, nroRI, nroRB
        Escribir("Ingresar Número de Respuestas Correctas")
        Leer(nroRC)

        Escribir("Ingresar Número de Respuestas Incorrectas")
        Leer(nroRI)

        Escribir("Ingresar Número de Respuestas en blanco")
        Leer(nroRB)

        puntFI <- nroRC*4 + nroRI*(-1) + nroRB*0

        Escribir("Puntaje Final ",puntFI)

    Fin
 */
#include <iostream>

const int PUNTRC=4;
const int PUNTRI=-1;
const int PUNTRB=0;

int main() {
    int nroRC, nroRI, nroRB, puntFI;
    std::cout << "Ingresar Número de Respuestas Correctas: "; std::cin >> nroRC;
    std::cout << "Ingresar Número de Respuestas Incorrectas: "; std::cin >> nroRI;
    std::cout << "Ingresar Número de Respuestas en blanco: "; std::cin >> nroRB;

    puntFI= nroRC*PUNTRC+ nroRI*PUNTRI+nroRB*PUNTRB;
    std::cout << "Puntaje Final : " << puntFI << std::endl;
    return 0;
}
/*
    Resultado

    Ingresar Número de Respuestas Correctas: 4
    Ingresar Número de Respuestas Incorrectas: 4
    Ingresar Número de Respuestas en blanco: 4
    Puntaje Final : 12
*/