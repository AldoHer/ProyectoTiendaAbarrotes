/*
 * Proyecto TiendaAbarrotes
 * Aldo Jesús Hernández Gutiérrez
 * A01703550
 * 04/12/2020
 */

#ifndef REFRESCOS_H
#define REFRESCOS_H
#include <iostream>
#include "Producto.h"
using namespace std;

  /*
  * Clase hija Refrescos, que es la clase específica de los productos de
  * tipo refresco de la tienda de abarrotes.
  *
  */

class Refrescos : public Producto{

/*
    Declara las variables de instancia
    Un entero: contenido
*/

    private:
        //Variable de instancia
        int contenido;

/*
    Métodos:
    Constructor y los diferentes métodos que empleará
*/

    public:

        /**
          * Constructor que llena las variables de instancia
          *
          * @param string n, int PRECIOPRODUCTO, int CANTIDADPRODUCTO, int _contenido
          * @return Objeto Refrescos
          */

        Refrescos(string n,int PRECIOPRODUCTO,int CANTIDADPRODUCTO, int _contenido):Producto(n,PRECIOPRODUCTO,CANTIDADPRODUCTO){
            contenido=_contenido;
        }

        /**
          * Getter del contenido del refresco.
          *
          * @param
          * @return contenido
          */

        int get_contenido(){
            return contenido;
        }
};

#endif
