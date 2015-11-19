/*
programa para sacar el numero mayor de las calificaciones.
*/
#include<stdio.h>

int mayor;
int posMayor;
int arreglo [10];
int moda  [10];
float promedio=0;
int i;
int main()
{
	for(i=0;i<10;i++)
	{
    	printf("Tu calificacion es : ");
   	 	scanf("%d", &arreglo [i]);
    	promedio=promedio+arreglo [i];
	}

	promedio=promedio/10;
	printf("El promedio es: %f", promedio);

	for(i=0;i<10;i++)
	{
    	moda[i]=0;
	}
	
	for(i=0;i<10;i++)
	{
		
    	moda[arreglo[i]-1]++;
	}
	
	
	mayor=0;
	for(i=0;i<10;i++)
	{
		if(moda[i]>mayor)
		{
			mayor=moda[i];
			posMayor=i;
		}
	}
	
	printf("\nLa moda es %d",posMayor+1);	
	

}


	


