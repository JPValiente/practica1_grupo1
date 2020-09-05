#include "validadorPrimos.h"

/*
* Pide un numero para luego validarlo si es primo o no
*/
void validadorPrimos(int num, int option) {
    int number = 0;

    switch(option){
      case 0:
      cout << "==> Validador de numeros primos <==" << endl;
      cout << "Ingrese un numero entero: ";
      cin >> number;
      break;
      case 1:
      number = num;
      break;
    }

    if (esPrimo(number)) {
    	cout << "Es primo" << endl;
  	} else {
  	  	cout << "No es primo" << endl;
  	}
}

/**
* Devuleve 1 si se trata de un numero primo, de lo contrario devuleve 0
**/
bool esPrimo(int numero){
	if (numero == 0 || numero == 4) return 0;
  if (numero == 1) return 1;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return 0;
  return 1;
  }
}

/**
* Verifica si el numero es par
**/
void esPar(void){
  int numero;
  cout << "Ingrese un numero entero: ";
  cin >> numero;

  if (numero % 2 == 0 ) {
    cout << "ES PAR" << endl;
  } else {
      cout << "ES IMPAR" << endl;
  }

}
