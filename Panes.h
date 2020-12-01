#ifndef PANES_H
#define PANES_H
#include <iostream>
#include "Producto.h"
using namespace std;

/*
Clase Panes que contiene todos los productos de la tienda de tipo Pan.
*/

class Panes : public Producto{
    public:
        Panes(string etiqueta,int precio):Producto(etiqueta, precio){ //Constructor
        }
};
#endif
