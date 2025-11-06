/*
Nombre del programa:calificacion con vector y matriz.
Elaboro:Favian Orduña Suárez                      No. lista:18
Fecha:05/11/2025                                  No. version:1
Descripcion:Calificaciones de un salon
*/
#include<stdio.h>
#include<cstdlib>
#include<ctime>
main (){
	int i,j,k,fil1,colum1,fil2,colum2;
    srand(time(0));
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
            int M1[fil1][colum1],M2[fil2][colum2],R[colum1][fil2];
            for(i=0;i<fil1;i++){
                for(j=0;j<colum1;j++){
                    M1[i]
                }
            }
        }else{
            printf("No es posible realizar la multiplicacion");
        }
    }else{
        printf("El maximo de multiplicacion son de matrices 10X10");
    }
    
}