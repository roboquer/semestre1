/*
Nombre del programa: EjCl_SeriesFOR_6A_18
Elaboro: Favian Orduña Suárez			No Lista: 18
Fecha: 07/10/2025						No. Version: 2
Descripcion: Se quiere obtener el resultado de una secuencia elegida a una x magnitud de posiciones de la secuencia hasta la suma o resta sea 0.01
*/

#include<stdio.h>
main()
{
	int op,i,S,impar;
	float R,secuencia;
	R=0;
	i=1;
	printf("Eliges una opcion de secuencia:\n1) 1/1+1/2+...1/n\n2) Pi = 4-4/3+4/5-4/7...\n3) 1-1/2+1/4-1/6+1/8...\n");
	scanf("%i",&op);
	switch(op){
		case 1:
			do{
				R = R+1.0/i;
				secuencia = 1.0/i;
				i=i+1;
			}while(secuencia>=0.01);
			printf("La suma es: %.2f con %i terminos",R,i);		
			break;
		case 2:
			S = 3;
			do{
				impar=i%2;
				if(i==1){
					secuencia=4;
					R = R+4;
				}else if(impar==1){
					secuencia=4.0/S;
					R = R+4.0/S;
					S = S+2;
				}else{
					secuencia=4.0/S;
					R = R-4.0/S;
					S = S+2;
				}
				i=i+1;
			}while(secuencia>=0.01);
			printf("El valor de Pi es: %.2f",R);
			break;
		case 3:
			S = 2;
			do{
				impar=i%2;
				if(i==1){
					R = R+1;
					secuencia=1;
				}else if(impar==1){
					secuencia = 1.0/S;
					R = R+1.0/S;
					S = S+2;	
				}else{
					secuencia = 1.0/S;
					R = R-1.0/S;
					S = S+2;
				}
				i++;
			}while(secuencia>=0.01);
			printf("El valor de la secuencia es: %f",R);
			break;
		default:
			printf("Elige una opcion valida");
			break;
	}
}
