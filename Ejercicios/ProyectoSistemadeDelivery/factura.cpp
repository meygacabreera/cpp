
#include <iostream>
#include "menu.h"
#include "factura.h"
#include "producto.h"
#include "productos.h"
#include "productoss.h"
#include "clientes.h"

using namespace std;

double subtotal;
double ISV;
double total;
double Tarifadeenvio;

string listaProductos;
void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    ISV = (subtotal*0.15);
   Tarifadeenvio = (100);
    total = (Tarifadeenvio + subtotal + ISV);
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
    
    cout << "Tarifa de envio: " << Tarifadeenvio;
    cout << endl;
    cout << endl;

    
    cout << "Total a pagar: " << total;
    cout << endl;
    cout << endl;
    system("pause");
}    