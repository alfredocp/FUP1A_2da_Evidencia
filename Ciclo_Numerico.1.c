#include<stdio.h>
int i;
int final;
int main ()
{
	printf("Programa que hace un ciclo numerico\n");
	scanf("%d",&final);
	i=1;
	while(i<=final)
	{
		printf("%d\n",i);
		i=i+1;
	}
}

