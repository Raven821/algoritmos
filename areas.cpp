#include <stdio.h>
#include <stdlib.h>


/* Programa switch-case Figuras geometricas */

int main(int argc, char** argv) 

{
	float pi=3.1416,a,r,l,b,h,bm,bme;
	int op;
	printf("Figuras Geometricas ver. 2\n");
	printf("1.Cuadrado\n");
	printf("2.Rectangulo\n");
	printf("3.Triangulo\n");
	printf("4.Circulo\n");
	printf("5.Trapecio\n");
	printf("Selecciona una opcion: ");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("****Cuadrado ****\n");
			printf("Dame el valor del lado: ");
			scanf("%f",&l);
			a=l*l;
			printf("El valor del area del cuadrado es:%.2f ",a);
			break;
			
		case 2:
			printf("***** Rectangulo ****\n ");
			printf("Dame la base : ");
			scanf("%f",&b);
			printf("Dame la altura : ");
			scanf("%f",&h);
			a=b*h;
			printf("El valor del area del cuadrado es:%.2f ",a);
			break;
		case 3:
			printf("***** Triangulo ****\n ");
			printf("Dame la base : ");
			scanf("%f",&b);
			printf("Dame la altura : ");
			scanf("%f",&h);
			a=b*h;
			printf("El valor del area del cuadrado es:%.2f ",a);
			break;
		case 4:
			printf("***** Circulo ****\n ");
			printf("Dame la base : ");
			scanf("%f",&b);
			printf("Dame la altura : ");
			scanf("%f",&h);
			a=b*h;
			printf("El valor del area del cuadrado es:%.2f ",a);
			break;
		case 5:
			printf("***** Trapecio ****\n ");
			printf("Dame la base mayor : ");
			scanf("%f",&bm);
			printf("Dame la base menor : ");
			scanf("%f",&bme);
			printf("Dame la altura : ");
			scanf("%f",&h);
			a=((bm*bme)*h)/2;
			printf("El valor del area del cuadrado es:%.2f ",a);
			break;
	}
			
	return 0;
}
