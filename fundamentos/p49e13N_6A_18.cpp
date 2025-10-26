/*
Nombre del programa: Area triangulo
Elaboro: Favian Orduña Suárez			No Lista: 18
Fecha: 14/09/2025						No. Version: 1
Descripcion: Se quiere saber el area de un triangulo con los vertices que se dan
			del plano cartesiano
*/
#include<stdio.h>
#include<math.h>
main()
{
	float x1,x2,x3,y1,y2,y3,a;
	printf("Ingresa el valor de x1: ");
	scanf("%f",&x1);
	printf("Ingresa el valor de x2: ");
	scanf("%f",&x2);
	printf("Ingresa el valor de x3: ");
	scanf("%f",&x3);
	printf("Ingresa el valor de y1: ");
	scanf("%f",&y1);
	printf("Ingresa el valor de y2: ");
	scanf("%f",&y2);
	printf("Ingresa el valor de y3: ");
	scanf("%f",&y3);
	a = abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2; //abs es para obtener el valor absoluto
	printf("\nEl area es: %.2f",a);
}
