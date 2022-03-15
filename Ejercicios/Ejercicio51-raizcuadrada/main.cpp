#include <iostream>
#include <math.h> // Librería para operaciones matemáticas básicas.

using namespace std;

int main(int argc, char const *argv[])
{
    double a,b;
    cout << "Ingrese un numero: ";
    cin >> a;
    b = sqrt(a);
    cout << "La raiz cuadrada de " << a << " es: " << b;
    return 0;
}
