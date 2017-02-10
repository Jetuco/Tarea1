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

int factorial()
{
    int facto = 0;
    int contar = 1;
    cout << "Digite por favor el factorial a calcular: " << endl;
    scanf("%d", &facto);
    
    for(int r=0; r<facto; r++)    
    {
      contar = mult(contar, r+1);      
    }
    cout << "\nEl factorial de " << facto << " es: " << contar << endl;
}

int main()
{
      factorial();
      
      system("pause > null");
      return 0;
}