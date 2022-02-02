#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	using namespace std;
	
int main(int argc, char** argv) {
	
	//Datos de entrada
	int a = 0;
	int b = 0;
    int	suma = 0;
	int	resta = 0;
	int	multiplicacion = 0;
	int	divicion = 0;
	
	cout << "Ingrese el valor de a: ";
	cin >> a;
	
	cout << endl; 
	
	cout << "Ingrese el valor de b: ";
	cin >> b;
	
	//Proceso
	suma = a + b;
	resta = a - b;
	multiplicacion = a * b;
	divicion = a / b;
	
	//Salida
	cout << endl; 
	cout << "La suma de a + b es: " << suma;
	cout << endl; 
	cout << "La resta de a - b es: " << resta;
	cout << endl; 
	cout << "La multiplicacin de a * b es: " << multiplicacion;
	cout << endl; 
	cout << "La divicion de a / b es: " << divicion;
	cout << endl; 
	return 0;
}
