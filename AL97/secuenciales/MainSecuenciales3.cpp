// Created by Eduardo José Medina Alfaro on 18/10/17.
/*
    3. Elaborar  un  pseudocódigo  que  permita  calcular  el  número  de  CDs  necesarios  para  hacer  una
    copia  de  seguridad,  de  la  información  almacenada  en  un  disco  cuya  capacidad  se  conoce.
    Considerar  que  el  disco  duro  está  lleno  de  información,  además
    expresado  en  Gigabyte.  Un  CD
    virgen tiene 700 Megabytes de capacidad y un Gigabyte es igual a 1,024 megabyte

 */

/*
    Variables a utilizar en el pseudocódigo
        capacidad    capacidad del disco duro en gigabyte
        nroCDs   número de CDs necesarios para el backup

    Inicio
        //Definir variables
        entero : nroCDs
        real : capacidad

        Escribir("Ingresar la capacidad del disco duro en gigabyte")
        Leer(capacidad)

        nroCDs <- (capacidad*1024)/700

        Escribir("Número de CDs ",nroCDs)

    Fin
 */
#include <iostream>
#include <cmath>

int main() {
    int nroCDs;
    double capacidad;
    std::cout << "Ingresar la capacidad del disco duro en gigabyte : "; std::cin >> capacidad;

    nroCDs= round((capacidad*1024.00)/700.00);
    std::cout << "Número de CDs : " << nroCDs << std::endl;
    return 0;
}
/*
    Resultado
    Ingresar la capacidad del disco duro en gigabyte : 4
    Número de CDs : 6
*/