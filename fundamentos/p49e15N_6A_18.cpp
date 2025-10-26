/*
Nombre del programa: Triangulo equilatero
Elaboro: Favian Orduña Suárez			No Lista: 18
Fecha: 14/09/2025						No. Version: 1
Descripcion: Se quiere saber el area, perimetro y altura sabiendo la medida del
			lado de un triangulo equilatero
*/
#include<stdio.h>
#include<math.h>
main()
{
	float L, P, H, A;
	printf("Ingresa el valor de un lado del triangulo: ");
	scanf("%f",&L);
	P = L*3; //Perimetro
	H = L*sqrt(3)/2; //sqrt es raiz cuadrada y esta formula es para la altura
	A = L*H/2; //Area
	printf("Los datos del triangulo son:\nPerimetro: %.2f\nAltura: %.2f\nArea: %.2f",P,H,A);
}
