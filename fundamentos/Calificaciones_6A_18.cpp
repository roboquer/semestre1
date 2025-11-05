/*
Nombre del programa:calificacion con vector y matriz.
Elaboro:Favian Orduña Suárez                      No. lista:18
Fecha:05/11/2025                                  No. version:1
Descripcion:Calificaciones de un salon
*/
#include<stdio.h>
main()
{
    int c,i,j,n,k,S=0;
    printf("Ingresa que opcion quiere\n1.- Calificacion de un solo parcial\n2.- Calificacion de 4 parciales");
    scanf("%i",&c);
    switch (c)
    {
    case 1:
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
        break;
    case 2:
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
            for(i=0;i<n;i++){ //alumno
                for(k=0;k<4;k++){ //parcial
                    for(j=0;j<4;j++){ //calificacion
                        do{
                            printf("Ingrese calificacion %i del parcial %i del alumno %i: ",j+1,k+1,i+1);
                            scanf("%i",&C[k][i][j]);
                            if(C[k][i][j]>=0 && C[k][i][j]<=100){
                                S=S+C[k][i][j];
                                if(j==3){
                                    P[i][k]=S/4;
                                    S=0;
                                }
                            }else{
                                printf("Ingrese una calificacion valida 0-100\n");
                            }
                        }while(C[k][i][j]>100 || C[k][i][j]<0);
                    }
                }
            }
            for(i=0;i<n;i++){
                for(k=0;k<4;k++){
                    printf("\nPromedio del alumno %i parcial %i: %.2f",i+1,k+1,P[i][k]);
                }
            }
        }else{
            printf("Ingrese una cantidad de alumnos valida");
        }
        break;
    default:
        printf("\nIngrese una opcion valida");
        break;
    }
}