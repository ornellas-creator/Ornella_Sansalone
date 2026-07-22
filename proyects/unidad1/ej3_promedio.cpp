//* ej3 calcular promedio *//
#include <stdio.h>
int main (){
	int nro1, nro2, nro3, res1, res2;
	printf("ingresar nro1: ",nro1);
	scanf("%d", &nro1);
	printf("ingresar nro2: ", nro2);
	scanf("%d", &nro2);
	printf("ingresar nro3: ", nro3);
	scanf("%d", &nro3);
	res1 = nro1 + nro2 + nro3;
	res2 = res1/3;
	printf("promedio es: %d\n", res2);
	printf("el promedio de %d + %d + %d :%d = %d", nro1, nro2, nro3, 3, res2);
	return 0;
}
