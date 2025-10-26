/*
Nombre del programa: Ejercicio de examen
Elaboro: Favian Orduña Suárez			No Lista: 18
Fecha: 17/09/2025						No. Version: 1
Descripcion: Sacar el total a pagar a un cliente que puso dinero a inversion 
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	float IG, Din, PIn, IRet, TP;
	int Per;
	printf("Ingresa la cantidad de dinero a invertir: ");
	scanf("%f",&Din);
	printf("Ingresa el porcentaje de interes: ");
	scanf("%f",&PIn);
	printf("Ingresa el periodo de dias: ");
	scanf("%i",&Per);
	IG = (Din*PIn/100*Per)/365;
	IRet = IG * 0.045;
	TP = IG - IRet + Din;
	system("cls");
	printf("El dinero invertido es: %.2f\nEl interes ganado es: %.2f\nEl interes retenido es: %.2f\nEl total a pagar al cliente es: %.2f\n",Din,IG,IRet,TP);
	system("PAUSE");
}
