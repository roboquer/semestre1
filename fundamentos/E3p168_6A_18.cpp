/*
Nombre del programa: ejercicio 3
Elaboro:Favian Orduña Suárez                      No. lista:18
Fecha:17/11/2025                                  No. version:1
Descripcion:
Almacene los elementos de una matriz mxn (máximo 10x10) e imprimir : 
a) Suma de los elementos. 
b) Promedio de los elementos. 
c) Elemento que más se repite (moda). 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
    srand(time(NULL));
    int n,m,i,j,st=0,moda=0,CANT[11]={0},Grande=0;
    float pm;
    printf("Ingrese cantidad de filas 1-10: ");
    scanf("%i",&m);
    printf("Ingrese cantidad de columnas 1-10: ");
    scanf("%i",&n);
    if(n < 11 && m < 11 && n > 0 && m > 0){
        int A[m][n];
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                A[i][j]= rand() % 11;
                printf("%i ",A[i][j]);
                st = st + A[i][j];
                CANT[A[i][j]]=CANT[A[i][j]]+1;
            }
            printf("\n");
        }
        for(i=0;i<11;i++){
            if(CANT[i]>Grande){
                Grande=CANT[i];
                moda=i;
            }
        }
        pm = (float)st / (float)(m*n);
        printf("\na) %i\nb) %.2f\nc) %i",st,pm,moda);
    }else{
        printf("Ingreso una cantidad invalida");
    }
}