/*
Nombre del programa: Area del triangulo
Elaboro: Favian Ordu�a Su�rez			No Lista: 25
Fecha: 12/09/2025						No. Version: 1
Descripcion: Se realiza la area de un triangulo
*/

#include<stdio.h>
main()
{	
       float b, h, a;
       printf("Ingrese la base: ");
       scanf("%f", &b);
       printf("Ingrese la altura: ");
       scanf("%f", &h);
       a = b * h / 2;
       printf("El area del triangulo es: %.2f", a);      
}
