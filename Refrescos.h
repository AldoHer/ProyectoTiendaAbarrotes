#include <iostream>
#include "Producto.h"
using namespace std;

/*
Clase Refrescos que contiene todos los productos de la tienda de tipo Refresco.
*/

class Refrescos : public Producto{
    public:
        Refrescos(string etiqueta,int precio):Producto(etiqueta, precio){ //Constructor
        }
};
