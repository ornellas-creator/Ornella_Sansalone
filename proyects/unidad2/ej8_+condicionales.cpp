/*ej8 +condicionales*/
#include<stdio.h>
int main(){
	double tiempo;
	printf("indicar grados centigrados: ");
	scanf("%lf", &tiempo);
	if (tiempo>= 25 )
	{
		printf("hace calor!");
	}
	else 
	{
		printf("hace frio!");
	}
	return 0;
}
