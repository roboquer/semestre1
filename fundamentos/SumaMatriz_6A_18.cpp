#include<stdio.h>
main()
{
    int f1,c1,f2,c2,i,j;
    printf("Ingresa cantidad de filas de la primera matriz: ");
    scanf("%i",&f1);
    printf("Ingresa la cantidad de columnas de la primera matriz: ");
    scanf("%i",&c1);
    printf("Ingresa la cantidad de filas de la segunda matriz: ");
    scanf("%i",&f2);
    printf("Ingrese la cantidad de columnas de la segunda matriz: ");
    scanf("%i",&c2);
    if(f1 == f2 && c1 == c2){
        int m1[f1][c1], m2[f2][c2], re[f1][c1];
        for(i=0;i<f1;i++){
            for(j=0;j<c1;j++){
                printf("Ingresa el valor de la fila %i y columna %i de la matriz 1: ",i,j);
                scanf("%i",&m1[i][j]);
            }
        }
        for(i=0;i<f1;i++){
            for(j=0;j<c1;j++){
                printf("Ingresa el valor de la fila %i y columna %i de la matriz 2: ",i,j);
                scanf("%i",&m2[i][j]);
            }
        }
        for(i=0;i<f1;i++){
            for(j=0;j<c1;j++){
                re[i][j] = m1[i][j] + m2[i][j];
            }
        }
        printf("\nResultado\n");
        for(i=0;i<f1;i++){
            for(j=0;j<c1;j++){
                printf("%i  ",re[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("No se puede realizar la suma de matricez por los tamaños de estas.");
    }
}