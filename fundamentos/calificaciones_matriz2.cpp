/*
Nombre del programa:calificacion con vector y matriz.
Elaboro:Favian Orduña Suárez                      No. lista:18
Fecha:03/11/2025                                  No. version:1
Descripcion:Calificacione de un salon
*/
#include<stdio.h>
main()
{
    int i,j,n,k;
    printf("Ingrese cantidad de alumnos: ");
    scanf("%i",&n);
    if(n>0 && n<=30){
        int C[4][n][4];
		float P[n][4];
        for(i=0;i<n;i++){
            for(j=0;j<4;j++){
                P[i][j]=0;
            }
        }
        for(i=0;i<n;i++){
            for(k=0;k<4;k++){
                for(j=0;j<4;j++){
                    do{
                        printf("Ingrese calificacion %i del parcial %i del alumno %i: ",j+1,k+1,i+1);
                        scanf("%i",&C[i][j][k]);
                        if(C[i][j][k]>=0 && C[i][j][k]<=100){
                            P[i][k]=P[i][k]+C[i][j][k];
                            if(j==3){
                                P[i][k]=P[i][k]/4;
                            }
                        }else{
                            printf("Ingrese una calificacion valida 0-100\n");
                        }
                    }while(C[i][j][k]>100 || C[i][j][k]<0);
                }
            }
            for(i=0;i<n;i++){
                for(k=0;k<4;k++){
                    printf("\nPromedio del alumno %i parcial %i: %.2f",i+1,k+1,P[i][k]);
                }
            }
        }
    }else{
        printf("Ingrese una cantidad de alumnos valida");
    }
}