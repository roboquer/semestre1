/*
Nombre del programa: EjClase ESelDob_6A_18
Elaboro: Favian Orduña Suárez		No.Lista: 18
Fecha: 25/09/2025					No.Version: 1
Descripcion: Se obtiene el area de una figura escogida con un menu
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	int opc;
	float BT,HT, r, LC, A;
	const float Pi = 3.14;
	printf("Menu de areas\n1.- Area triangulo\n2.- Area circulo\n3.- Area cuadrado\nOpcion elegida: ");
	scanf("%i",&opc);
	if(opc == 1)
	{
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
	}else if(opc == 2){
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
	}else if(opc == 3){
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
	}else{
		system("cls");
		printf("Ingresa una opcion valida\n");
		system("PAUSE");
	}
}
