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
        char facturaexcenta = 0;

        cout << "Ingrese el subtotal de la factura: ";
        cin >> subtotal;

        cout << "Ingrese el descuento (0, 10, 15, 20)";
        cin >> descuento;
        
        cout << "Es factura excenta escriba S o N: ";
        cin >> facturaexcenta;
        
        
        // Proceso
        
        
        if (facturaexcenta == 'S')
        calculoImpuesto= 0;
        if (facturaexcenta == 's')
       calculoImpuesto= 0;
       
		else if (facturaexcenta== 'N')
        calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
        else if (facturaexcenta== 'n')
       calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
       
         calculoDescuento = (subtotal * descuento) / 100;
        total = subtotal - calculoDescuento + calculoImpuesto;
        // Salida 

        cout << endl; 
        cout << "Total a pagar es: " << total;


        return 0;
    }
