#include<stdio.h>
/*
Programa para Ordenar Cantidades de Numeros de Mayor a Menor
*/
main()
{//inicio main
	printf(" Introduce tu serie de Numeros \n");
	int a,b,c,x;
	printf ("a =");
	scanf ("%d",&a);
	printf ("b =");
	scanf ("%d",&b);
	printf ("c =");
	scanf ("%d",&c);
	if (a<b)
	{
		x = a;
		a = b;
		b = x;
	}
	if (b<c)
	{
		x = b;
		b = c;
		c = x;				
	}
	if (a<b)
	{
		x = a;
		a = b;
		b = x;
	}
	if (b<c)
	{
		x = b;
		b = c;
		c = x;
	}
		printf(" Los valores Ordenados de Mayor a Menor son: \n");
	printf ("%d\n",a);
	printf ("%d\n",b);
	printf ("%d\n",c);
	return 0; 
}// fin main
