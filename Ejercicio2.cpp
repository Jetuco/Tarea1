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

int exponencial(int num1, int num2)
{    
    int aux =1;
    const int base = num1;
    
    if(num2 == 0)
    {
     return 1;
    }
    else if (num2 == 1)
    {
     return num1;
    }
    else
    {
        for(int t=num2+1; t>1; t--)
        {
            aux = mult(aux,base);			
        }
		return aux;		    
    }
}

int main()
{
      unsigned int numero1, numero2, resultado;
      unsigned int contador = 0;
      
      printf ("Digite numero base: \n");
      scanf ("%d", &numero1);
      printf ("Digite exponente: \n");
      scanf ("%d", & numero2);
      resultado = exponencial(numero1, numero2);
      printf ("el resultado del exponencial es: %d", resultado);
      
      
      system("pause > null");
      return 0;
}
