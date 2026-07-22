/*ej13 suma de nros usando while*/
#include<stdio.h>
#define lim 5 
int main (){
	int nro, suma= 0;
	int i = 0;
	while (i<lim)
	{
		printf("ingrese un nro: " );
		scanf("%d",&nro);
		suma= suma+nro;
		i++;
	}
	printf("la suma total es: %d\n", suma);
	return 0;
}

