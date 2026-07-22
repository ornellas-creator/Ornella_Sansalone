/*suma de nros con for while*/
#include<stdio.h>
#define LIM 5
int main (){
	int nro, suma=0;
	for (int i=0; i<LIM ; i++)
	{
		printf("ingrese nro: ");
		scanf("%d",&nro);
		suma= suma + nro;
	}
		printf("la suma de los nros son: %d\n",suma);
	return 0;
}
