/*ej 14 suma con do while*/
#include<stdio.h>
#define LIM 5
int main(){
	int i = 0;
	int nro, suma = 0;

	do{
		printf("ingrese nro:  ");
		scanf("%d", &nro);
		suma= suma + nro;
	} while (suma<LIM );
    	{
        	printf("resultado de suma: %d ", suma);
        }
	return 0;
}
