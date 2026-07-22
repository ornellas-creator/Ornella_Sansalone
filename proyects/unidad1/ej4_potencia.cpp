/* potencia*/
#include<stdio.h>
int main() {
	//paso 1: ingresar nro
	int nro1, res;
	printf("ingresar nro: ");
	scanf("%d", &nro1);
	//paso2: resultado del cuadrado del nro
	res = nro1*nro1;
	printf("el cuadrado de %d es: %d", nro1, res);
	return 0;
}
