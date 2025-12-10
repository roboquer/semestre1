/*
Nombre del programa: Numeros aleatorios y pares e impares
Elaboro:Favian Orduña Suárez                      No. lista:18
Fecha:05/12/2025                                  No. version:1
Descripcion:
Con ayuda de un menú y 5 funciones, realizar las siguientes tareas:
a) Llenar e imprimir un vector con números aleatorios entre 25 y 75.
b) Llenar las columnas impares de una matriz con números aleatorios entre 1 y 50.
c) Llenar las columnas pares de una matriz con números aleatorios entre 51 y 100.
d) Imprimir la matriz generada y los elementos de la matriz que estén contenidos en el vector
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int i,j,k;
void vector(int a);
void impar(int a, int b);
void par(int a, int b);
void mostrar(int a, int b, int c);
int V[50], M[50][50];
main(){
    srand(time(NULL));
    int n, m, nm, opc;
    printf("Ingresa tamaño del vector: ");
    scanf("%i",&n);
    printf("\nIngrese cantidad de filas de la matriz: ");
    scanf("%i",&m);
    printf("\nIngrese cantidad de columnas de la matriz: ");
    scanf("%i",&nm);
    if(n>0 && m>0 && nm>0 && n<51 && nm<51 && m<51){
        printf("\nIngrese que opcion requiere:\n1.- Vector\n2.- Columnas impares\n3.- Columnas pares\n4.- Imprimir matriz y valores de la matriz que hay en el vector\n");
        scanf("%i",&opc);
        switch(opc){
            case 1:
                vector(n);
                break;
            case 2:
                impar(m,nm);
                break;
            case 3:
                par(m,nm);
                break;
            case 4:
                vector(n);
                impar(m,nm);
                par(m,nm);
                mostrar(n,m,nm);
                break;
            default:
                break;
        }
    }else{
        printf("\nIngreso uno de los tamaños con un numero invalido");
    }
}
void vector(int t){
    printf("\nVector:\n");
    for(i=0;i<t;i++){
        V[i]=rand()%51+25;
        printf("%i ",V[i]);
    }
}
void impar(int f, int c){
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            if((j+1)%2!=0){
                M[i][j]=rand()%50+1;
            }
        }
    }
}
void par(int f, int c){
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            if((j+1)%2==0){
                M[i][j]=rand()%50+51;
            }
        }
    }
}
void mostrar(int t, int f, int c){
    printf("\nMatriz:\n");
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            printf("%i ",M[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            for(k=0;k<t;k++){
                if(M[i][j]==V[k]){
                    printf("\nEl valor %i coinciden en ambos",V[k]);
                }
            }
        }
    }
}