/*
Nombre del programa: movimiento uniformemente acelerado
Elaboro: Favian Orduña Suárez			No Lista: 18
Fecha: 14/09/2025						No. Version: 1
Descripcion: Se requiere saber el desplazamiento utilizando la formula del movimiento
			uniformemente acelerado
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	float Si, Vi, t, a, s;
	printf("Ingresa el valor del desplazamiento inicial (m): ");
	scanf("%f",&Si);
	printf("Ingresa el valor de la velocidad inicial (m/s): ");
	scanf("%f",&Vi);
	printf("Ingresa el tiempo que paso (seg): ");
	scanf("%f",&t);
	printf("Ingresa la aceleracion que tomo (m/s^2): ");
	scanf("%f",&a);
	s = Si+Vi*t+(1.0/2.0*a*pow(t,2));
	printf("\nEl desplazamiento total es: %.2f m \n\n",s);
	system("PAUSE");
}
