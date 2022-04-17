#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
using namespace std; 

 
int random();

 
int main()
{
    int fil = 5, col = 5, suma = 0;
    srand(time(NULL));
 
    int matriz[fil][col];
 
    for (int i = 0; i < fil; i++)
        for (int j = 0; j < col; j++)
        {
            matriz[i][j] = random();
            suma += matriz[i][j];
        }
 
 
    printf("\n Matriz 5X5 :\n");
 
    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" %2d  ", matriz[i][j]);
        }
        printf("\n");
    }
 
    printf("\n  Total Suma: %d\n", suma);
 
    return 0;
}
 
int random()
{
    return rand() % 25 + 1;
}