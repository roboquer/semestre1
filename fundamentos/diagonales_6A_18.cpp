/*
Nombre del programa: Diagonal de 1
Elaboro:Favian Orduña Suárez                      No. lista:18
Fecha:06/11/2025                                  No. version:1
Descripcion: Dibuja una linea diagonal de la dimension que se pida
*/
#include<stdio.h>
main()
{
    int i,j,D[5][5],m,n;
    printf("Diagonal principal:\n");
    for (i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(j==i){
                D[i][j]=1;
            }else{
                D[i][j]=0;
            }
            printf("%i  ",D[i][j]);
        }
        printf("\n");
    }
    printf("Diagonal inversa:\n");
    for (i=4;i>=0;i--){
        for(j=0;j<5;j++){
            if(j==i){
                D[i][j]=1;
            }else{
                D[i][j]=0;
            }
            printf("%i  ",D[i][j]);
        }
        printf("\n");
    }
    printf("Acabas de ver un ejemplo de una diagonal, ahora ingresa como la quieres ver donde \"m\" es la cantidad de filas y \"n\" la cantidad de columnas:\nm: ");
    scanf("%i",&m);
    printf("n: ");
    scanf("%i",&n);
    if((m<6 && n<6) && m==n){
        printf("\nDiagonal principal recortada:\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(j==i){
                    D[i][j]=1;
                }else{
                    D[i][j]=0;
                }
                printf("%i  ",D[i][j]);
            }
            printf("\n");
        }
        printf("Diagonal inversa recortada:\n");
        for(i=m-1;i>=0;i--){
            for(j=0;j<n;j++){
                if(j==i){
                    D[i][j]=1;
                }else{
                    D[i][j]=0;
                }
                printf("%i  ",D[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("\nIngreso unas dimensiones invalidas");
    }
}