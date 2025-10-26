/*
Nombre del programa: sacar el volumen de la tierra
Elaboro: Favian Orduña Suárez			No Lista: 25
Fecha: 12/09/2025						No. Version: 1
Descripcion: Se obtiene el volumen de la tierra
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	const float RadEc = 6378.137, RadPo = 6356.752;
	float Pi, Vol;
	printf("Ingrese el valor que quiere darle a Pi: ");
	scanf("%f",&Pi);
	Vol = 4/3*Pi*pow(RadEc,2)*RadPo;
	printf("El volumen de la Tierra es: %.3f Km3 \n",Vol);
	system("PAUSE");
}
