/*
 * Proyecto TiendaAbarrotes
 * Aldo Jesús Hernández Gutiérrez
 * A01703550
 * 04/12/2020
 */

#ifndef CERVEZAS_H
#define CERVEZAS_H
#include <iostream>
#include "Producto.h"
using namespace std;

  /*
  * Clase hija Cervezas, que es la clase específica de los productos de
  * tipo cerveza de la tienda de abarrotes.
  *
  */

class Cervezas : public Producto{

/*
    Declara las variables de instancia
    Un entero: pctAlcohol
*/

    private:
        //Variable de instancia
        float pctAlcohol;

/*
    Métodos:
    Constructor y los diferentes métodos que empleará
*/

    public:

        /**
          * Constructor que llena las variables de instancia
          *
          * @param string n, int PRECIOPRODUCTO, int CANTIDADPRODUCTO, int _pctalcohol
          * @return Objeto Cervezas
          */

        Cervezas(string n,int PRECIOPRODUCTO,int CANTIDADPRODUCTO, float _pctalcohol):Producto(n,PRECIOPRODUCTO,CANTIDADPRODUCTO){//Constructor
            pctAlcohol=_pctalcohol;
        }

        /**
          * Getter del porcentaje de alcohol de la cerveza.
          *
          * @param
          * @return pctAlcohol
          */

        float get_pctAlcohol(){
            return pctAlcohol;
        }
};

#endif
