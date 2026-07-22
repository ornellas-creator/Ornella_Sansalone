/*ej 18 mayores y menores con WHILE */
#include <stdio.h>
#define VECES 10 
int main() {
	int nro, mayor=0, menor=0;
	int i = 0;
	while (i<VECES){
		printf("ingrese un nro: ");
		scanf("%d", &nro);
		i++;
		if(nro< 0){
	    	menor++;	
		}
		else{
		    mayor++;	
		}
	}
	printf("hay %d mayores a cero y %d menores a cero", mayor, menor);
	return 0; 
}

