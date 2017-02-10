#include <stdio.h>
#include <cassert>
#include <iostream>
#include <stdlib.h>
using namespace std;

int aux =1;

int mult(int num1, int num2)
{
    int conta =0;
    for(int j=1; j<=num2; j++)
    {
     conta += num1;
    }
    return conta;
}

int main()
{
      unsigned int numero1, numero2, resultado, aux;
      unsigned int contador = 0;
      
      printf ("Digite primer numero: \n");
      scanf ("%d", &numero1);
      printf ("Digite segundo numero: \n");
      scanf ("%d", & numero2);
      resultado = mult(numero1, numero2);      
      printf ("el resultado de la multiplicacion es: %d", resultado);
      system("pause > null");
      return 0;
}
