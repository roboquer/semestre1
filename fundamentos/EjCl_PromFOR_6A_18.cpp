/*
Nombre del programa: EjCl_PromFOR_6A_18
Elaboro: Favian Orduña Suárez			No Lista: 18
Fecha: 01/10/2025						No. Version: 1
Descripcion: Se requiere saber el promedio de determinados grupos
*/
#include<stdio.h>
main()
{
	int G,C,A,i,j,k,cal;
	float PA,PG,SC,SPA;
	cal = 0;
	SC = 0;
	PA = 0;
	SPA = 0;
	PG = 0;
	printf("Ingresa la cantidad de grupos: ");
	scanf("%i",&G);
	if(G>=1){
		for(i=1;i<=G;i++){
			printf("Ingrese la cantidad de alumnos del grupo %i: ",i);
			scanf("%i",&A);
			if(A>=1){
				printf("Ingrese cantidad de calificaciones: ");
				scanf("%i",&C);
				if(C>=1){
					for(j=1;j<=A;j++){
						for(k=1;k<=C;k++){
							printf("Ingrese la calificacion %i del alumno %i: ",k,j);
							scanf("%i",&cal);
							if(cal>=0 && cal<=100){
								SC = SC + cal;
							}else{
								printf("Ingrese una calificacion valida (0-100)\n");
								k = k-1;
							}
						}
						PA = SC/C;
					}
					SPA = SPA + PA;
					PG = SPA / A;
					printf("El promedio del grupo %i es: %.2f\n",i,PG);
					SC = 0;
					PA = 0;
					SPA = 0;
					PG = 0;
				}else{
					printf("Ingrese una cantidad valida\n");
					i = i-1;
				}
			}else{
				printf("Ingrese una cantidad valida");
				i = i-1;
			}
		}
	}else{
		printf("Ingrese una cantidad valida");
	}
}
