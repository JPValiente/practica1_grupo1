#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "derivada.h"
#include "validadorPrimos.h"
#include "3.0/potenciaCubo.h"
#include "2.0/discriminante.h"
#include "3.0/Multiplicacionydivision.h"
#include "5.0/extras_201731814.h"
#include "5.0/funcionesTrigonometricas.h"

using namespace std;

int main() {
    cout<<"El MCD es "<<MCD(4,8)<<endl;
    esPar();
    raizCuadrada(4);
    validadorPrimos(17,1);
    valorAbsoluto();
    logaritmoNatural();
    potenciaCubica();
    potenciaX();
    derivadaCuadrada();
    multiplicacion(2,2);
    division(6,3);
    funcionesTrigonometricas();
}
