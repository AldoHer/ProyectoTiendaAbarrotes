#include <iostream>
using namespace std;
/*
Clase Panes que contiene todos los productos de la tienda de tipo Pan.
*/
//Declaraci�n de clase Panes de tipo abstracta
class Panes{
    public:
        string imprimeprecioCO();
        string imprimeprecioDO();
        string imprimeprecioCU();
        string imprimeprecioPI();
    private:
        string concha, dona, cuerno, piedra;
};

//Funci�n que imprime un objeto de la clase

string Panes :: imprimeprecioCO(){
    concha = "Concha - $10\n";
    cout << "Panes\n"<<concha;
}

//Funci�n que imprime un objeto de la clase

string Panes :: imprimeprecioDO(){
    dona = "Dona - $15\n";
    cout << dona;
}

//Funci�n que imprime un objeto de la clase

string Panes :: imprimeprecioCU(){
    cuerno = "Cuerno - $10\n";
    cout << cuerno;
}

//Funci�n que imprime un objeto de la clase

string Panes :: imprimeprecioPI(){
    piedra = "Piedra - $10\n";
    cout <<piedra<<"\n";
}


