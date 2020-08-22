#include "./Multiplicacionydivision.h"
#include <iostream>

using namespace std;

//Funcion que retorna el valor resultado de la multiplicacion de dos numeros enteros
int multiplicacion(int a, int b) {
    cout<<"El resultado es: "<<a*b<<endl;
    return a*b;
}

//Funcion que retorna el valor resultado de la division de dos numeros enteros
int division(int a, int b) {
	if(b != 0){
		cout<<"El resultado es: "<<a/b<<endl;
    	return a/b;
	} else {
		cout<<"Error: la division entre 0 no existe"<<endl;
		return 0;
	}
}