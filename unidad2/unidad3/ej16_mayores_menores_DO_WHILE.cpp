/*De 10 números ingresados por teclado, indicar cuántos son mayores y cuántos menores
a CERO con DO WHILE*/
#include<stdio.h>
#define VECES 10
int main (){
	int nro, mayor = 0, menor = 0;
	int i = 0;
	do
	{	
		printf("ingrese nro: ");
		scanf("%d", &nro); 
		i++;
		if (nro< 0)
		{
			menor= menor+1;
		}
        else 
		{
			mayor= mayor +1;
		}
	}
	while (i<VECES);
	
		printf("hay %d mayores a cero y %d menores a cero", mayor, menor);	
	 return 0;
}


