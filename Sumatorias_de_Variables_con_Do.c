#include <stdio.h>
/*Programa que hace sumas de vaiables_con "Do"*/

int main() 
{
	printf("programa para hacer sumatorias de dos Variables\n");
	int n,n2,i=1,resultado;
	
	printf("ingrese el primer numero:");
	scanf("%d",&n);
	printf("ingrese el segundo numero:");
	scanf("%d",&n2);
	
	do{
		
		resultado=resultado+n2;
		i=i+1;
		
	}while(i<=n);
	
	printf("el resultado es: %d",resultado);
	
	return 0;
}
