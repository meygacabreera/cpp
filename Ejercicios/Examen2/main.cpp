#include<iostream>
#include<windows.h>
#include"juego.h"
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

#define ARRIBA 72
#define IZQUIERDA 75
#define ABAJO 80
#define DERECHA 77
#define ESC 27


extern void inicializarArreglo();
extern void gotoxy(int x,int y);
extern void pintar();
extern void dibujarcuerpo();
extern void guardarposicion();
extern void borrarcuerpo();
extern void Teclear(char &tecla);
extern void comida();
extern void puntosx();
extern void proceso(char &tecla, int &puntos);
extern bool gameover();

int main(){
char tecla;
int puntos=0;
int xPos=30, yPos=20;

inicializarArreglo();
dificultad();
gotoxy(50,2);
cout << puntos;
pintar();
gotoxy(xPos, yPos);cout<<(char)4;

while(tecla != ESC && gameover() ){
proceso(tecla, puntos);
}

if ( !gameover()){
MessageBox(NULL,"Has perdido","Perdedor", MB_OK);
system("cls");
}

system("pause>NULL");
return 0;
}