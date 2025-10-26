/*
Nombre del programa: EjCl_SeriesFOR_6A_18
Elaboro: Favian Orduña Suárez			No Lista: 18
Fecha: 03/10/2025						No. Version: 1
Descripcion: Se quiere obtener el resultado de una secuencia elegida a una x magnitud de posiciones de la secuencia
*/

#include<stdio.h>
main()
{
	int op,n,i,S,impar;
	float R;
	R=0;
	printf("Eliges una opcion de secuencia:\n1) 1/1+1/2+...1/n\n2) Pi = 4-4/3+4/5-4/7...\n3) 1-1/2+1/4-1/6+1/8...\n");
	scanf("%i",&op);
	switch(op){
		case 1:
			printf("Ingresa la magnitud de la secuencia: ");
			scanf("%i",&n);
			if(n>=1){
				for(i=1;i<=n;i++){
					R = R+1.0/i;
				}
				printf("La suma es: %.2f",R);
			}else{
				printf("Ingresa una cantidad valida");
			}
			break;
		case 2:
			S = 3;
			printf("Ingresa la magnitud de la secuencia: ");
			scanf("%i",&n);
			if(n>=1){
				for(i=1;i<=n;i++){
					impar=i%2;
					if(i==1){
						R = R+4;
					}else if(impar==1){
						R = R+4.0/S;
						S = S+2;
					}else{
						R = R-4.0/S;
						S = S+2;
					}
				}
				printf("El valor de Pi con la magnitud ingresada es: %.2f",R);
			}else{
				printf("Ingresa una cantidad valida");
			}
			break;
		case 3:
			S = 2;
			printf("Ingresa la magnitud de la secuencia: ");
			scanf("%i",&n);
			if(n>=1){
				for(i=1;i<=n;i++){
					impar=i%2;
					if(i==1){
						R = R+1;
					}else if(impar==1){
						R = R+1.0/S;
						S = S+2;
					}else{
						R = R-1.0/S;
						S = S+2;
					}
				}
				printf("El valor de Pi con la magnitud ingresada es: %.2f",R);
			}else{
				printf("Ingresa una cantidad valida");
			}
			break;
		default:
			printf("Elige una opcion valida");
			break;
	}
}
