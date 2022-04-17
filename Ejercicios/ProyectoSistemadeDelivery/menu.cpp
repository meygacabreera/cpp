#include <iostream>
#include "seguridad.h"
using namespace std; 

void menu() {

    bool salir = false;

    while (salir == false) {

        int opcion = 0;
        
        cout << "*********************************************************";
        cout << "**********Menu Pricipal del Sistema de Delivery**********";
        cout << "*********************************************************";
        cout << endl;
        cout << "1 - Restaurantes de comida" << endl;
        cout << "2 - Clientes" << endl;
        cout << "3 - Producto Solicitado" << endl;
        cout << "4 - Tarifa de Envios" << endl;
        cout << "5 - Total de la venta" << endl;
        cout << "0 - Salir" << endl;
        cout << endl;
        cout << endl;
        cout << "Ingrese una opcion y presione enter --> : "; 

        cin >> opcion;

        switch (opcion)
        {
        case 1:
            //Restaurantes de comida ();
            system ("pause");
            break;
        case 0:
            Salir = true;
            default;
            break;
        }
         system("cls");
    }
       
       
 }


