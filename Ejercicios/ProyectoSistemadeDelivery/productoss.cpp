#include <iostream>
#include "menu.h"
#include "factura.h"
#include "producto.h"
#include "productos.h"
#include "productoss.h"
#include "clientes.h"

using namespace std;


extern void agregarProducto(string descripcion, int cantidad, double precio);


void productoss(int opcion)
{
    system("cls");


      int opcionProducto = 0;
    switch (opcion)
    {
    case 3:

        cout << "Baleadas Express" << endl;
        cout << "*************" << endl;
        cout << "1 - Promo Mixta" << endl;
        cout << "2 - Desayuno y Almuerzo" << endl;
        cout << "3 - Tacos Flautas" << endl;
        cout << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
       switch (opcionProducto)
       {
       case 1:
           agregarProducto("1 Promo Mixta (10 Baleadas) Lps 250.00", 1, 250);
           break;
       case 2:
           agregarProducto("1 Desayuno y Almuerzo Lps 109.00", 1, 109);
           break;
           case 3:
           agregarProducto("1 Tacos Flautas Lps 85.00", 1, 85);
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