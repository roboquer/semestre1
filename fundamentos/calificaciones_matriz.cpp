/*
Nombre del programa:calificacion con vector y matriz.
Elaboro:Favian Orduña Suárez                      No. lista:18
Fecha:03/11/2025                                  No. version:1
Descripcion:Calificacione de un salon
*/
#include<stdio.h>
main()
{
    int i,j,n;
    printf("Ingrese cantidad de alumnos: ");
    scanf("%i",&n);
    if(n>0 && n<=30){
    	int C[n][4];
		float P[n];
        for(i=0;i<n;i++){
            P[i]=0;
        }
        for(i=0;i<n;i++){
            for(j=0;j<4;j++){
                do{
                    printf("Ingrese calificacion %i del alumno %i: ",j+1,i+1);
                    scanf("%i",&C[i][j]);
                    if(C[i][j]>=0 && C[i][j]<=100){
                        P[i]=P[i]+C[i][j];
                        if(j==3){
                        	P[i]=P[i]/4;
						}
                    }else{
                        printf("Ingrese una calificacion valida 0-100\n");
                    }
                }while(C[i][j]>100 || C[i][j]<0);
            }
        }
        for(i=0;i<n;i++){
            printf("\nPromedio del alumno %i: %.2f",i+1,P[i]);
        }
    }else{
        printf("Ingrese una cantidad de alumnos valida");
    }
}