/*ej17 mayores y menores con FOR*/
#include<stdio.h>
#define VECES 10 
int main ()
{

     int mayor = 0, menor =0, nro;
    	for ( int i = 0; i<VECES; i++)
	{
		printf("ingrese nro: ");
	    scanf("%d", &nro);
	    if (nro<0)
     	{
	    	menor++;
    	}
    	else 
     	{
	     	mayor++;
     	}
    }

	printf("hay %d mayores y %d menores", mayor, menor);
	
	return 0;
}
