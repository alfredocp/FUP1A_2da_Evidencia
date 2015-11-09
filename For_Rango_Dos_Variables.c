#include <stdio.h>
/* Pograma de Dos variables para sacar un Rango */

	int n1,n2;
	int main()
	 {
	printf ("Pograma de Dos variables para sacar un Rango\n");
	printf("ingrese el primer numero:");
	scanf("%d",&n1);
	printf("ingrese el segundo numero:");
	scanf("%d",&n2);
	
	if(n1<n2){
		
		for(;n1<=n2;n1++){
			
			printf("\nes :%d\n",n1);
			
			
		}
		
	}else{
		
		for(;n1>=n2;n1--){
			
			printf("\nes :%d\n",n1);
			
		}		
		
	}
	
	return 0;
}
