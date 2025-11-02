#include<stdio.h>
main()
{
    int opc1,T,i,n;
    printf("1.-Serie de Fibonacci\n2.-Factorial de un numero\n");
    scanf("%i",&opc1);
    switch(opc1){
        case 1:
            printf("Ingrese cantidad de terminos a ver: ");
			scanf("%i",&T);
			if(T>0){
				int P[T];
				for(i=0;i<T;i++){
					if(i==0 || i==1){
						P[i]=1;
					}else{
						P[i]=P[i-1]+P[i-2];
					}
				}
				for(i=0;i<T;i++){
					printf("%i, ",P[i]);
				}
			}else{
				printf("Ingrese un valor valido");
			}
			break;
        case 2:
            printf("Ingresa un numero entero:\n");
            scanf("%i",&n);
			if(n>0){
				int P2[n];
				int PS[n];
				for(i=0;(n-i)>=1;i++){
					PS[i]=n-i;
				}
				P2[0]=n;
				for(i=1;(n-i)>=1;i++){
					P2[i]=P2[i-1]*(n-i);
				}
				for(i=0;(n-i)>1;i++){
					if(i==0){
						printf("\n%i * %i = %i",PS[0],PS[1],P2[1]);
					}else{
						printf("\n%i * %i = %i",P2[i],PS[i+1],P2[i+1]);
					}
				}
			}else{
				printf("Ingrese un numero valido");
			}
			break;
        default:
        printf("\nIngrese una opcion valida");
        break;
    }
}