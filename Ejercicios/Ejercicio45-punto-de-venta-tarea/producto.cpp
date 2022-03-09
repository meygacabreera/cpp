#include <iostream>

using namespace std;


extern void agregarProducto(string descripcion, int cantidad, double precio);

void producto(int opcion)
{
    system("cls");

int opcionProducto = 0;
    switch (opcion)
    {
    case 1:

        cout << "Bebidas Frias" << endl;
        cout << "*************" << endl;
        cout << "1 - Limonada" << endl;
        cout << "2 - Fresco" << endl;
        cout << "3 - Cafe Mocca Helado" << endl;
        
        cout << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
       switch (opcionProducto)
       {
       case 1:
           agregarProducto("1 Limonada Lps 25.00", 1, 25);
           break;
       case 2:
           agregarProducto("1 Fresco   Lps 30.00", 1, 30);
           break;
       case 3:
           agregarProducto("1 Cafe Mocca Helado  Lps 55.00", 1, 55);
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