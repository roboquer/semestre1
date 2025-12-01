#include<stdio.h>
float n1,n2,r;
void suma();
void resta();
void multi();
void division();
main()
{
    int opc;
    printf("Ingresa el primer numero: ");
    scanf("%f",&n1);
    printf("Ingresa el segundo numero: ");
    scanf("%f",&n2);
    printf("\nQue operaion requiere?\n1.- Suma\n2.-Resta\n3.-Multiplicacio\n4.-Division\n");
    scanf("%i",&opc);
    switch(opc)
    {
    case 1:
        suma();
        break;
    case 2:
        resta();
        break;
    case 3:
        multi();
        break;
    case 4:
        division();
        break;
    default:
        printf("Elige una opcion valida");
        break;
    }
}
void suma(){
    r=n1+n2;
    printf("%.2f + %.2f = %.2f",n1,n2,r);
}
void resta(){
    r=n1-n2;
    printf("%.2f - %.2f = %.2f",n1,n2,r);
}
void multi(){
    r=n1*n2;
    printf("%.2f * %.2f = %.2f",n1,n2,r);
}
void division(){
    if(n2==0){
        printf("No se puede hacer division entre 0");
    }else{
        r=n1/n2;
        printf("%.2f / %.2f = %.2f",n1,n2,r);
    }
}