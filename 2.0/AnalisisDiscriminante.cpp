#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//Funcion que dados 3 valores correspondientes a la forma ax^2+bx+c retorna el numero discriminante
//Se utiliza la formula b^2-4ac
int discriminante(int a,int b,int c) {
	return (b*b) - (4 * a * c);
}

//Funcion que determina el valor absoluto de un numero entero
void valorAbsoluto(){
	int a;
	int absoluto;
	std::cout << "Ingrese un número: " << std::endl;
	std::cin >> a;
	absoluto = abs(a);
	std::cout << "El absoluto de " << a << " es " << absoluto<<endl;
}
