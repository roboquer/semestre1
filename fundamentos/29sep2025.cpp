#include<stdio.h>
main()
{
	int N, I, C,SC;
	float P;
	SC = 0;
	printf("Ingresa la cantidad de alumnos: ");
	scanf("%i",&N);
	if(N>0){
		for(I=1;I<=N;I++){
			printf("Ingresa la calificacion %i: ",I);
			scanf("%i",&C);
			if(C>=0 && C<=10){
				SC = SC + C;
			}else{
				printf("\nIngresa una calificacion valida (0-10)");
				I = I-1;
			}
		}
		P = SC / N;
		printf("El promedio de las %i calificaciones es: %.2f",N,P);
	}else{
		printf("Ingresa una cantidad de alumnos adecuada (N>=1)");
	}
}
