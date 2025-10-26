/*
Nombre del programa: Ej1p77N_6A_18
Elaboro: Favian Orduña Suárez			No Lista: 18
Fecha: 10/10/2025						No. Version: 1
Descripcion: Mostrar en forma de texto el numero de la cara contraria a la salida en un dado
*/
#include<stdio.h>
main()
{
	int D;
	printf("Ingrese el lado del dado que se obtuvo: ");
	scanf("%i",&D);
	switch(D){
		case 1:
			printf("Seis");
			break;
		case 2:
			printf("Cinco");
			break;
		case 3:
			printf("Cuatro");
			break;
		case 4:
			printf("Tres");
			break;
		case 5:
			printf("Dos");
			break;
		case 6:
			printf("Uno");
			break;
		default:
			printf("Un dado no tiene ese numero");
	}
}
