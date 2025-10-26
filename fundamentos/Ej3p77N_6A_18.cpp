/*
Nombre del programa: Ej3p77N_6A_18
Elaboro: Favian Orduña Suárez			No Lista: 18
Fecha: 10/10/2025						No. Version: 1
Descripcion: Cuanto debe pagar un cliente ya con descuento aplicado si aplica
*/
#include<stdio.h>
main()
{
	float C,P;
	int opc;
	printf("Ingrese su monto de compra: ");
	scanf("%f",&C);
	if(C>0){
		printf("Ingrese la bola de descuento:\n1.- Verde\n2.- Amarillo\n3.- Negro\n4.- Blanco\n");
		scanf("%i",&opc);
		switch(opc){
			case 1:
				P=C-C*0.2;
				printf("El cliente debe pagar: %.2f",P);
				break;
			case 2:
				P=C-C*0.25;
				printf("El cliente debe pagar: %.2f",P);
				break;
			case 3:
				P=C-C*0.3;
				printf("El cliente debe pagar: %.2f",P);
				break;
			case 4:
				P=C-C*0;
				printf("El cliente debe pagar: %.2f",P);
				break;
			default:
				printf("Ingrese una opcion valida");
				break;
		}
	}else{
		printf("Realice primero una compra o ingrese una cantidad valida");
	}
}
