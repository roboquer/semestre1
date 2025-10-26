/*
Nombre del programa: Formula general para ecuaciones cuadraticas
Elaboro: Favian Orduña Suárez			No Lista: 25
Fecha: 12/09/2025						No. Version: 1
Descripcion: Se obtienen los valores posibles que puede tener una ecuacion
			cuadratica
*/
#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,x1,x2;
	printf("Ingresa el valor de a: ");
	scanf("%f",&a);
	printf("Ingresa el valor de b: ");
	scanf("%f",&b);
	printf("Ingresa el valor de c: ");
	scanf("%f",&c);
	x1 = (-b+pow((pow(b,2)-4*a*c),0.5))/(2*a);
	x2 = (-b-pow((pow(b,2)-4*a*c),0.5))/(2*a);	
	printf("X1 = %.2f \nX2 = %.2f",x1,x2);
}
