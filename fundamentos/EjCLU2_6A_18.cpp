/*
Nombre del programa: Promedio
Elaboro: Favian Orduña Suárez			No Lista: 18
Fecha: 17/09/2025						No. Version: 1
Descripcion: realizar un programa que obtenga el promedio de 
			calificaciones de 5 estudiantes
*/
#include<stdio.h>
main()
{
	float c1,c2,c3,c4,c5,promedio;
	printf("Ingresa las cinco calificaciones del alumno (0-10): \n");
	printf("calificacion 1: ");
	scanf("%f",&c1);
	printf("calificacion 2: ");
	scanf("%f",&c2);
	printf("calificacion 3: ");
	scanf("%f",&c3);
	printf("calificacion 4: ");
	scanf("%f",&c4);
	printf("calificacion 5: ");
	scanf("%f",&c5);
	promedio = (c1+c2+c3+c4+c5)/5;
	printf("El promedio entre las cinco calificaciones es: %.1f",promedio);
}
