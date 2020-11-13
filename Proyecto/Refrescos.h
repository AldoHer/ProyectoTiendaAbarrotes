#include <iostream>
using namespace std;
/*
Clase Refrescos que contiene todos los productos de la tienda de tipo Refresco.
*/
//Declaraci�n de clase Refrescos de tipo abstracta
class Refrescos{
    public:
        string imprimeprecioCOCA();
        string imprimeprecioPEPSI();
        string imprimeprecioMIRINDA();
        string imprimeprecioFANTA();
    private:
        string coca, pepsi, mirinda, fanta;
};

//Funci�n que imprime un objeto de la clase

string Refrescos :: imprimeprecioCOCA(){
    coca = "Coca 600ml - $14\n";
    cout << "Refrescos\n"<<coca;
}

//Funci�n que imprime un objeto de la clase

string Refrescos :: imprimeprecioPEPSI(){
    pepsi = "Pepsi 600ml - $12\n";
    cout << pepsi;
}

//Funci�n que imprime un objeto de la clase

string Refrescos :: imprimeprecioMIRINDA(){
    mirinda = "Mirinda 600ml - $12\n";
    cout << mirinda;
}

//Funci�n que imprime un objeto de la clase

string Refrescos :: imprimeprecioFANTA(){
    fanta = "Fanta 600ml - $14\n";
    cout <<fanta<<"\n";
}



