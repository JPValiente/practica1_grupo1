#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//Funcion que dados 3 valores correspondientes a la forma ax^2+bx+c retorna el numero discriminante
//Se utiliza la formula b^2-4ac
int discriminante(int a,int b,int c) {
	return (b*b) - (4 * a * c);
}

