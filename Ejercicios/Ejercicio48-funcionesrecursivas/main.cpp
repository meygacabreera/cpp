#include <iostream>

using namespace std; 

int numerosecreto = 7;
void adivinarnumerosecreto(int minumero)
{
if (minumero == numerosecreto)
   {
       cout << "Adivinaste!" << endl;
   }
   else
   {
       cout << "Intento fallido con: " <<minumero << endl;
       int  otronumero = 0;
       cout << "Ingrese otro numero: ";
       cin >> otronumero;
        adivinarnumerosecreto(otronumero);
   }
}
int main(int argc, char const *argv[])
{
    adivinarnumerosecreto(5);


    return 0;
}
