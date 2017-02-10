#include <stdio.h>
#include <cassert>
#include <iostream>
#include <stdlib.h>
using namespace std;

int division(int num1, int num2)
{   
   int contador = 0;
   for(int h=0; num1>=0; h++)     
   {
     num1 -= num2;
     contador=h;          
   }
   return contador;
}

int main()
{
      unsigned int numero1, numero2, resultado;
      
      printf ("Digite Dividendo: \n");
      scanf ("%d", &numero1);
      printf ("Digite Divisor: \n");
      scanf ("%d", & numero2);
      resultado = division(numero1,numero2);
      printf ("el resultado de la division es: %d", resultado);
      
      system("pause > null");
      return 0;
}