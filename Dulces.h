#include <iostream>
#include "Producto.h"
using namespace std;

/*
Clase Dulces que contiene todos los productos de la tienda de tipo Dulce.
*/

class Dulces : public Producto{
    public:
        Dulces(string etiqueta,int precio):Producto(etiqueta, precio){ //Constructor
        }
};
