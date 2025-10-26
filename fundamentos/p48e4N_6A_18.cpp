/*
Nombre del programa: Figuras areas y volumenes
Elaboro: Favian Orduña Suárez			No Lista: 18
Fecha: 14/09/2025						No. Version: 1
Descripcion: Se quiere saber el area y volumen de las siguientes figuras: cubo,
			paralelepipedo recto rectangular, cilindro recto circular y cono recto circular
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	float lc,lp1,lp2,lp3,rci,hci,rco,lco,hco,ac,aci,ap,aco,vc,vp,vci,vco;
	const float Pi = 3.14;
	printf("Ingresa uno de los lados del cubo: ");
	scanf("%f",&lc);
	printf("Ingresa los valores de los lados desiguales del paralelepipedo recto rectangular:\nLado 1: ");
	scanf("%f",&lp1);
	printf("Lado 2: ");
	scanf("%f",&lp2);
	printf("Lado 3: ");
	scanf("%f",&lp3);
	printf("Ingresa el radio del circulo base del cilindro: ");
	scanf("%f",&rci);
	printf("Ingresa la altura del cilindro: ");
	scanf("%f",&hci);
	printf("Ingresa el radio del cono: ");
	scanf("%f",&rco);
	printf("Ingresa la generatriz del cono: ");
	scanf("%f",&lco);
	printf("Ingresa la altura del cono: ");
	scanf("%f",&hco);
	ac = 6 * pow(lc,2);
	ap = 2*lp1*lp2+2*lp1*lp3+2*lp2*lp3;
	aci = 2*Pi*pow(rci,2)+2*Pi*rci*hci;
	aco = Pi*pow(rco,2)+Pi*rco*lco;
	vc = pow(lc,3);
	vp = lp1*lp2*lp3;
	vci = Pi*pow(rci,2)*hci;
	vco = 1.0/3.0*Pi*pow(rco,2)*hco;
	system("cls");
	printf("Las areas son:\nCubo: %.2f\nParalelepipedo recto rectangular: %.2f\nCilindro: %.2f\nCono: %.2f",ac,ap,aci,aco);
	printf("\n\nLos volumenes son:\nCubo: %.2f\nParalelepipedo recto rectangular: %.2f\nCilindro: %.2f\nCono: %.2f\n",vc,vp,vci,vco);
	system("PAUSE");
}
