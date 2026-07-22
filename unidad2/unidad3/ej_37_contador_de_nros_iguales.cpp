/*ej 37*/
#include<stdio.h>
#define cantidad 3
int main (){
	int nro1,nro2,nro3;
	int iguales=0;
	puts("contador de nros iguales.");
     	printf("ingrese nro1: ");
	scanf("%d", &nro1);
		printf("ingrese nro2: ");
	scanf("%d", &nro2);
		printf("ingrese nro3: ");
	scanf("%d", &nro3);
	
	if (nro1==nro2 && nro1==nro3) iguales= iguales+3;
         else if (nro1==nro2 || nro2==nro3|| nro3==nro1 ) iguales=iguales+2;
	         else iguales=0;
	        
	printf("hay %d nros iguales.", iguales);
	return 0;
}
