/*
Nombre del programa: Segundos
Elaboro: Favian Orduña Suárez			No Lista: 18
Fecha: 14/09/2025						No. Version: 1
Descripcion: Se quiere saber cuantos segundos hay en dias, horas, minutos, segundos
*/
#include<stdio.h>
main()
{
	int D,H,M,S,TS;
	printf("Ingresa la cantidad de dias: ");
	scanf("%i",&D);
	printf("Ingresa la cantidad de horas: ");
	scanf("%i",&H);
	printf("Ingresa la cantidad de minutos: ");
	scanf("%i",&M);
	printf("Ingresa la cantidad de segundos: ");
	scanf("%i",&S);
	TS = D*86400 + H*3600 + M*60 + S;
	printf("El total de segundos es: %i",TS);
}
