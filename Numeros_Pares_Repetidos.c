#include<stdio.h>
/* Programa que da Numeos Pares*/
int r1=1;
int r2=1;
int a;

int main()
{
	printf("ingrese un numero:");
	scanf("%d",& a);
		  while(r1<=a)
	{
		if(r1%2==0)
		{
		 while(r2<=r1)
		 {
			printf("\n%d", r1);
			r2=r2+1;
		 }
		}
		else
			{
			
			printf("\n%d", r1);
			
		}
		
		r1=r1+1;
		r2=1;	
	}
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  

}
