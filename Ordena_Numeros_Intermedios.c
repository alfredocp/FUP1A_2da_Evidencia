#include <stdio.h>


int main()
{
	
	int n1,n2;
	
	printf("ingrese el primer numero:");
	scanf("%d",&n1);
	printf("ingrese el segundo numero:");
	scanf("%d",&n2);
	
	if(n1<n2)
	{
		
	    do{
			
			printf("\nes :%d\n",n1);
			n1=n1+1;
			
		}while(n1<=n2);
		
	}else{
		
		do{
			
			printf("\nes :%d\n",n1);
			n1=n1-1;
			
		}while(n1>=n2);
		

	}
	
	return 0;
}

