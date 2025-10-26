/*
Nombre del programa: EDoble_cal_6A_18
Elaboro: Favian Orduña Suárez		No.lista: 18
Fecha: 19/09/2025					Version: 1
Descripcion: Enseñar un mensaje dependiendo la calificacion 
*/

#include<stdio.h>
#include<stdlib.h>
main()
{
	int c;
	printf("Ingresa la calificacion: ");
	scanf("%i",&c);
	while(c<0 && c>100){
		printf("Ingresa una calificacion valida: ");
		scanf("%i",&c);
	}
	if(c>=70 && c<=100)
		printf("Felicidades\n");
	else
		printf("Estudia\n");
	system("PAUSE");
}
