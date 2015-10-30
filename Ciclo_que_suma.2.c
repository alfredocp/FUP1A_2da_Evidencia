#include<stdio.h>
/*
Programa para introducir un numero y dar la suma de ellos
*/
int final,i,resultado;
int main()	
{
	printf("Programa para introducir un numero y dar la suma de ellos\n");
	printf("Introducir un Nummero:\n");
	scanf("%d",&final);
	i=1;
	
	while(i<=final)
	{
		printf("%d\n", i);
		resultado=resultado+i;
		i=i+1;
	}
	
	printf("%d", resultado);
}
