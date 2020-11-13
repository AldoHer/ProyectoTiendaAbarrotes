
#include <iostream>
using namespace std;
/*
Clase dulces que contiene todos los productos de la tienda de tipo Dulce.
*/
//Declaración de clase Dulces de tipo abstracta
class Dulces{
    public:
        //Métodos del objeto
        string imprimeprecioBOCA();
        string imprimeprecioNUSI();
        string imprimeprecioPECO();
        string imprimeprecioSUGUS();
    private:
        //Variables de instancia
        string bocadin, nusita, pecositas, sugus;
};

//Función que imprime un objeto de la clase

string Dulces :: imprimeprecioBOCA(){
    bocadin = "Bocadin - $5\n";
    cout << "Dulces\n"<<bocadin;
}

//Función que imprime un objeto de la clase

string Dulces :: imprimeprecioNUSI(){
    nusita = "Nusita - $8\n";
    cout << nusita;
}

//Función que imprime un objeto de la clase

string Dulces :: imprimeprecioPECO(){
    pecositas = "Pecositas - $7\n";
    cout << pecositas;
}

//Función que imprime un objeto de la clase

string Dulces :: imprimeprecioSUGUS(){
    sugus = "Sugus - $2\n";
    cout <<sugus<<"\n";
}



