/* ej 2 tm intro marzo 2026 sumar dos nros */
#include <stdio.h>
int main() {
	int nro1, nro2, res;
	//paso 1. ingresar nros
	printf("ingrese nro: ");
	scanf("%d", &nro1);
	printf("ingrese nro: ");
	scanf("%d", &nro2);
	//paso 2. sumar nros
	res = nro1 + nro2;
	//paso 3. mostrar resultado
	  printf("el resultado es: %d\n", res);
	  printf("la suma de %d + %d es igual a: %d", nro1, nro2, res);
	return 0;
}
