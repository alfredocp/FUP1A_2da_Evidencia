#include<stdio.h>
/* Programa que repite numeros pares*/

	int n1;
	int i;
	int n;
	int main()
	{
	printf ("Programa que repite numeros pares\n");
	printf("ingrese un numero:");
	scanf("%d",&n1);
	for(i=1;i<=n1;i++){
		
		if(i%2==0){
			
			printf("es:");
			for(n=1;n<=i;n++){
				
				printf("%d",i);
				
				
				
			}         
			
		}else{        
			printf("\n");
			printf("es:%d",i);            
			printf("\n");
		}
	}
	
	return 0;
}
