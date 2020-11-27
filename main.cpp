/*
 * Proyecto TiendaAbarrotes
 * Aldo Jesús Hernández Gutiérrez
 * A01703550
 * 13/11/2020
 */

/**
 * Este es un proyecto demo para la clase de Pensamiento
 * Computacional Orientado a Objetos. Es un programa que consiste
 * en una tienda con diferentes tipos de productos con sus respectivos precios
 * que nos permite guardar en un carrito y calcular el precio total a pagar.
*/

//Bibliotecas
#include <iostream>//para imprimir.
#include<ctime>
#include "Panes.h"
#include "Refrescos.h"
#include "Dulces.h"
#include "Carrito.h"

using namespace std;

//Procedimiento menu
void carrito(){
    //Opciones del sistema
    cout << " o o o Carrito o o o \n";
    cout << "\nIntroduce el producto que quieras comprar\n";
    cout << "1. Concha \n";
    cout << "2. Dona \n";
    cout << "3. Cuerno \n";
    cout << "4. Piedra \n";
    cout << "5. Coca \n";
    cout << "6. Pepsi \n";
    cout << "7. Mirinda \n";
    cout << "8. Fanta \n";
    cout << "9. Bocadin \n";
    cout << "10. Nusita \n";
    cout << "11. Pecositas \n";
    cout << "12. Sugus \n";
    cout << "13. Borrar todos el carrito \n";
    cout << "14. Salir. \n";
}

int main (){

    //Declaración de variables
    char nombre[1000];
    char direccion[1000];

    Panes pan1("Concha - $10\n",10);
    Panes pan2("Dona - $15\n",15);
    Panes pan3("Cuerno - $10\n",10);
    Panes pan4("Piedra - $10\n",10);

    Carrito precioConcha(pan1);
    Carrito precioDona(pan2);
    Carrito precioCuerno(pan3);
    Carrito precioPiedra(pan4);

    Refrescos refr1("Coca 600ml - $14\n",14);
    Refrescos refr2("Pepsi 600ml - $12\n",12);
    Refrescos refr3("Mirinda 600ml - $12\n",12);
    Refrescos refr4("Fanta 600ml - $14\n",14);

    Carrito precioCoca(refr1);
    Carrito precioPepsi(refr2);
    Carrito precioMirinda(refr3);
    Carrito precioFanta(refr4);

    Dulces dulc1("Bocadin - $5\n",5);
    Dulces dulc2("Nusita - $8\n",8);
    Dulces dulc3("Pecositas - $7\n",7);
    Dulces dulc4("Sugus - $2\n",2);

    Carrito precioBocadin(dulc1);
    Carrito precioNusita(dulc2);
    Carrito precioPecositas(dulc3);
    Carrito precioSugus(dulc4);

    //Impresión del inicio del programa

    cout << " - - - Pollito Feliz - - -\n"<<endl;
    cout << "Ingresa tu nombre completo: ";
    cin.getline(nombre,1000);
    cout << "Ingresa tu direccion: ";
    cin.getline(direccion,1000);
    cout << "\nBienvenido, "<<nombre<<"\n"<<endl;

    //Impresión de los productos de la tienda

    cout<<" o o o Productos o o o \n"<<endl;

    cout<<" - - - Panes - - - \n"<<endl;
    cout<<pan1.get_etiqueta();
    cout<<pan2.get_etiqueta();
    cout<<pan3.get_etiqueta();
    cout<<pan4.get_etiqueta()<<endl;

    cout<<" - - - Refrescos - - - \n"<<endl;
    cout<<refr1.get_etiqueta();
    cout<<refr2.get_etiqueta();
    cout<<refr3.get_etiqueta();
    cout<<refr4.get_etiqueta()<<endl;

    cout<<" - - - Dulces - - - \n"<<endl;
    cout<<dulc1.get_etiqueta();
    cout<<dulc2.get_etiqueta();
    cout<<dulc3.get_etiqueta();
    cout<<dulc4.get_etiqueta()<<endl;

int desplegar = 0;{

cout << "1. Desplegar carrito.\n";
cout << "2. Salir.\n";
cin >> desplegar;

if (desplegar == 1){

        int opcion = 0;{
        //Ciclo para que el sistema siga corriendo mientras no elija la opcion salir.
        while (opcion < 14 && opcion > -1){
            //Impresión del carrito
            carrito();
            //Leer indice que selecciona la opcion del carrito
            cin >> opcion;
            //Switch donde dependiendo la eleccion efectua un diferente procedimiento
            switch(opcion){
                //Caso 1 que suma el precio del producto elegido.
                case 1:
                    precioConcha.sumaprecio();
                    break;
                //Caso 2 que suma el precio del producto elegido.
                case 2:
                    precioDona.sumaprecio();
                    break;
                //Caso 3 que suma el precio del producto elegido.
                case 3:
                    precioCuerno.sumaprecio();
                    break;
                //Caso 4 que suma el precio del producto elegido.
                case 4:
                    precioPiedra.sumaprecio();
                    break;
                //Caso 5 que suma el precio del producto elegido.
                case 5:
                    precioCoca.sumaprecio();
                    break;
                //Caso 6 que suma el precio del producto elegido.
                case 6:
                    precioPepsi.sumaprecio();
                    break;
                //Caso 7 que suma el precio del producto elegido.
                case 7:
                    precioMirinda.sumaprecio();
                    break;
                //Caso 8 que suma el precio del producto elegido.
                case 8:
                    precioFanta.sumaprecio();
                    break;
                //Caso 9 que suma el precio del producto elegido.
                case 9:
                    precioBocadin.sumaprecio();
                    break;
                //Caso 10 que suma el precio del producto elegido.
                case 10:
                    precioNusita.sumaprecio();
                    break;
                //Caso 11 que suma el precio del producto elegido.
                case 11:
                    precioPecositas.sumaprecio();
                    break;
                //Caso 12 que suma el precio del producto elegido.
                case 12:
                    precioSugus.sumaprecio();
                    break;
                //Caso 13 que reinicia el valor del carrito en 0.
                case 13:
                    break;
    }
}
}
}else{
    exit(-1);
}

}
}






