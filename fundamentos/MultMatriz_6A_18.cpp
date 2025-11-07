/*
Nombre del programa:calificacion con vector y matriz.
Elaboro:Favian Orduña Suárez                      No. lista:18
Fecha:05/11/2025                                  No. version:1
Descripcion:Calificaciones de un salon
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main (){
	int i,j,k,fil1,colum1,fil2,colum2;
    srand(time(NULL));
	printf("Ingresa las filas de la primera matriz: \n");
	scanf( "%i",&fil1);
	printf("Ingresa las columnas de la primera matriz: \n");
	scanf( "%i",&colum1);
	printf("Ingresa las filas de la segunda matriz: \n");
	scanf( "%i",&fil2);
	printf("Ingresa las columnas de la segunda matriz: \n");
	scanf( "%i",&colum2);
    if(fil1<=10 && fil2<=10 && colum1<=10 && colum2<=10){
        if(colum1==fil2){
            int M1[fil1][colum1],M2[fil2][colum2],R[fil1][colum2];
            printf("Matriz 1:\n");
            for(i=0;i<fil1;i++){
                for(j=0;j<colum1;j++){
                    M1[i][j]=(rand() % 21)-10; //genera numero del 0-20 y luego le resta 10 para que igual pueda tener negativos [-10,10] seria el rango
                    printf("%i  ",M1[i][j]);
                }
                printf("\n");
            }
            printf("Matriz 2:\n");
            for(i=0;i<fil2;i++){
                for(j=0;j<colum2;j++){
                    M2[i][j]=(rand() % 101)-10;
                    printf("%i  ",M2[i][j]);
                }
                printf("\n");
            }
            printf("Matriz resultante: \n");
            for(i=0;i<fil1;i++){
                for(j=0;j<colum2;j++){
                    R[i][j]=0;
                    for(k=0;k<colum1;k++){
                        R[i][j]=M1[i][k]*M2[k][j]+R[i][j];
                    }
                    printf("%i  ",R[i][j]);
                }
                printf("\n");
            }
        }else{
            printf("No es posible realizar la multiplicacion");
        }
    }else{
        printf("El maximo de multiplicacion son de matrices 10X10");
    }
    
}