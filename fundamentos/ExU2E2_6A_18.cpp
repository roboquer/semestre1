/*
Titulo: Ejercicio 2 Examen
*/
#include<stdio.h>
main()
{
	int P, CM1, CM2, CM5, CM10, CM50, CM100, CM200, CM500, CM1000;
	printf("Ingrese el peso que logicamente debe ser mayor o igual a 0: ");
	scanf("%i",&P);
	CM1 = P/1;
	CM2 = P/2;
	CM5 = P/5;
	CM10 = P/10;
	CM50 = P/50;
	CM100 = P/100;
	CM200 = P/200;
	CM500 = P/500;
	CM1000 = P/1000;
	printf("La cantidad de pesas minimas por cada tipo de pesa es: ");
	printf("\n1 gr: %i",CM1);
	printf("\n2 gr: %i",CM2);
	printf("\n5 gr: %i",CM5);
	printf("\n10 gr: %i",CM10);
	printf("\n50 gr: %i",CM50);
	printf("\n100 gr: %i",CM100);
	printf("\n200 gr: %i",CM200);
	printf("\n500 gr: %i",CM500);
	printf("\n1000 gr: %i",CM1000);
	printf("\nSi aparece 0 es por que la pesa, pesa mas que el peso ingresado entonces no estaria equilibrada");
}
