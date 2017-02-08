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

int vect()
{
	int tam=0;
	int vcon=0;
    int x = 0;
    int conta = 0;
    int result = 0;
    int ayuda = 0;
    
	cout << "Digite grado del Polinomio" << endl;
	scanf("%d", &tam);
	
	int vector[tam+1];
	
	for(int d=0; d<tam+1; d++)
	{
		cout << "\nDigite variable para X ^ " << d << ": "<< endl;
		scanf("%d", &vcon);
		vector[d] = vcon;
	}
	
	cout << "\nEl Polinomio ingresado es \n" << endl;
	
	for(int n=0; n<tam+1; n++)
	{
     if (n == tam)
     {
          cout << vector[n] << "X^" << n << endl; 
     }
     else
     {
      cout << vector[n] << "X^" << n << " + ";
     }
    }
	
    cout << "\nIngrese el valor de la variable\n" << endl;
    scanf("%d", &x);	
    
    
    for(int k=0; k<tam+1; k++)
    {
         ayuda = exponencial(x,k);
         result = mult(ayuda,vector[k]);
         conta += result; 
         /*cout << "\n\n\n"<< k << "\n"<< endl;
         cout << x << "\n"<< endl;
         cout << ayuda << vector[k] <<"\n" << endl;               CODIGO PARA VER LA EJECUCION DEL PROGRAMA
         cout << result << "\n"<< endl;
         cout << conta << "\n\n\n"<< endl;*/
         
    }
    cout << "\nEl resultado del polinomio es: " << conta << endl;   
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
    cout << "El factorial de " << facto << " es: " << contar << endl;
}


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
      unsigned int numero1, numero2, resultado, aux;
      unsigned int contador = 0;
      
      /*printf ("Digite primer numero: \n");
      scanf ("%d", &numero1);
      printf ("Digite segundo numero: \n");
      scanf ("%d", & numero2);
      resultado = mult(numero1, numero2);
      resultado = exponencial(numero1, numero2);
      printf ("el resultado de la multiplicacion es: %d", resultado);*/
      //vect();
      //factorial();
      printf ("Digite Dividendo: \n");
      scanf ("%d", &numero1);
      printf ("Digite Divisor: \n");
      scanf ("%d", & numero2);
      resultado = division(numero1,numero2);
      printf ("el resultado de la division es: %d", resultado);
      
      system("pause > null");
      return 0;
}
