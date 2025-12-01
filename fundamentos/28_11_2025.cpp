#include<stdio.h>
float r;
void Pa();
void Pb(float a, float h);
void Pc();
main(){
    int opc;
    float a,h;
    printf("Ingresa que quiere realizar:\n1.- Valor de la hipotenusa\n2.- Area del triangulo\n3.- Valor del tercer angulo\n");
    scanf("%f",&opc);
    switch (opc){
        case 1:
            Pa();
            break;
        case 2:
            printf("\nBase: ");
            scanf("%f",&a);
            printf("\nAltura: ");
            scanf("%f",&h);
            Pb(a,h);
            break;
        case 3:
            Pc();
            break;
        default:
            break;
    }
}
void Pa(){
    float a,b;
    printf("Cateto a (el vertical): ");
    scanf("%f",&a);
    printf("Cateto b (el horizontal): ");
    scanf("%f",&b);
    r=a/b;
    printf("Hipotenusa: %.2f",r);
}
void Pb(float a,float h){
    r=a*h/2;
    printf("Area: %.2f",r);
}
void Pc(){
    float a,b;
    printf("Angulo 1: ");
    scanf("%f",&a);
    printf("Angulo 2: ");
    scanf("%f",&b);
    r=180-a-b;
    printf("Angulo 3: %.2f",r);
}