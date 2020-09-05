#include "./extras_201731814.h"
#include <iostream>
#include <cmath>

using namespace std;

//Funcion que retorna el valor resultado de la raiz de un numero
int raizCuadrada(int a) {
    //Se utiliza la funcion sqrt disponible en la libreria cmath
    int sqrtRoot = sqrt(a);
    cout<<"El resultado es: "<<sqrtRoot<<endl;
    return sqrtRoot;
}
//Funcion que busca el máximo común divisor entre dos números de manera recursiva
int MCD(int a, int b) {
    //Hace una comparación si alguno de los valores es igual a 0
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    //Busca de forma recursiva quien es el MCD
    if (a < b)
        return MCD(a, b % a);
    else
        return MCD(b, a % b);
}

