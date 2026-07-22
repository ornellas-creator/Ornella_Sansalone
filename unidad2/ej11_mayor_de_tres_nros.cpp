/* ej 11 mayor de 3 nros*/
#include<stdio.h>
int main(){
	//poner variables 
	int nro1, nro2, nro3;
	printf("ingrese nro1: ");
	scanf("%d", &nro1);
	printf("ingrese nro2: ");
	scanf("%d", &nro2);
	printf("ingrese nro3: ");
	scanf("%d", &nro3);
	//if nro mayor
	if (nro1>nro2 && nro3)
	{
		printf("%d es el nro mas grande", nro1);
	}
	else if (nro3>nro1 && nro2)
	{
		printf("%d es el nro mas grande", nro3);
	}
	else 
	{
		printf("%d es el nro mas grande", nro2);
	}
	return 0;
}
