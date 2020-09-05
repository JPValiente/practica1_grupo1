#include "derivada.h"
#include <iostream>
#include <cmath>


using namespace std;
//funcion para calcular potencia al cubo

void derivadaCuadrada()
{
  int cuadrado,uno,constante;
  cout << "Ingrese un numero entero (^2): ";
  cin >> cuadrado;
  cout << "Ingrese un numero entero (^1): ";
  cin >> uno;
  cout << "Ingrese un numero entero (constante): ";
  cin >> constante;

  cout <<"La expresion es: " << cuadrado <<"x^2 + "<<uno<<"x + "<<constante<<endl;
  int resT1 = cuadrado * 2;
  cout<< "La derivada es: " << resT1 << "x + " << uno <<endl;

}
