#include <iostream>
#include "menu.h"
#include "factura.h"
#include "producto.h"
#include "productos.h"
#include "productoss.h"
#include "clientes.h"

using namespace std;


extern void agregarProducto(string descripcion, int cantidad, double precio);

void producto(int opcion)
{
    system("cls");

int opcionProducto = 0;
    switch (opcion)
    {
    case 2:

        cout << "Burger King" << endl;
        cout << "**********" << endl;
        cout << "1 - King Box" << endl;
        cout << "2 - King Pack" << endl;
        cout << "3 - Family Bundle" << endl;
        
        cout << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
       switch (opcionProducto)
       {
       case 1:
           agregarProducto("1 King Box Lps 139.00", 1, 139);
           break;
       case 2:
           agregarProducto("1 King Pack   Lps 439.00", 1, 439);
           break;
       case 3:
           agregarProducto("1 Family Bundle   Lps 429.00", 1, 429);
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