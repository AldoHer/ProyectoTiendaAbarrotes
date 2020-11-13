#include <iostream>
using namespace std;
/*
Clase Panes que contiene todos los productos de la tienda de tipo Pan.
*/
//Declaración de clase Panes de tipo abstracta
class Panes{
    public:
        string imprimeprecioCO();
        string imprimeprecioDO();
        string imprimeprecioCU();
        string imprimeprecioPI();
    private:
        string concha, dona, cuerno, piedra;
};

//Función que imprime un objeto de la clase

string Panes :: imprimeprecioCO(){
    concha = "Concha - $10\n";
    cout << "Panes\n"<<concha;
}

//Función que imprime un objeto de la clase

string Panes :: imprimeprecioDO(){
    dona = "Dona - $15\n";
    cout << dona;
}

//Función que imprime un objeto de la clase

string Panes :: imprimeprecioCU(){
    cuerno = "Cuerno - $10\n";
    cout << cuerno;
}

//Función que imprime un objeto de la clase

string Panes :: imprimeprecioPI(){
    piedra = "Piedra - $10\n";
    cout <<piedra<<"\n";
}


