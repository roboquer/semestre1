/*
Nombre del programa: Ejercicio 9
Elaboro:Favian Orduña Suárez                      No. lista:18
Fecha:17/11/2025                                  No. version:1
Descripcion:
Leer los elementos de una matriz nxm (máximo 10x10) y generar un vector que almacene el máximo 
elemento de cada columna de la matriz. Imprimir dicho vector.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
    srand(time(NULL));
    int n,m,i,j,may;
    printf("Ingrese cantidad de fila: ");
    scanf("%i",&n);
    printf("Ingrese cantidad de columnas: ");
    scanf("%i",&m);
    if(n<11 && m<11 && n>0 && m>0){
        int A[n][m],V[m]={0};
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                A[i][j]=rand() % 11;
                may=A[i][j];
                if(may>V[j]){
                    V[j]=may;
                }
                printf("%i ",A[i][j]);
            }
            printf("\n");
        }
        printf("\nNumero mayor de cada fila:\n");
        for(i=0;i<m;i++){
            printf("%i ",V[i]);
        }
    }else{
        printf("Ingreso cantidades invalidas");
    }
}