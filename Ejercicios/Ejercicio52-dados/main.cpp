#include <iostream>
#include <ctime>
#include <cstdlib>

int input (int cant);
{

  if (cant == 1)
    {
      std::cout << "Presione \"ENTER\" para lanzar el dado 1";
    }
  else
    {
      std::cout << "Presione \"ENTER\" para lanzar el dado 2";
    }

  std:: cin. ignore ();
}


int tirardado ()
{
  int ran;
  srand (time (0));
  ran = rand () % 6 + 1;
  std::cout << "Obtuvo " << ran << std::endl;
  return ran;
}


int dado (int pdado, int sdado)
{
  std::cout << "Ha avanzado " << pdado + sdado << " casillas" << std::endl;
  return pdado + sdado;
}



int main ()
{
  int total, primerdado, segundodado;

  input (1);
  primerdado = tirardado ();
  input (2);
  segundodado = tirardado ();
  total = dado(primerdado, segundodado);
  return 0;
}