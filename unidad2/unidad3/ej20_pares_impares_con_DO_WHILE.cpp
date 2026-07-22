/* ej 20 de 20 nros ingresados por teclado determinar cuales son pares e impares*/
#include<stdio.h>
#define CANTIDAD 2
int main(){
	int nro, par=0, impar=0;
	
	for ( int i = 0; i<CANTIDAD; i++){
	    printf("ingrese un nro: ");
	    scanf("%d", &nro);
	
			if (nro % 2==0 ){
				par++;
			}
		    	else {
		    	impar++;	
				}
    }
    
    printf("hay %d nros pares y %d nros impares", par, impar);
		return 0;
}


