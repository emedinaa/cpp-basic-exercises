//
// Created by Eduardo José Medina Alfaro on 18/10/17.

/*
    5.-  Crear el pseudocódigo que pida al usuario un número de día y un número de mes, evalúe si la
 entrada es correcta y en caso de que así sea calcule el día del año que es, considerando un año no
 bisiesto.
*/

/*
    Variables a utilizar en el pseudocódigo
    day     Dia
    month   Mes
    days    Dia del año
    error   Error
    msg     Mensaje

    Inicio
        //Definir variables
        bolean error <- false
        cadena  msg <- "Aviso \n"
        entero  days <-0
        entero  day
        entero  month

        Escribir("número de día  : ")
        Leer(day)

        Escribir("número de mes : ")
        Leer(month)

        Si (day <=0 or day >=31) entonces
           msg <- msg + " valor de día inválido\n"
           error <- true;
        Fin_si

        Si (month<=0 or  month>12) entonces
           msg <- msg + " valor de mes inválido\n"
           error <- true;
        Fin_si

        Si (error) entonces
            Escribir("Mensaje : ",msg)
        Fin_si

        En caso sea (valor) hacer
           case 1:
                days <- day
           case 2:
                days<- day+ 31

            case 3:
                days<- day+ 59

            case 4:
                days<- day+ 90

            case 5:
                days<- day+120

            case 6:
                days<- day+151

            case 7:
                days <- day+181

            case 8:
                days <- day+212

            case 9:
                days <- day+243

            case 10:
                days <- day+273

            case 11:
                days <- day+304

            case 12:
                days <- day+334

        Sino
            Escribir(" Mes fuera de rango ")
        Fin_caso

        Escribir("Dia del año : " , days)
    Fin
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    int day, month, days=0;
    bool error= false;
    string  msg="Aviso \n";

    std::cout << "número de día : "; std::cin >> day;
    std::cout << "número de mes : "; std::cin >> month;

    if(day<=0 || day>31){
        msg.append("valor de día inválido\n");
        error=true;
    }
    if(month<=0 || month>12){
        msg.append( " valor de mes inválido\n");
        error=true;
    }

    if(error){
        std::cout << msg << std::endl;
    }

    switch (month){
        case 1:
            days= day;
            break;
        case 2:
            days= day+ 31;
            break;
        case 3:
            days= day+ 59;//31 + 28
            break;
        case 4:
            days= day+ 90; // 31 + 28 + 31
            break;
        case 5:
            days= day+120; //31 + 28 + 31+ 30
            break;
        case 6:
            days= day+151; //31 + 28 + 31+ 30+31
            break;
        case 7:
            days = day+181; //31 + 28 + 31+ 30+31+ 30
            break;
        case 8:
            days = day+212; //31 + 28 + 31+ 30+31+ 30+ 31
            break;
        case 9:
            days = day+243;//31 + 28 + 31+ 30+31+ 30+ 31+30
            break;
        case 10:
            days = day+273;//31 + 28 + 31+ 30+31+ 30+ 31+30+31
            break;
        case 11:
            days = day+304;//31 + 28 + 31+ 30+31+ 30+ 31+30+31+30
            break;
        case 12:
            days = day+334;//31 + 28 + 31+ 30+31+ 30+ 31+30+31+30+31
            break;
    }
    std::cout << "Dia del año : " << days << std::endl;
    return 0;
}

/*  Resultado
    número de día : 1
    número de mes : 1
    Dia del año : 1

    número de día : 30
    número de mes : 1
    Dia del año : 30

    número de día : 15
    número de mes : 1
    Dia del año : 15

    número de día : 1
    número de mes : 2
    Dia del año : 32
*/