// Created by Eduardo José Medina Alfaro on 18/10/17.
/*
    2. Escribir un pseudocódigo que elabore  la planilla de  un empleado. Para ello se  dispone  de  sus
    horas laboradas en el mes, así como de la tarifa por hora.
*/

/*
    Variables a utilizar en el pseudocódigo
        horasLabMes    horas laboradas en el mes
        tarifa    tarifa por hora
        planilla   planilla del empleado por mes

    Inicio
        //Definir variables
        entero : horasLabMes
        real : tarifa,planilla

        Escribir("Ingresar horas laboradas del empleado en el mes")
        Leer(horasLabMes)

        Escribir("Ingresar tarifa x hora el empleado")
        Leer(tarifa)

        planilla <- horasLabMes*tarifa

        Escribir("Planilla del empleado ",planilla)

    Fin
 */
#include <iostream>

int main() {
    int horasLabMes;
    double tarifa, planilla;
    std::cout << "Ingresar horas laboradas del empleado en el mes : "; std::cin >> horasLabMes;
    std::cout << "Ingresar tarifa x hora el empleado : "; std::cin >> tarifa;

    planilla= horasLabMes*tarifa;
    std::cout << "Planilla del empleado : " << planilla << std::endl;
    return 0;
}
/*
    Resultado
    Ingresar horas laboradas del empleado en el mes : 10
    Ingresar tarifa x hora el empleado : 10
    Planilla del empleado : 100
*/