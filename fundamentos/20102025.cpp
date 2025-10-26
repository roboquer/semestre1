#include<stdio.h>
main(){
	int n1,n2,ma,me,r;
	r=0;
	printf("		Multipliacion metodo ruso\n");
	printf("Ingrese el primer numero: ");
	scanf("%i",&n1);
	printf("Ingrese el segundo numero: ");
	scanf("%i",&n2);
	if(n1>=n2){
		ma=n1;
		me=n2;
	}else{
		ma=n2;
		me=n1;
	}
	do{	
		printf("%i - %i\n",me,ma);
		if(me%2!=0){
			r=r+ma;
		}
		me=me/2;
		ma=ma*2;
	}while(me!=0);
	printf("Su producto es: %i",r);
}
