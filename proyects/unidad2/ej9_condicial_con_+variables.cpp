/*ej9 con mas condicionales*/
#include<stdio.h>
int main(){
	int horas;
	printf("ingresar horas de estudio: ");
	scanf("%d", &horas);
	if (horas<=2)
	{
		printf("estudia mas!");
	}
	else if (horas==4)
	{
		printf("estas listo para rendir!");
	}
	else
	{
		printf("descansa antes del parcial!");
	}
	return 0;
	
}
