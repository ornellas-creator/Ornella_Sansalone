/* ej10 superficie triangulo con condicional*/
#include<stdio.h>
int main(){
	//paso 1: pongo variables 
	double base, altura, res, res2;
	printf("ingrese base del cuadrado: ");
	scanf("%lf", &base);
	printf("ingrese altura de triangulo: ");
	scanf("%lf", &altura);
	//paso2: if  
	if (base<= 0 || altura<= 0)
	{
		printf("tiene que ser mayor a 0 ");
	}
	else 
	{
	res = base*altura;
	res2 = res/2;
	printf("la superficie del triangulo es: %lf",res2);
		
	}
	return 0;
}
