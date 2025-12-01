/*
Titulo: Examen ejercicio 1
*/
#include<stdio.h>
main()
{
	float D, Va1, Va2, Va3, Va4, Va5, Va6, Da1,Da2,Da3,Da4,Da5,Da6;
	D = (20000-2000)/6;
	Da1 = D;
	Da2 = D*2;
	Da3 = D*3;
	Da4 = D*4;
	Da5 = D*5;
	Da6 = D*6;
	Va1 = 20000 - Da1;
	Va2 = 20000 - Da2;
	Va3 = 20000 - Da3;
	Va4 = 20000 - Da4;
	Va5 = 20000 - Da5;
	Va6 = 20000 - Da6;
	printf("El valor del carro por cada año es:\nAño 1: %.2f\nAño 2: %.2f\nAño 3: %.2f\nAño 4: %.2f\nAño 5: %.2f\nAño 6: %.2f",Va1,Va2,Va3,Va4,Va5,Va6);
	printf("\nLa depreciacion acumulada del carro por cada año es:\nAño 1: %.2f\nAño 2: %.2f\nAño 3: %.2f\nAño 4: %.2f\nAño 5: %.2f\nAño 6: %.2f",Da1,Da2,Da3,Da4,Da5,Da6);
}
