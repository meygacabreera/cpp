#include <iostream>
#include "menu.h"
#include "factura.h"
#include "producto.h"
#include "productos.h"
#include "productoss.h"
#include "clientes.h"

using namespace std;


extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");

int opcionProducto = 0;
    switch (opcion)
    {
    case 1:
        cout << "*********" << endl;
        cout << "Pizza Hut" << endl;
        cout << "*********" << endl;
        cout << "1 - Super Suprema" << endl;
        cout << "2 - Triple Wow Box" << endl;
        cout << "3 - Pechu Pack" << endl;
        cout << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
       switch (opcionProducto)
       {
       case 1:
           agregarProducto("1 Super Suprema Lps 280.00", 1, 280);
           break;
       case 2:
           agregarProducto("1 Triple Wow Box  Lps 619.00", 1, 619);
       case 3:
           agregarProducto("1 Pechu Pack   Lps 664.00", 1, 664);
           break;
           break;
       default:
       {
         cout << "Opcion no valida";
          return;

           break;
       }
    }
      cout << endl;
      cout << "Producto agregado" << endl;
      system("pause");
      
            
        break;
    
    default:
        break;
    
    }
    
}