#include "validadorPrimos.h"

void validador(void) {
    int number = 0;

    cout << "==> Validador de numeros primos <==" << endl;
    cout << "Ingrese un numero entero: ";
    cin >> number;

    if (esPrimo(number)) {
    	cout << "Es primo" << endl;
  	} else {
  	  	cout << "No es primo" << endl;
  	}
}

bool esPrimo(int numero){
	if (numero == 0 || numero == 4) return 0;
  /*
          El número 4 es un caso especial, pues al dividirlo entre
          2 el resultado es 2, y el ciclo nunca se cumple, indicando que
          el 4 SÍ es primo, pero realmente NO lo es, así que si el número es 4
                        inmediatamente indicamos que no es primo (regresando 0)
          Nota: solo es para el 4, los demás funcionan bien
  */
  if (numero == 1) return 1;
  for (int x = 2; x < numero / 2; x++) {
    // Si es divisible por cualquiera de estos números, no
    // es primo
    if (numero % x == 0) return 0;
  }
  // Si no se pudo dividir por ninguno de los de arriba, sí es primo
  return 1;
}
