#include <stdio.h>
/* Programa para hacer suma sucesiva*/

	int n;
	int i;
	int suma;
	int main() 
	
	{
	printf("Programa para hacer suma sucesiva\n");
	printf("ingrese el numero hasta el cual quiere imprimir:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
			
		printf("\n el numero es : %d\n",i);
		suma=suma+i;	
		
	}
	
	printf("\n la suma: %d\n",suma);
	return 0;
}
