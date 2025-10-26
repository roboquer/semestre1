/*
Nombre del programa: EjClase Switch_6A_18
Elaboro: Favian Orduña Suárez		No.Lista: 18
Fecha: 24/09/2025					No.Version: 1
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	int opc;
	float BT,HT, r, LC, A;
	const float Pi = 3.14;
		system("cls");
		printf("Menu de areas\n1.- Area triangulo\n2.- Area circulo\n3.- Area cuadrado\n4.- Salir\nOpcion elegida: ");
		scanf("%i",&opc);
		switch(opc){
			case 1:
				system("cls");
				printf("Ingresa la base del triangulo: ");
				scanf("%f",&BT);
				printf("Ingresa la altura del triangulo: ");
				scanf("%f",&HT);
				if(BT>0 && HT>0){
					A = BT*HT/2;
					printf("El area del triangulo es: %.2f\n",A);
					system("PAUSE");
				}else{
					printf("Tus valores deben ser mayores a 0 para que sea un figura real\n");
					system("PAUSE");
				}
				break;
			case 2:
				system("cls");
				printf("Ingresa el radio del circulo: ");
				scanf("%f",&r);
				if(r>0){
					A = Pi*pow(r,2);
					printf("El area del circulo es: %.2f\n",A);
					system("PAUSE");
				}else{
					printf("Tus valores deben ser mayores a 0 para que sea un figura real\n");
					system("PAUSE");
				}
				break;
			case 3:
				system("cls");
				printf("Ingresa un lado del cuadrado: ");
				scanf("%f",&LC);
				if(LC>0){
					A = pow(LC,2);
					printf("El area del circulo es: %.2f\n",A);
					system("PAUSE");
				}else{
					printf("Tus valores deben ser mayores a 0 para que sea un figura real\n");
					system("PAUSE");
				}
				break;
			case 4:
				system("cls");
				printf("Adios");
				break;
			default:
				system("cls");
				printf("Ingreso una opcion no valida\n");
				system("PAUSE");
		}
}
