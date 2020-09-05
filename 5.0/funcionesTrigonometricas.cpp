#include "funcionesTrigonometricas.h"
#include <iostream>
#include <cmath>
 
using namespace std;
 
int funcionesTrigonometricas(void){
	float number = 0;
	float result = 0;
	int option = 0;
	cout << "==> Funciones Trigonometricas <==" << endl;
    cout << "Ingrese el angulo en grados: ";
    cin >> number;
    cout << "Seleccione la opcion a realizar: " << endl;
    cout << "(1) Funcion Coseno\n(2) Funcion Seno\n(3) Funcion tangente" << endl;
    cin >> option;
    switch(option){
    	case 1:
    	result = funcionCoseno(number);
    	break;
    	case 2:
    	result = funcionSeno(number);
    	break;
    	case 3:
    	result = funcionTangente(number);
    	break;
    }
    cout << "El resultado es: " << result << endl;
}

float funcionCoseno(float anguloGrados){
    float PI = 3.14159265;
    float anguloRadianes = anguloGrados * PI / 180;
    return cos(anguloRadianes);
}

float funcionSeno(float anguloGrados){
    float PI = 3.14159265;
    float anguloRadianes = anguloGrados * PI / 180;
    return sin(anguloRadianes);
}

float funcionTangente(float anguloGrados){
	float PI = 3.14159265;
    float anguloRadianes = anguloGrados * PI / 180;
    return tan(anguloRadianes);	
}