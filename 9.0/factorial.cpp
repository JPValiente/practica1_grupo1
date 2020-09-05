#include "factorial.h"
#include <iostream>

using namespace std;

int funcionFactorial(void)
{
   int n,i;
   long double factorial; // se declara long double para poder representar números grandes
   cout << "==> Funcion Factorial <==" << endl;
   cout << "Ingrese un numero entero: ";
   cin >> n;
   factorial=1;
   for(i=1;i<=n;i++)
        factorial = factorial * i;
   cout << endl << "Factorial de " << n << " -> " << factorial << endl;
   return 0;
}