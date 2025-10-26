/*
Nombre del programa: Valores de x e y
Elaboro: Favian Orduña Suárez			No Lista: 18
Fecha: 14/09/2025						No. Version: 1
Descripcion: Se lee un sistema de ecuaciones lineales, e imprimir su solucion
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	float a,b,c,d,e,f,x,y;
	printf("Si tus ecuaciones estan escritas de la siguiente forma:\nax+by=c\ndx+ey=f\nProsigamos para encontrar los valores de X e Y\n");
	system("PAUSE");
	system("cls");
	printf("Ingresa el valor de a: ");
	scanf("%f",&a);
	printf("Ingresa el valor de b: ");
	scanf("%f",&b);
	printf("Ingresa el valor de c: ");
	scanf("%f",&c);
	printf("Ingresa el valor de d: ");
	scanf("%f",&d);
	printf("Ingresa el valor de e: ");
	scanf("%f",&e);
	printf("Ingresa el valor de f: ");
	scanf("%f",&f);
	x = (c*e-b*f)/(a*e-b*d);
	y = (a*f-c*d)/(a*e-b*d);
	system("cls");
	printf("Los valores son:\nX = %.2f\nY = %.2f\n",x,y);
	system("PAUSE");
}
