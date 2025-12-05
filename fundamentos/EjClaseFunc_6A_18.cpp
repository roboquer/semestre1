#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void fun1(int a, int b, int c);
void fun2();
void fun3(int a[], int b);
int i,j;
main(){
    srand(time(NULL));
    int opc,n,n1,n2,n3;
    printf("Ingrese la opcion que quiere hacer:\n1.- Numero mayor\n2.- Promedio matriz\n3.- Metodo burbuja\n");
    scanf("%i",&opc);
    switch(opc){
        case 1:
            printf("\nIngrese el numero 1: ");
            scanf("%i",&n1);
            printf("\nIngrese el numero 2: ");
            scanf("%i",&n2);
            printf("\nIngrese el numero 3: ");
            scanf("%i",&n3);
            fun1(n1,n2,n3);
            break;
        case 2:
            fun2();
            break;
        case 3:
            printf("\nIngrese tamaño del vector (1-30): ");
            scanf("%i",&n);
            if(n>0 && n<31){
                int V[n];
                for(i=0;i<n;i++){
                    V[i]=rand() % 11;
                    printf("%i ",V[i]);
                }
                fun3(V,n);
            }else{
                printf("Tamaño invalido");
            }
            break;
        default:
            printf("\nIngreso una opcion invalida.");
            break;
    }
    return 0;
}
void fun1(int a,int b,int c){
    if(a>b){
        if(a>c){
            printf("\nEl mayor es: %i",a);
        }else{
            printf("\nEl mayor es: %i",c);
        }
    }else if(c>b){
        printf("\nEl mayor es: %i",c);
    }else{
        printf("EL mayor es: %i",b);
    }
}
void fun2(){
    int n,m,SP;
    float P;
    printf("\nIngrese tamaño de matriz\n\nfila: ");
    scanf("%i",&n);
    printf("\nColumnas: ");
    scanf("%i",&m);
    if(n>0 && n<11 && m>0 && m<11){
        int M[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                M[i][j]=rand()%11;
                SP=SP+M[i][j];
                printf("%i ",M[i][j]);
            }
            printf("\n");
        }
        P=float(SP)/float(n*m);
        printf("\nPromedio: %.2f",P);
    }else{
        printf("Ingreso uno de los tamaños erroneamente");
    }
}
void fun3(int a[],int t){
    int num;
    for(i=0;i<t;i++){
        for(j=0;j<t-i;j++){
            if(a[j]>a[j+1]){
                num=a[j];
                a[j]=a[j+1];
                a[j+1]=num;
            }
        }
    }
    printf("\n");
    for(i=0;i<t;i++){
        printf("%i ",a[i]);
    }
}
