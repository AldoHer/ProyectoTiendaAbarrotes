/*
 * Proyecto TiendaAbarrotes
 * Aldo Jesús Hernández Gutiérrez
 * A01703550
 * 04/12/2020
 */

#ifndef INVENTARIO_H
#define INVENTARIO_H
#include <iostream>
#include "Producto.h"
using namespace std;

  /*
  * Clase compuesta Inventario, que es la clase que usa atributos de la clase Producto
  * para desplegar la cantidad de unidades de cada tipo que hay.
  *
  */

class Inventario{

/*
    Declara las variables de instancia
    Producto: cantidadProducto
*/

    private:
        //Variable de instancia
        Producto cantidadProducto;

/*
    Métodos:
    Constructor y los diferentes métodos que empleará
*/

    public:
        //Constructor por default
        Inventario();
        //Constructor
        Inventario(Producto);
        //Métodos miembros de la clase
        void setCantidadProducto(Producto);
        Producto get_cantidad();
        void imprimirinventario();
};

/**
  * Constructor por default que inicia los dos enteros y el string en 0 y nada
  *
  * @param
  * @return Objeto Producto : Inventario
  */

Inventario :: Inventario(){
    Producto cantidad("",0,0);
    cantidadProducto = cantidad;
}

/**
  * Constructor que llena las variables de instancia
  *
  * @param Producto cnt
  * @return Objeto Inventario
  */

Inventario :: Inventario (Producto cnt){
    cantidadProducto = cnt;
}

/**
  * Setter de la cantidad de productos.
  *
  * @param Producto: cantidad
  * @return
  */

void Inventario :: setCantidadProducto (Producto cantidad){
    cantidadProducto = cantidad;
}

/**
  * Getter de la cantidad de productos.
  *
  * @param
  * @return cantidad
  */

Producto Inventario :: get_cantidad(){
    return cantidadProducto;
}

/*
    La siguiente función imprime toda la cantidad de productos que
    existen actualmente de todos los tipos de productos junto a su
    etiqueta.
*/

void Inventario :: imprimirinventario(){
    cout << cantidadProducto.get_etiqueta()<<" - Cantidad: "<<cantidadProducto.get_cantidad()<<"u.\n";
}

#endif
