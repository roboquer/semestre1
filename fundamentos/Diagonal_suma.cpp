/*
Nombre del programa: Diagonal de n * m y sumatoria de su diagonales
Elaboro:Favian Orduña Suárez                      No. lista:18
Fecha:06/11/2025                                  No. version:1
Descripcion: Dibuja una linea diagonal de la dimension que se pida
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
    srand(time(NULL));
    int i,j,t,sm=0;
    printf("Ingresa de que tamaño quieres el lado del cuadrado (Maximo de 10x10) 1-10: ");
    scanf("%i",&t);
    if(t>0 && t<11){
        int A[t][t],DP[t],DI[t];
        for(i=0;i<t;i++){
            for(j=0;j<t;j++){
                A[i][j]=rand()%11;
                printf("%i  ",A[i][j]);
                if(j==i){
                    DP[i]=A[i][j];
                }
                if(i+j+1==t){
                    DI[i]=A[i][j];
                }
            }
            printf("\n");
        }
        printf("\nDP: ");
        for (i = 0; i < t; i++){
            printf("%i ",DP[i]);
            sm=sm+DP[i];
        }
        printf("\nSuma: %i\n",sm);
        sm=0;
        printf("\nDI: ");
        for (i = 0; i < t; i++){
            printf("%i ",DI[i]);
            sm=sm+DI[i];
        }
        printf("\nSuma: %i",sm);
    }else{
        printf("Ingreso datos erroneos");
    }
}