#include<stdio.h>
#include<math.h>
main(){
	int opc, T, V, V1, V2, S, i, opc2;
	float y, x;
	printf("1.-Serie de fibonacci\n2.-valor de x\n3.-esta u otra opcion salir del programa\n");
	scanf("%i",&opc);
	switch(opc){
		case 1:
			printf("Ingrese cantidad de terminos a ver: ");
			scanf("%i",&T);
			if(T>0){
				V1=1;
				V2=1;
				for(i=1;i<=T;i++){
					if(i==1 || i==2){
						V=1;
						printf("%i, ",V);
					}else{
						V=V1+V2;
						V1=V2;
						V2=V;
						printf("%i, ",V);
					}
				}
			}else{
				printf("Ingrese un valor valido");
			}
			break;
		case 2:
			S=1;
			do{
				printf("\n1.-Sacar valor de x\n2.-salir\n");
				scanf("%i",&opc2);
				switch(opc2){
					case 1:
						printf("Ingrese valor de y: ");
						scanf("%f",&y);
						if(y>0 || y<=15){
							x=pow(y,2)+15;
						}else if(y>15 || y<=30){
							x=pow(y,3)-pow(y,2)+12;
						}else if(y>30 || y<=60){
							x=4*pow(y,3)/pow(y,2)+8;
						}else if(y>60 || y<=0){
							x=0;
						}
						printf("\nValor de x: %.2f",x);
						break;
					case 2:
						S=0;
						break;
					default:
						printf("Ingrese una opcion valida\n");
						break;
				}
			}while(S!=0);
			break;
		default:
			printf("Adios");
			break;
	}
}
