/*
Nombre del programa: Arreglo N2 
Elaboro:Favian Orduña Suárez                      No. lista:18
Fecha:16/11/2025                                  No. version:1
Descripcion: Almacene en un arreglo, n elementos (máximo 30) e imprimir la suma: 
a) de números pares. 
b) de números impares. 
c) total de los elementos del arreglo.
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main()
{
    srand(time(NULL));
    int n,i,sp=0,si=0,st=0;
    printf("Ingresa cantidad de elementos 1-30: ");
    scanf("%i",&n);
    if(n>=1 && n<=30){
        int A[n];
        for(i=0;i<n;i++){
            A[i]=rand() % 21;
            if(A[i]%2==0){
                sp = sp + A[i];
            }else{
                si = si + A[i];
            }
            printf("%i ",A[i]);
        }
        st = sp + si;
        printf("\na) %i\nb) %i\nc) %i",sp,si,st);
    }else{
        printf("Cantidad invalida");
    }
}