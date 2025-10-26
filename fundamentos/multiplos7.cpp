#include<stdio.h>
main(){
	int op,i;
	printf("Ingresa con que secuencia repetitiva quieres realizarlo:\n1.- For\n2.- While\n3.-Do while\n");
	scanf("%i",&op);
	switch(op){
		case 1:
			for(i=7;i<150;i=i+7){
				printf("%i\n",i);
			}
		case 2:
			i=7;
			while(i<150){
				printf("%i\n",i);
				i=i+7;
			}
		case 3:
			i=7;
			do{
				printf("%i\n",i);
				i=i+7;
			}while(i<150);	
	}
}
