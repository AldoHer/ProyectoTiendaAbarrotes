/*
 * Proyecto TiendaAbarrotes
 * Aldo Jesús Hernández Gutiérrez
 * A01703550
 * 04/12/2020
 */

#ifndef DULCES_H
#define DULCES_H
#include <iostream>
#include "Producto.h"
using namespace std;

  /*
  * Clase hija Dulces, que es la clase específica de los productos de
  * tipo dulce de la tienda de abarrotes.
  *
  */

class Dulces : public Producto{

/*
    Declara las variables de instancia
    Un entero: azucar
*/

    private:
        //Variable de instancia
        float azucar;

/*
    Métodos:
    Constructor y los diferentes métodos que empleará
*/

    public:

        /**
          * Constructor que llena las variables de instancia
          *
          * @param string n, int PRECIOPRODUCTO, int CANTIDADPRODUCTO, int _azucar
          * @return Objeto Dulces
          */

        Dulces(string n,int PRECIOPRODUCTO,int CANTIDADPRODUCTO, float _azucar):Producto(n,PRECIOPRODUCTO,CANTIDADPRODUCTO){//Constructor
            azucar=_azucar;
        }

        /**
          * Getter de la cantidad de azucar del dulce.
          *
          * @param
          * @return azucar
          */

        float get_azucar(){
            return azucar;
        }
};

#endif
