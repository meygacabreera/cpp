#include <iostream>
#include "menu.h"
#include "factura.h"
#include "producto.h"
#include "productos.h"
#include "productoss.h"
#include "clientes.h"


using namespace std; 

string arregloclientes[5][3] = {
{ "C001", "Elmer Cabrera", "32511547"}, 
{ "C002", "Mabel Gomez", "315715487"},
{ "C003", "Reina Ortiz", "88152475"},
{ "C004", "Axel Rivera", "95457520"},
{ "C005", "Osman Perez", "99180007"},
};

void mostrarclientes() {
    system("Cls");
cout << "-------------------------" <<endl;
cout << "Codigo, Nombre y Telefono" <<endl;
cout << "-------------------------" <<endl <<endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arregloclientes[i][0] << " ";
        cout << arregloclientes[i][1] << " ";
        cout << arregloclientes[i][2] << " ";
        cout << endl;
    }
    
    system("pause");
}
    
