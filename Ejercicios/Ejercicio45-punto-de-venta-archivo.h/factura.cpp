
#include <iostream>
#include "menu.h"
#include "factura.h"
#include "producto.h"
#include "productos.h"
#include "productoss.h"

using namespace std;

double subtotal;
double ISV;
double total;
string listaProductos;
void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    ISV = (subtotal*0.15);
    total = (ISV + subtotal);
}
void imprimirFactura()
{
    system("cls");
    cout << "********" << endl;
    cout << "Factura" << endl;
    cout << "********" << endl;
    cout << endl;

    cout << "Productos:" << endl;
    cout << listaProductos;

    cout << endl;
    cout << "subtotal: " << subtotal;
    cout << endl;
    cout << endl;

    cout << "ISV 15%: " << ISV;
    cout << endl;
    cout << endl;
    
    cout << "Total: " << total;
    cout << endl;
    cout << endl;
    system("pause");
}    