/*
Nombre del programa: 3.4 Repetitivas_6A_18
Elaboro: Favian Orduña Suárez			No Lista: 18
Fecha: 10/10/2025						No. Version: 1
Descripcion: Son 3 programas donde podra acceder al que quieras dependiendo cual eligas desde el menu
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int opc1,opc2,lac,lan,lec;
	float subtotal, total, DAP;
	do{
		system("cls");
		printf("Ingresa que tipo de recibo es:\n1.- Domestico\n2.- Comercial\n3.- Salir\n");
		scanf("%i",&opc1);
		switch(opc1){
			case 1:
				printf("Ingrese la lectura actual: ");
				scanf("%i",&lac);
				printf("Ingrese la lectura anterior: ");
				scanf("%i",&lan);
				lec = lac-lan;
				if(lec<0){
					printf("La lectura anterior debe ser menor a la lectura actual\n");
				}else{
					if(lec<50){//la toma es bimestral entonces si es menor a 50 entonces se aplicaria el pago minimo mensual
						subtotal=50*1.099;//Es el pago minimo que al mes es 25 pero como es bimestral entonces son 50
					}else if(lec<=150 && lec>=50){
						subtotal=lec*1.099;	
					}else if(lec>150 && lec<=280){
						subtotal=150*1.099+(lec-150)*1.335;
					}else if(lec>280){
						subtotal=150*1.099+130*1.335+(lec-280)*3.903;
					}
					DAP=141.42*2;
					total=subtotal+subtotal*.16+DAP;
					printf("\n	Desglose de pago\n\nCargo por consumo (kWh)		$%.2f\nIVA 16%%				$%.2f\nDAP				$%.2f",subtotal,subtotal*.16,DAP);
					printf("\n\nTotal:				$%.2f\n\n",total);
				}
				system("PAUSE");
				break;
			case 2:
				printf("Ingrese su categoria\n1.-PDBT\n2.-GDBT\n");
				scanf("%i",&opc2);
				switch(opc2){
					case 1:
						printf("Ingrese la lectura actual: ");
						scanf("%i",&lac);
						printf("Ingrese la lectura anterior: ");
						scanf("%i",&lan);
						lec = lac-lan;
						if(lec<0){
							printf("La lectura anterior debe ser menor a la lectura actual\n");
						}else{
							subtotal = lec*4.162;
							DAP = 36.89;
							total = subtotal+subtotal*.16+DAP;
							printf("\n	Desglose de pago\n\nCargo por consumo (kWh)		$%.2f\nIVA 16%%				$%.2f\nCargo fijo			$%.2f",subtotal,subtotal*.16,DAP);
							printf("\n\nTotal:				$%.2f\n\n",total);
						}
						break;
					case 2:
						printf("Ingrese la lectura actual: ");
						scanf("%i",&lac);
						printf("Ingrese la lectura anterior: ");
						scanf("%i",&lan);
						lec = lac-lan;
						if(lec<0){
							printf("La lectura anterior debe ser menor a la lectura actual\n");
						}else{
							subtotal = lec*2.036;
							DAP = 368.95;
							total = subtotal+subtotal*.16+DAP;
							printf("\n	Desglose de pago\n\nCargo por consumo (kWh)		$%.2f\nIVA 16%%				$%.2f\nCargo fijo			$%.2f",subtotal,subtotal*.16,DAP);
							printf("\n\nTotal:				$%.2f\n\n",total);
						}
						break;
					default:
						printf("Ingrese una opcion valida\n");
						break;
				}
				system("PAUSE");
				break;
			case 3:
				break;
			default:
				printf("Ingrese una opcion valida");
				break;
		}
	}while(opc1!=3);
}
