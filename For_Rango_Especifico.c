#include <stdio.h>
/* Programa para imprimir un rango en especifico*/

	int n;
	int i;
	int main() 
	{
	printf("Programa para imprimir un rango en especifico\n");
	printf("ingrese el numero hasta el cual quiere imprimir:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
			
		printf("\n el numero es : %d\n",i);
		
	}

	return 0;
}

