/* ej12 suma simple version 1 */
#include<stdio.h>
int main(){
	int nro1, nro2, nro3, nro4, nro5, res;
	printf("ingrese nro1: ");
	scanf("%d", &nro1);
	printf("ingrese nro2: ");
	scanf("%d", &nro2);
	printf("ingrese nro3: ");
	scanf("%d", &nro3);
	printf("ingrese nro4: ");
	scanf("%d", &nro4);
	printf("ingrese nro5: ");
	scanf("%d", &nro5);
	res = nro1 + nro2 + nro3 + nro4 + nro5;
	printf("el resultado de %d + %d + %d + %d + %d = %d",nro1,nro2,nro3,nro4,nro5,res);
	return 0;
}
