#include <stdio.h>
int menu;
int producto;
int piezas;
int resultado;
int main ()
{
	printf ("Que opcion Prefieres, elige una\n");
	printf ("seguun tu respuesta:\n");
	printf ("1= Productos\n");
	printf ("2= Ver ganancias\n");
	scanf ("%d",&menu);
	switch (menu)
	{
		case 1:
			printf ("Productos\n");
			printf ("Productos a vender:\n");
			printf ("Ingrese el numero de Productos que quiera comprar\n");
			printf ("1.- $40.00-----Caja de Cigarros\n");
			printf ("2.- $10.00-----Galletas\n");
			printf ("3.- $8.00 -----Barritas\n");
			printf ("4.- $2.00 -----Chicle\n");
			printf ("5.- $12.00-----Refresco\n");
			printf ("\nIngrese el numero de Producto\n");
			scanf ("%d",&producto);
			
			if(producto==1){
				printf ("Inrese la cantidad que va adquirir\n");
				scanf ("%d",&piezas);
				resultado =9*piezas;
				printf ("El total de %d Caja de Ciarros que llevara es igual a %d\n",piezas,resultado);
			}
			if(producto==2){
				printf ("Inrese la cantidad que va adquirir\n");
				scanf ("%d",&piezas);
				resultado =6*piezas;
				printf ("El total de %d Galletas que llevara es igual a %d\n",piezas,resultado);
			}
			if(producto==3){
				printf ("Inrese la cantidad que va adquirir\n");
				scanf ("%d",&piezas);
				resultado =10*piezas;
				printf ("El total de %d Barritas que llevara es igual a %d\n",piezas,resultado);
			}
			if(producto==4){
				printf ("Inrese la cantidad que va adquirir\n");
				scanf ("%d",&piezas);
				resultado =20*piezas;
				printf ("El total de %d chicle que llevara es igual a %d\n",piezas,resultado);
			}
			if(producto==5){
				printf ("Inrese la cantidad que va adquirir\n");
				scanf ("%d",&piezas);
				resultado =9*piezas;
				printf ("El total de %d Refesco que llevara es igual a %d\n",piezas,resultado);
			}
			else 
			printf ("E-R-R-O-R. NO TENEMOS MUCHOS PRODUCTOS\n");
			break;
			
			case 2:
				printf ("\nEl todal de la venta del dia de HOY es %d pesos\n",resultado);
				break;
				
				default:
				printf ("\n\E-R-R-O-Rn");
	}
	return main();
}

