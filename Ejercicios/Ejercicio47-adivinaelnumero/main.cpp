#include <iostream>
#include <stdlib.h> // srand, rand
#include <time.h>

using namespace std; 

int main(int argc, char const *argv[])
{
    int numerosecreto = 0;
    int minumero = 0;

    //Inicializa el numero rando con srand
    srand(time(NULL));
    
    //General un numero entre 1 y 10
    numerosecreto = rand() % 10 + 1;
    do
    {
        cout <<"Adivina el numero ( 1 a 10): ";
        cin >> minumero;

        if (numerosecreto < minumero)
        {
            cout << "El numero secreto puede se menor" << endl;
        }
        else
        {
            if (numerosecreto > minumero)
            {
                cout << "El numero secreto puede se mayor" << endl;
            }
        }
        
    } while (numerosecreto != minumero);


    cout << endl;
    cout << endl;
    cout << "adivinaste!";
    
    return 0;
}
