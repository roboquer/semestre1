#include<stdio.h>
main(){
	int i,TF;
	i=1;
	printf("Ingresa que tabla de multiplicar quieres ver: ");
	scanf("%i",&TF); //Es la tabla hasta la que quiere mostrar
	if(TF>=1){ //comprueba que sea un numero valido
		printf("Tabla de multiplicar %i: \n",i);
		while(i<=10){//con while
			printf("%i X %i = %i\n",TF,i,TF*i);
			i=i+1;
		}
		i=1;
		printf("Tabla de multiplicar %i: \n",i);
		do{//con do while
			printf("%i X %i = %i\n",TF,i,i*TF);
			i = 1+i;
		}while(i<=10);
		i=1;
		printf("Tabla de multiplicar %i: \n",i);
		for(i=1;i<=10;i++){//con for
			printf("%i X %i = %i\n",TF,i,i*TF);
		}
	}else{
		printf("Ingresa una tabla de multiplicar valida");
	}
}
