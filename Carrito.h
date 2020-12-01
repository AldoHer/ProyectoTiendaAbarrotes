//Importo librería para imprimir y clases
#include <iostream>
#include "Producto.h"
#include "Panes.h"

using namespace std;

/*
Clase Carrito que contendrá el método para comprar productos de la tienda..
*/

class Carrito{
    //Variables de instancia
    private:
        Producto precioConcha;
        int acumuladocarro;
    public:
        //Métodos del objeto
        Carrito();//Constructor
        Carrito(Producto);//Constructor
        void setPrecioConcha(Producto);//Setter
        Producto get_precio();//Getter
        void sumaprecio();//Método

};

//Constructor por default
Carrito :: Carrito(){
    Producto precio ("",0);
    precioConcha = precio;
    acumuladocarro = 0;
}

//Constructor que llena las variables de instancia
Carrito :: Carrito(Producto prc){
    precioConcha = prc;
}
//Setter
void Carrito :: setPrecioConcha (Producto precio){
    precioConcha = precio;
}
//Getter
Producto Carrito :: get_precio(){
    return precioConcha;
}
//Función que suma el precio de los productos del carrito
void Carrito::sumaprecio(){
    cout<<"\nTotal: ";
    acumuladocarro = acumuladocarro + precioConcha.get_precio();
    cout<<acumuladocarro<<"\n"<<endl;
}


