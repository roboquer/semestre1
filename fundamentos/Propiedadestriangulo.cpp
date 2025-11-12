/*
Nombre del programa: Propiedades de una matriz
Elaboro:Favian Orduña Suárez                      No. lista:18
Fecha:10/11/2025                                  No. version:1
Descripcion:
Leer los elementos de una matriz cuadrada (máximo 15315) y determinar si la matriz cumple con
alguna de las siguientes propiedades:
a) Matriz simétrica (si los valores de cada fila son iguales a los de su columna correspondiente)
b) Matriz identidad (aij 5 0 si i fi j y aij 5 1 si i 5 j)
c) Matriz triangular superior (todos los elementos por debajo de la diagonal son ceros)
d) Matriz triangular inferior (todos los elementos por encima de la diagonal son ceros) 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
    srand(time(NULL));
    int n,k,i=0,j=0,v1=1,v2=1,v3=1,v4=1;
    printf("Ingresa de que tamaño quieres la matriz cuadrada 1-15: ");
    scanf("%i",&n);
    if(n>0 || n<16){
        int M[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                M[i][j]=rand() % 2;
                printf("%i  ",M[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(M[i][j]!=M[j][i]){
                    v1=0;
                }
                if(i==j && M[i][j]==0){
                    v2=0;
                }
                if(i==j && i>=1){
                    for(k=i;k>0;k--){
                        if(M[i-k][j]==1){
                            v3=0;
                        }
                    }
                }
                if(i==j && j>=1){
                    for(k=j;k>0;k--){
                        if(M[i][j-k]==1){
                            v4=0;
                        }
                    }
                }
            }
        }
        if(v1==1){
            printf("Es simetrica\n");
        }else{
            printf("No es simetrica\n");
        }
        if(v2==1){
            printf("Cumple la identidad\n");
        }else{
            printf("No cumple la identidad\n");
        }
        if(v3==1){
            printf("Tiene matriz triangular inferior\n");
        }else{
            printf("No tiene matriz triangular inferior\n");
        }
        if(v4==1){
            printf("Tiene matriz triangular superior\n");
        }else{
            printf("No tiene matriz triangular superior\n");
        }
    }else{
        printf("Ingrese un tamaño valido");
    }
}