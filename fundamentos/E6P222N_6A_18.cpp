/*
Nombre del programa: Pares, impares y maximo
Elaboro:Favian Orduña Suárez                      No. lista:18
Fecha:05/12/2025                                  No. version:1
Descripcion:
Leer n datos para un vector de números reales, utilizando funciones para calcular la cantidad de: valores
impares, valores pares y veces que se repite el valor máximo del arreglo.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int i;
void par(int a[],int t);
void impar(int a[],int t);
void max(int a[],int t);
main(){
    srand(time(NULL));
    int n;
    printf("Ingresa cantidad de terminos: ");
    scanf("%i",&n);
    if(n>0){
        int V[n];
        printf("\n");
        for(i=0;i<n;i++){
            V[i]=rand()%10+1;
            printf("%i ",V[i]);
        }
        printf("\n");
        par(V,n);
        printf("\n");
        impar(V,n);
        printf("\n");
        max(V,n);
    }else{
        printf("Ingreso una cantidad invalida");
    }
}
void par(int a[], int t){
    int c=0;
    for(i=0;i<t;i++){
        if(a[i]%2==0){
            c=c+1;
        }
    }
    printf("Cantidad de pares: %i",c);
}
void impar(int a[], int t){
    int c=0;
    for(i=0;i<t;i++){
        if(a[i]%2!=0){
            c=c+1;
        }
    }
    printf("Cantidad de impares: %i",c);
}
void max(int a[], int t){
    int c=0,max=a[0];
    for(i=0;i<t;i++){
        if(max==a[i]){
            c=c+1;
        }else if(a[i]>max){
            max=a[i];
            c=1;
        }
    }
    printf("Cantidad de vecces que aparece el numero mayor (%i): %i",max,c);
}