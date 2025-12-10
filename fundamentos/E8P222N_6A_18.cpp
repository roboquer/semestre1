/*
Nombre del programa: Arbol de navidad
Elaboro:Favian Orduña Suárez                      No. lista:18
Fecha:05/12/2025                                  No. version:1
Descripcion:
Imprimir una flecha con asteriscos; utilizar dos funciones, una imprimirá el triángulo y la otra el
rectángulo. Preguntar la base del triángulo, la altura y ancho del rectángulo, por ejemplo si bas_triang =
5, h_rect 5 4 y anc_rect 5 3, se imprimirá:
*/
#include<stdio.h>
void triangulo(int a);
void rectangulo(int a, int b, int c);
int i,j;
main(){
    int bt,h,an;
    printf("Ingresa la base del triangulo: ");
    scanf("%i",&bt);
    printf("\nIngresa la altura del rectangulo: ");
    scanf("%i",&h);
    printf("Inregesa el ancho del rectangulo: ");
    scanf("%i",&an);
    if(bt>0 && h>0 && an>0){
        triangulo(bt);
        rectangulo(bt,h,an);
    }else{
        printf("Ingreso un valor invalido");
    }
}
void triangulo(int a){
    int anch=a*2-1,larfila,esp;
    for(i=1;i<=a;i++){
        larfila = i*2-1;
        esp = (anch-larfila)/2;
        for(j=0;j<esp;j++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("*");
            if(j<i-1){
                printf(" ");
            }
        }
        printf("\n");
    }
}
void rectangulo(int btr, int altc, int ancc){
    int largo = btr*2-1;
    int espacios = (largo-(ancc*2-1))/2;
    for (i = 0; i < altc; i++) {
        for(j = 0; j < espacios; j++){
            printf(" ");
        }
        for(j = 0; j < ancc; j++){
            printf("*");
            if(j < ancc - 1){
                printf(" ");
            }
        }
        printf("\n");
    }
}