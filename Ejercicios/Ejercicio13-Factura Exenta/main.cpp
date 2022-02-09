#include <iostream>

	using namespace std;

    int main(int argc, char const *argv[])
    {
        // Datos de entrada
        double subtotal = 0; 
        double total = 0;
        double impuesto = 0.15;
        int descuento = 0; 
        double calculoDescuento = 0; 
        double calculoImpuesto = 0;
        char facturaexenta = 0;

        cout << "Ingrese el subtotal de la factura: ";
        cin >> subtotal;

        cout << "Ingrese el descuento (0, 10, 15, 20)";
        cin >> descuento;
        
        cout << "Es factura exenta escriba S o N: ";
        cin >> facturaexenta;
        
        
        // Proceso
        
        
        if (facturaexenta == 'S')
        calculoImpuesto= 0;
        if (facturaexenta == 's')
       calculoImpuesto= 0;
       
		else if (facturaexenta== 'N')
        calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
        else if (facturaexenta== 'n')
       calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
       
         calculoDescuento = (subtotal * descuento) / 100;
        total = subtotal - calculoDescuento + calculoImpuesto;
        // Salida 

        cout << endl; 
        cout << "Total a pagar es: " << total;


        return 0;
    }
