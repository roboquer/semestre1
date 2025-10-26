/*
Nombre del programa: Ej1p75N_6A_18
Elaboro: Favian Orduña Suárez			No Lista: 18
Fecha: 10/10/2025						No. Version: 1
Descripcion: Obtener el salario de un trabajador segun su tipo de trabajo y horas trabajadas
*/
#include<stdio.h>
main()
{
	int H,opc,P;
	printf("Ingrese horas trabajadas: ");
	scanf("%i",&H);
	if(H>0){
		printf("Ingrese el tipo de trabajo que realizo:\n1.- Intendencia\n2.- Asistente\n3.- Administrativo\n4.- Directivo\n5.- Gerente\n");
		scanf("%i",&opc);
		switch(opc){
			case 1:
				P=H*35;
				printf("Su pago es: %i",P);
				break;
			case 2:
				P=H*50;
				printf("Su pago es: %i",P);
				break;
			case 3:
				P=H*80;
				printf("Su pago es: %i",P);
				break;
			case 4:
				P=H*120;
				printf("Su pago es: %i",P);
				break;
			case 5:
				P=H*150;
				printf("Su pago es: %i",P);
				break;
			default:
				printf("Ingrese una opcion valida");
				break;
		}
	}else{
		printf("Ingrese una cantidad de horas valida");
	}
}
