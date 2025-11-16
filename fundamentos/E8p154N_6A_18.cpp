/*
Nombre del programa: Arreglo N3
Elaboro:Favian Orduña Suárez                      No. lista:18
Fecha:16/11/2025                                  No. version:1
Descripcion: Genere aleatoriamente un vector de tamaño 20 con números entre 0 y 150 y genere otras tres listas con 
los siguientes criterios:
a) Si los números están comprendidos entre 0 y 50 irán en la lista 1.
b) Si los números están comprendidos entre 51 y 100 irán en la lista 2.
c) Si los números son mayores a 101 irán en la lista 3.
Al final imprimir las cuatro listas.
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main()
{
    srand(time(NULL));
    int A[20],i,L1[20],c1=0,L2[20],c2=0,L3[20],c3=0;
    printf("Lista original:\n");
    for(i=0;i<20;i++){
        A[i]=rand() % 151;
        if(A[i]>=0 && A[i]<=50){
            L1[c1] = A[i];
            c1++;
        }else if(A[i]>=51 && A[i]<=100){
            L2[c2] = A[i];
            c2++;
        }else{
            L3[c3] = A[i];
            c3++;
        }
        printf("%i ",A[i]);
    }
    printf("\na) ");
    for(i=0;i<c1;i++){
        printf("%i ",L1[i]);
    }
    printf("\nb) ");
    for(i=0;i<c2;i++){
        printf("%i ",L2[i]);
    }
    printf("\nc) ");
    for(i=0;i<c3;i++){
        printf("%i ",L3[i]);
    }
}