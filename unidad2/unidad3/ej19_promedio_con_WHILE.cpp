/*ej19 promedio con WHILE*/
#include<stdio.h>
#define CANTIDAD 3 
int main(){
	double nro, promedio= 0;
	double i =0;
	while (i<CANTIDAD){
		printf("ingresar nro: ");
		scanf("%lf", &nro);
		i++;
		promedio= promedio + nro;
	}
	promedio= promedio/CANTIDAD;
	printf("el promedio es %lf", promedio);
	
	return 0;
}
