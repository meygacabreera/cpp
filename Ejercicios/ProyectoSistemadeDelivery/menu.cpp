#include <iostream>
#include "menu.h"
#include "factura.h"
#include "producto.h"
#include "productos.h"
#include "productoss.h"
#include "clientes.h"

using namespace std; 

void menu()
{
    int opcion = 0;

while(true)
    {

        system("cls");

         cout << "*********************************************************";
        cout << endl;
        cout << "**********Menu Pricipal del Sistema de Delivery**********";
        cout << endl;
        cout << "*********************************************************";
        cout << endl;

        cout << "1 - Pizza Hut" << endl;
        cout << "2 - Burger King" << endl;
        cout << "3 - Baleadas Express" << endl;
        cout << "4 - Factura" << endl;
        cout << "5 - Clientes" << endl;
        cout << "0 - Salir" << endl;

        cout << endl;
        cout << "Ingrese una opcion------> "; 

        cin >> opcion;

       switch (opcion)
       {
           case 5: 
           mostrarclientes();
           break;
        }


        
        if (opcion == 0)
        {
            break;
        }

        if (opcion == 4)
        {
            imprimirFactura();
          }
            else{
              productos(opcion); 
            }
            
        if (opcion == 0)
        {
            break;
        }

        if (opcion == 4)
        {
            imprimirFactura();
          }
            else{
              producto(opcion); 
            }
            if (opcion == 0)
        {
            break;
        }

        if (opcion == 4)
        {
            imprimirFactura();
          }
            else{
              productoss(opcion);
              
       }
        
       
    }
}

