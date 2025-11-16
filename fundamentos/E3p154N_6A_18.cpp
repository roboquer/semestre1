/*
Nombre del programa: Arreglo N1 
Elaboro:Favian Orduña Suárez                      No. lista:18
Fecha:16/11/2025                                  No. version:1
Descripcion: Almacene en un arreglo, 20 elementos de tipo entero e imprimir:
a) La suma de los elementos que ocupan posiciones pares.
b) El mayor de los elementos que ocupan posiciones impares.
c) La posición del mayor número par
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main()
{
    srand(time(NULL));
    int i,A[20],sp=0,si=0,pmp=0;
    for(i=0;i<20;i++){
        A[i]=rand() % 21;
        if((i+1)%2==0){
            sp = sp + A[i];
            if(pmp < A[i]){
                pmp = A[i];
            }
        }else{
            si = si + A[i];
        }
        printf("%i ",A[i]);
    }
    printf("\na) %i\nb) %i\nc) %i",sp,si,pmp);
}
