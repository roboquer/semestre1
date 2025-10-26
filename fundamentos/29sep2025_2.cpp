#include<stdio.h>
main()
{
	int i;
	float t;
	printf("Ingresa la tabla que quieres: ");
	scanf("%f",&t);
	for(i=10;i>0;i--){
		printf("%i * %.2f = %.2f\n",i,t,i*t);
	}
}
