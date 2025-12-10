#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int i,j;
void Fun1(int A[]);
void Fun2(void);
main(){
    srand(time(NULL));
    int opc,TR, T[12];
    printf("Ingrese que opcion quiere realizar\n1.- Toneladas mensuales\n2.- Numero x\n");
    scanf("%i",&opc);
    switch (opc){
        case 1:
            printf("\nIngrese el valor maximo del rango de valores 1-? ");
            scanf("%i",&TR);
            printf("\n");
            for(i=0;i<12;i++){
                T[i]=rand()%TR+1;
                printf("%i ",T[i]);
            }
            Fun1(T);
            break;
        case 2:
            Fun2();
            break;
        default:
            printf("Ingreso una opcion invalida");
            break;
    }
}
void Fun1(int A[]){
    int P,SP=0,C=A[0],CM=0,M=1;
    for(i=0;i<12;i++){
        SP=SP+A[i];
    }
    P=SP/12;
    printf("\nPromedio = %i",P);
    for(i=0;i<12;i++){
        if(A[i]>P){
            CM=CM+1;
        }
        if(A[i]>C){
            M=i+1;
            C=A[i];
        }
    }
    printf("\nCantidad de valores mayores al promedio: %i\nMes que mas produccion realizo: %i\nCantidad del mes de mas produccion: %i",CM,M,C);
}
void Fun2(void){
    int x,v=0,men=0,may=0,fil,col,cr;
    printf("\nIngrese cantidad de filas de la matriz: ");
    scanf("%i",&fil);
    printf("\nIngresa cantidad de columnas de la matriz: ");
    scanf("%i",&col);
    printf("\nIngresa valor maximo del rango de valores del random 1 - ? ");
    scanf("%i",&cr);
    printf("\nIngresa el valor de x: ");
    scanf("%i",&x);
    if(fil>0 && fil <6 && col>0 && col<6 && cr>0 && x>0){
        int M[fil][col], ME[fil*col],MA[fil*col];
        printf("\n");
        for(i=0;i<fil;i++){
            for(j=0;j<col;j++){
                M[i][j]=rand()%cr+1;
                printf("%i ",M[i][j]);
                if(M[i][j]==x){
                    v=v+1;
                }else if(M[i][j]<x){
                    men=men+1;
                    ME[men-1]=M[i][j];
                }else{
                    may=may+1;
                    MA[may-1]=M[i][j];
                }
            }
            printf("\n");
        }
        printf("\nVeces que se repite x: %i\nCantidad de valores menores: %i\nValores de los menores a x: ",v,men);
        for(i=0;i<men;i++){
            printf("%i ",ME[i]);
        }
        printf("\nCantidad de valores mayores a x: %i\nValores que son mayores a x: ",may);
        for(i=0;i<may;i++){
            printf("%i ",MA[i]);
        }
    }else{
        printf("\nUno de los datos ingresados no es posible");
    }
}