#include "potenciaCubo.h"
#include <iostream>
#include <math.h>

using namespace std;
//funcion para calcular potencia al cubo

void potenciaCubica()
{
    double numero;
    std::cout<<"Ingrese el digito a elevar ^(3): "<<std::endl;
    std::cin>>numero;
    double elevado = pow(numero, 3); //funcion que determina el resultado
    std::cout << "El numero " << numero << " elevado al cubo es " << elevado<<endl;
}

void potenciaX(){
  int n, base;
 cout << "Ingrese la base: " << endl;
 cin >> base;
 cout << "Ingrese el exponente" << endl;
 cin >> n;
 int resultado = pow(base,n);
 cout << base << " elevado a la " << n << " es igual a " << resultado << endl;

}
