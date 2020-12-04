/*
 * Proyecto TiendaAbarrotes
 * Aldo Jesús Hernández Gutiérrez
 * A01703550
 * 04/12/2020
 */

/**
 * Este es un proyecto para la clase de Pensamiento
 * Computacional Orientado a Objetos. Es un programa que consiste
 * en una tienda, donde puedes visualizar la información nutrimental de los productos
 * con sus respectivos precios y que incluye funciones que nos permiten guardar en
 * un carrito la cantidad total a pagar.
*/

//Bibliotecas
#include <iostream>//para imprimir.
#include<ctime>
#include "Producto.h" //Clase padre
#include "Inventario.h" //Clase que recibe los objetos de mi proyecto y los imprime
#include "Cervezas.h"//Clase hija de Producto que tiene los objetos de mi proyecto
#include "Refrescos.h"//Clase hija de Producto que tiene los objetos de mi proyecto
#include "Dulces.h"//Clase hija de Producto que tiene los objetos de mi proyecto

using namespace std;

//Definición de variables que se usan en todo el main
char nombre[1000];
char edad[1000];
char correo[1000];
char direccion[1000];

//Impresión del inicio del programa
void inicio(){
    //Imprime el inicio del programa además de pedir tu nombre, correo, direccion y edad.
    cout << " - - - - - - - - AbarroTienda - - - - - - - - \n"<<endl;
    cout << "Ingresa tu nombre completo: ";
    //Leer índice que guarda tu nombre
    cin.getline(nombre,1000);
    cout << "Ingresa tu direccion: ";
    //Leer índice que guarda tu dirección
    cin.getline(direccion,1000);
    cout << "Ingresa tu edad: ";
    //Leer índice que guarda tu edad
    cin.getline(edad,1000);
    cout << "Ingresa tu correo electronico: ";
    //Leer índice que guarda tu correo electrónico
    cin.getline(correo,1000);
    cout <<"\n - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n";
    //Impresión de todos los datos antes solicitado
    cout << "\nRegistro exitoso.\nBienvenido, "<<nombre<<"\n";
    cout <<"Direccion: "<<direccion<<"\n";
    cout <<"Edad: "<<edad<<" anos\n";
    cout <<"Correo: "<<correo<<"\n"<<endl;
}

//Función principal de todo el programa
int main (){

    //Declaración de variables
    int total(0);
    int acum(0);

    Cervezas cerv1("Stella - $16",16,25,5);
    Inventario inv1(cerv1);
    Cervezas cerv2("Dos equis - $13",13,17,4.7);
    Inventario inv2(cerv2);
    Cervezas cerv3("Heineken - $17",17,15,5);
    Inventario inv3(cerv3);
    Cervezas cerv4("Hoegaarden - $23",23,25,5.7);
    Inventario inv4(cerv4);

    Refrescos refr1("Coca - $14",14,14,600);
    Inventario inv5(refr1);
    Refrescos refr2("Pepsi - $12",12,10,2.5);
    Inventario inv6(refr2);
    Refrescos refr3("Mirinda - $12",12,23,500);
    Inventario inv7(refr3);
    Refrescos refr4("Fanta - $14",14,18,1.5);
    Inventario inv8(refr4);

    Dulces dulc1("Bocadin - $5",5,32,15);
    Inventario inv9(dulc1);
    Dulces dulc2("Nucita - $8",8,37,10.5);
    Inventario inv10(dulc2);
    Dulces dulc3("Pecositas - $7",7,28,20);
    Inventario inv11(dulc3);
    Dulces dulc4("Sugus - $2",2,25,8.5);
    Inventario inv12(dulc4);

    //Llamada a función que imprime el inicio del programa
    inicio();

    int desplegar = 0;{
    //Ciclo para que el sistema siga corriendo mientras no eliga la opción salir.
    while (desplegar < 4 && desplegar > -1){
        //Impresión de menu
        cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"<<endl;
        cout << "1. Desplegar inventario.\n";
        cout << "2. Informacion extra.\n";
        cout << "3. Desplegar carrito.\n";
        cout << "4. Salir.\n";
        //Leer indice que selecciona la opción del menú
        cin >> desplegar;
        //Switch donde dependiendo la eleccion efectua un diferente procedimiento
        switch (desplegar){

            //Caso 1 que imprime todos los productos con la cantidad de ellos disponible
            case 1:
                cout << " - - - - - - - - Este es el inventario del dia de hoy a primera hora - - - - - - - - \n"<<endl;
                inv1.imprimirinventario();
                inv2.imprimirinventario();
                inv3.imprimirinventario();
                inv4.imprimirinventario();
                inv5.imprimirinventario();
                inv6.imprimirinventario();
                inv7.imprimirinventario();
                inv8.imprimirinventario();
                inv9.imprimirinventario();
                inv10.imprimirinventario();
                inv11.imprimirinventario();
                inv12.imprimirinventario();
                break;

            //Caso 2 que imprime un nuevo menú
            case 2:{
                int despinfo = 0;{
                //Ciclo para que el sistema siga corriendo mientras no eliga la opción salir.
                while (despinfo < 4 && despinfo > -1){

                    //Impresión de menú
                    cout <<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n"<<endl;
                    cout <<"1. Porcentaje de alcohol de las cervezas.\n";
                    cout <<"2. Contenido de los refrescos.\n";
                    cout <<"3. Cantidad de azucar en los dulces.\n";
                    cout <<"4. Regresar el menu principal.\n";

                    //Leer indice que selecciona la opción del menú
                    cin >> despinfo;

                    //Switch donde dependiendo la eleccion efectua un diferente procedimiento
                    switch (despinfo){
                        //Caso 1 que imprime el atributo de porcentaje de alcohol de los objetos tipo cerveza.
                        case 1:
                            cout <<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<<endl;
                            cout <<"\nLa "<<cerv1.get_etiqueta()<<" tiene: "<<cerv1.get_pctAlcohol()<<"% de alcohol"<<endl;
                            cout <<"La "<<cerv2.get_etiqueta()<<" tiene: "<<cerv2.get_pctAlcohol()<<"% de alcohol"<<endl;
                            cout <<"La "<<cerv3.get_etiqueta()<<" tiene: "<<cerv3.get_pctAlcohol()<<"% de alcohol"<<endl;
                            cout <<"La "<<cerv4.get_etiqueta()<<" tiene: "<<cerv4.get_pctAlcohol()<<"% de alcohol\n"<<endl;
                            break;

                        //Caso 2 que imprime el atributo de contenido que tienen los objeto de tipo refresco.
                        case 2:
                            cout <<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<<endl;
                            cout <<"\nLa "<<refr1.get_etiqueta()<<" tiene: "<<refr1.get_contenido()<<"ml. de contenido"<<endl;
                            cout <<"La "<<refr2.get_etiqueta()<<" tiene: "<<refr2.get_contenido()<<"L. de contenido"<<endl;
                            cout <<"La "<<refr3.get_etiqueta()<<" tiene: "<<refr3.get_contenido()<<"ml. de contenido"<<endl;
                            cout <<"La "<<refr4.get_etiqueta()<<" tiene: "<<refr4.get_contenido()<<"L. de contenido\n"<<endl;
                            break;

                        //Caso 3 que imprime el atributo de azucar que tienen los objeto de tipo dulce.
                        case 3:
                            cout <<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<<endl;
                            cout <<"\nEl "<<dulc1.get_etiqueta()<<" tiene: "<<dulc1.get_azucar()<<"gr. de azucar"<<endl;
                            cout <<"La "<<dulc2.get_etiqueta()<<" tiene: "<<dulc2.get_azucar()<<"gr. de azucar"<<endl;
                            cout <<"Las "<<dulc3.get_etiqueta()<<" tiene: "<<dulc3.get_azucar()<<"gr. de azucar"<<endl;
                            cout <<"El "<<dulc4.get_etiqueta()<<" tiene: "<<dulc4.get_azucar()<<"gr. de azucar\n"<<endl;
                            break;
                    }
                }
                }
            }
                break;
            //Caso 3 que despliega el carrito de compra con todos los productos
            case 3:
                int opcion = 0;{
                //Ciclo para que el sistema siga corriendo mientras no elija la opcion salir.
                while (opcion < 15 && opcion > -1){
                    //Impresión de los productos de la tienda
                    cout << " o o o o o o o o o o o Carrito o o o o o o o o o o o \n"<<endl;
                    cout<<" - - - Cervezas - - - \n"<<endl;
                    cout<<"1. "<<cerv1.get_etiqueta()<<"\n";
                    cout<<"2. "<<cerv2.get_etiqueta()<<"\n";
                    cout<<"3. "<<cerv3.get_etiqueta()<<"\n";
                    cout<<"4. "<<cerv4.get_etiqueta()<<"\n"<<endl;
                    cout<<" - - - Refrescos - - - \n"<<endl;
                    cout<<"5. "<<refr1.get_etiqueta()<<"\n";
                    cout<<"6. "<<refr2.get_etiqueta()<<"\n";
                    cout<<"7. "<<refr3.get_etiqueta()<<"\n";
                    cout<<"8. "<<refr4.get_etiqueta()<<"\n"<<endl;
                    cout<<" - - - Dulces - - - \n"<<endl;
                    cout<<"9. "<<dulc1.get_etiqueta()<<"\n";
                    cout<<"10. "<<dulc2.get_etiqueta()<<"\n";
                    cout<<"11. "<<dulc3.get_etiqueta()<<"\n";
                    cout<<"12. "<<dulc4.get_etiqueta()<<"\n";
                    cout <<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n";
                    cout << "13. Borrar todos el carrito \n";
                    cout << "14. FINALIZAR COMPRA \n";
                    cout << "15. Regresar al menu principal. \n";
                    cout << "\nIntroduce el producto que quieras comprar: ";
                    //Leer indice que selecciona la opcion del carrito
                    cin >> opcion;
                    //Switch donde dependiendo la eleccion efectua un diferente procedimiento
                    switch(opcion){

                        //Caso 1 que suma el precio del producto elegido.
                        case 1:
                            acum = cerv1.get_precio();
                            total += acum;
                            cout <<"\n - - - - - - - - Total del carro: "<<total<<"$ - - - - - - - - \n"<<endl;
                            break;

                        //Caso 2 que suma el precio del producto elegido.
                        case 2:
                            acum = cerv2.get_precio();
                            total += acum;
                            cout <<"\n - - - - - - - - Total del carro: "<<total<<"$ - - - - - - - - \n"<<endl;
                            break;

                        //Caso 3 que suma el precio del producto elegido.
                        case 3:
                            acum = cerv3.get_precio();
                            total += acum;
                            cout <<"\n - - - - - - - - Total del carro: "<<total<<"$ - - - - - - - - \n"<<endl;
                            break;

                        //Caso 4 que suma el precio del producto elegido.
                        case 4:
                            acum = cerv4.get_precio();
                            total += acum;
                            cout <<"\n - - - - - - - - Total del carro: "<<total<<"$ - - - - - - - - \n"<<endl;
                            break;

                        //Caso 5 que suma el precio del producto elegido.
                        case 5:
                            acum = refr1.get_precio();
                            total += acum;
                            cout <<"\n - - - - - - - - Total del carro: "<<total<<"$ - - - - - - - - \n"<<endl;
                            break;

                        //Caso 6 que suma el precio del producto elegido.
                        case 6:
                            acum = refr2.get_precio();
                            total += acum;
                            cout <<"\n - - - - - - - - Total del carro: "<<total<<"$ - - - - - - - - \n"<<endl;
                            break;

                        //Caso 7 que suma el precio del producto elegido.
                        case 7:
                            acum = refr3.get_precio();
                            total += acum;
                            cout <<"\n - - - - - - - - Total del carro: "<<total<<"$ - - - - - - - - \n"<<endl;
                            break;

                        //Caso 8 que suma el precio del producto elegido.
                        case 8:
                            acum = refr4.get_precio();
                            total += acum;
                            cout <<"\n - - - - - - - - Total del carro: "<<total<<"$ - - - - - - - - \n"<<endl;
                            break;

                        //Caso 9 que suma el precio del producto elegido.
                        case 9:
                            acum = dulc1.get_precio();
                            total += acum;
                            cout <<"\n - - - - - - - - Total del carro: "<<total<<"$ - - - - - - - - \n"<<endl;
                            break;

                        //Caso 10 que suma el precio del producto elegido.
                        case 10:
                            acum = dulc2.get_precio();
                            total += acum;
                            cout <<"\n - - - - - - - - Total del carro: "<<total<<"$ - - - - - - - - \n"<<endl;
                            break;

                        //Caso 11 que suma el precio del producto elegido.
                        case 11:
                            acum = dulc3.get_precio();
                            total += acum;
                            cout <<"\n - - - - - - - - Total del carro: "<<total<<"$ - - - - - - - - \n"<<endl;
                            break;

                        //Caso 12 que suma el precio del producto elegido.
                        case 12:
                            acum = dulc4.get_precio();
                            total += acum;
                            cout <<"\n - - - - - - - - Total del carro: "<<total<<"$ - - - - - - - - \n"<<endl;
                            break;

                        //Caso 13 que reinicia el valor del carrito en 0.
                        case 13:
                            total = 0;
                            cout <<"\n - - - - - - - - Total del carro: "<<total<<"$ - - - - - - - - \n"<<endl;
                            break;
                        //Caso 13 que imprime el valor total de la compra realizada y termina el programa.
                        case 14:
                            cout <<"\n - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n";
                            cout <<"\nCompra realizada con exito. \nPrecio final: "<<total<<"$\n";
                            cout <<"El pedido esta a nombre de: "<<nombre<<"\n";
                            cout <<"Y se enviara a: "<<direccion<<" dentro de 2 a 3 dias habiles. \n"<<endl;
                            cin.get();
                            exit(-1);
                            break;
                    }
                }
                }
        }
    }
    }
}
















