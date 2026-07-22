/*superficie de triangulo*/
#include<stdio.h>
int main(){
	//ingresar variables base, altura y res
	double base, altura, res, res2;
	printf("ingrese base de triangulo: ");
	scanf("%lf", &base);
	printf("ingrese altura de triangulo: ");
	scanf("%lf", &altura);
	//multiplicar base x altura
	res = base*altura;
	res2 = res/2;
	printf("la superficie del triangulo es: %lf", res2);

	return 0;

	}
