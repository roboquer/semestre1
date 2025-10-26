/*
Nombre del programa: tabla de multiplicar
Elaboro: Favian Orduña Suárez			No Lista: 18
Fecha: 03/10/2025						No. Version: 2
Descripcion: mostrar una tabla de multiplicar 
*/
#include<stdio.h>
main()
{
	int i,j,TF;
	i=1;
	j=1;
	printf("Ingresa hasta que tabla de multiplicar quieres ver: ");
	scanf("%i",&TF); //Es la tabla hasta la que quiere mostrar
	if(TF>=1){ //comprueba que sea un numero valido
		while(i<=TF){//con while
			printf("Tabla de multiplicar %i: \n",i);
			while(j<=10){
				printf("%i X %i = %i\n",i,j,i*j);
				j=j+1;
			}
			j=1;
			i = 1+i;
		}
		i=1;
		do{//con do while
			printf("Tabla de multiplicar %i: \n",i);
			do{
				printf("%i X %i = %i\n",i,j,i*j);
				j=j+1;
			}while(j<=10);
			j=1;
			i = 1+i;
		}while(i<=TF);
		i=1;
		for(i=1;i<=TF;i++){//con for
			printf("Tabla de multiplicar %i: \n",i);
			for(j=1;j<=10;j++){
				printf("%i X %i = %i\n",i,j,i*j);
			}
		}
	}else{
		printf("Ingresa una tabla de multiplicar valida");
	}
}
