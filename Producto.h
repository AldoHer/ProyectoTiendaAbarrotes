
#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
using namespace std;

class Producto{
    protected:
        //Variables de instancia
        string etiqueta;
        int precio;
    public:
        //Métodos del objeto
        Producto();
        Producto(string etiqueta,int precio); //Constructor
        int get_precio(); //Getter
        string get_etiqueta();//Getter
        void setPrecio(int PRECIOPRODUCTO);//Setter
        void setEtiqueta(string ETIQUETAPRODUCTO);//Setter
        void print();
};

//Constructor por default
Producto :: Producto(){
    etiqueta="";
    precio=0;
}

//Constructor que llena las variables de instancia
Producto :: Producto(string n,int PRECIOPRODUCTO){
    etiqueta = n;
    precio = PRECIOPRODUCTO;
}

//Getter del precio del pan
int Producto :: get_precio(){
    return precio;
}

//Getter de la etiqueta del pan
string Producto::get_etiqueta(){
    return etiqueta;
}
//Setter
void Producto::setPrecio(int PRECIOPRODUCTO){
    precio = PRECIOPRODUCTO;
}
//Setter
void Producto::setEtiqueta(string ETIQUETAPRODUCTO){
    etiqueta = ETIQUETAPRODUCTO;
}
//Función para imprimir el precio
void Producto::print(){
    cout<<precio<<"\n"<<endl;
}
#endif

