#include <iostream>

using namespace std;


extern void agregarProducto(string descripcion, int cantidad, double precio);


void productoss(int opcion)
{
    system("cls");


      int opcionProducto = 0;
    switch (opcion)
    {
    case 1:

        cout << "Repostera" << endl;
        cout << "*************" << endl;
        cout << "1 - Galletas" << endl;
        cout << "2 - Pastel de chocolate" << endl;
        cout << "3 - Budines" << endl;
        cout << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
       switch (opcionProducto)
       {
       case 1:
           agregarProducto("1 Galletas Lps 35.00", 1, 35);
           break;
       case 2:
           agregarProducto("1 Pastel de chocolate Lps 55.00", 1, 55);
           break;
           case 3:
           agregarProducto("1 Budines Lps 40.00", 1, 40);
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