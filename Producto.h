/*
 * Proyecto TiendaAbarrotes
 * Aldo Jesús Hernández Gutiérrez
 * A01703550
 * 04/12/2020
 */

#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
using namespace std;

 /*
  * Clase Producto, que es la clase padre de todos los productos de
  * la tienda de abarrotes divididos en Refrescos, Cervezas y Dulces.
  *
  */

class Producto{

/*
    Declara las variables de instancia
    Dos enteros: precio, cantidad
    Un string: etiqueta
*/

    private:
        //Variables de instancia
        int precio;
        int cantidad;
        string etiqueta;

/*
    Métodos:
    Constructor por default y los diferentes métodos que empleará
*/

    public:
        //Constructor por default
        Producto();
        //Constructor
        Producto(string n,int PRECIOPRODUCTO,int CANTIDADPRODUCTO);
        //Métodos miembros de la clase
        int get_precio();
        int get_cantidad();
        string get_etiqueta();
        void setPrecio(int PRECIOPRODUCTO);
        void setEtiqueta(string ETIQUETAPRODUCTO);
        void setCantidad(int CANTIDADPRODUCTO);
};

/**
  * Constructor por default que inicia los dos enteros y el string en 0 y nada
  *
  * @param
  * @return Objeto Producto
  */

Producto :: Producto(){
    etiqueta="";
    precio=0;
    cantidad=0;
}

/**
  * Constructor que llena las variables de instancia
  *
  * @param string n, int PRECIOPRODUCTO, int CANTIDADPRODUCTO
  * @return Objeto Producto
  */

Producto :: Producto(string n,int PRECIOPRODUCTO, int CANTIDADPRODUCTO){
    etiqueta = n;
    precio = PRECIOPRODUCTO;
    cantidad = CANTIDADPRODUCTO;
}

/**
  * Getter del precio del producto.
  *
  * @param
  * @return precio
  */

int Producto :: get_precio(){
    return precio;
}

/**
  * Getter de la etiqueta del producto.
  *
  * @param
  * @return etiqueta
  */

string Producto::get_etiqueta(){
    return etiqueta;
}

/**
  * Getter de la cantidad de producto.
  *
  * @param
  * @return cantidad
  */

int Producto::get_cantidad(){
    return cantidad;
}

/**
  * Setter del precio del producto.
  *
  * @param int: PRECIOPRODUCTO
  * @return
  */

void Producto::setPrecio(int PRECIOPRODUCTO){
    precio = PRECIOPRODUCTO;
}

/**
  * Setter de la etiqueta del producto.
  *
  * @param string: ETIQUETAPRODUCTO
  * @return
  */

void Producto::setEtiqueta(string ETIQUETAPRODUCTO){
    etiqueta = ETIQUETAPRODUCTO;
}

/**
  * Setter de la cantidad del producto.
  *
  * @param int: CANTIDADPRODUCTO
  * @return
  */

void Producto::setCantidad(int CANTIDADPRODUCTO){
    cantidad = CANTIDADPRODUCTO;
}

#endif

