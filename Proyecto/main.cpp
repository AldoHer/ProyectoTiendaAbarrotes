/*
 * Proyecto TiendaAbarrotes
 * Aldo Jesús Hernández Gutiérrez
 * A01703550
 * 13/11/2020
 */

/**
 * Este es un proyecto demo para la clase de Pensamiento
 * Computacional Orientado a Objetos. Es un programa que consiste
 * en una tienda con diferentes tipos de productos con sus respectivos precios
 * que nos permite guardar en un carrito y calcular el precio total a pagar.
*/

//Bibliotecas
#include <iostream>   //para imprimir.
#include "Panes.h" //Donde están los objetos de mi proyecto
#include "Refrescos.h"
#include "Dulces.h"

using namespace std;

//Procedimiento menu
void menu(){
    //Opciones del sistema
    cout << "Menu: \n";
    cout << "1. Mostrar productos de la tienda. \n";
    cout << "2. Salir. \n";

}

int main (){
    Panes pan1;
    Panes pan2;
    Panes pan3;
    Panes pan4;

    Refrescos refr1;
    Refrescos refr2;
    Refrescos refr3;
    Refrescos refr4;

    Dulces dulc1;
    Dulces dulc2;
    Dulces dulc3;
    Dulces dulc4;

    string precio1;
    string precio2;
    string precio3;
    string precio4;
    string precio5;
    string precio6;
    string precio7;
    string precio8;
    string precio9;
    string precio10;
    string precio11;
    string precio12;

    int opcion = 0;
    //Ciclo para que el sistema siga corriendo mientras no elija la opcion salir.
    while (opcion < 2 && opcion > -1){
        //Impresión de menú
        menu();
        //Leer indice que selecciona la opcion del menu
        cin >> opcion;
        //Switch donde dependiendo la eleccion efectua un diferente procedimiento
        switch(opcion){
            //Caso 1 que imprime los productos de la tienda.
            case 1:
          precio1 = pan1.imprimeprecioCO();
          precio2 = pan2.imprimeprecioDO();
          precio3 = pan3.imprimeprecioCU();
          precio4 = pan4.imprimeprecioPI();
          precio5 = refr1.imprimeprecioCOCA();
          precio6 = refr2.imprimeprecioPEPSI();
          precio7 = refr3.imprimeprecioMIRINDA();
          precio8 = refr4.imprimeprecioFANTA();
          precio9 = dulc1.imprimeprecioBOCA();
          precio10 = dulc2.imprimeprecioNUSI();
          precio11 = dulc3.imprimeprecioPECO();
          precio12 = dulc4.imprimeprecioSUGUS();
                break;
    }

  }
    return 0;
}
