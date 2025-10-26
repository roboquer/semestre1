/*
Nombre del programa: 3.4 Repetitivas_6A_18
Elaboro: Favian Orduña Suárez			No Lista: 18
Fecha: 10/10/2025						No. Version: 1
Descripcion: Son 3 programas donde podra acceder al que quieras dependiendo cual eligas desde el menu
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h> //se puso para time() que es para obtener la hora del sistema
#include<locale.h> //para poder poner la ñ
main()
{
	setlocale(LC_ALL, "Spanish");//configura para que sea español y pueda imprimir la ñ
	int opc1,i,n,div,suma;// variables para el problema 2
	int num1,num2,opc2,R,RB,calf; //variable del problema 1
	int d,m,a,da,ma,aa,valido,diasMes,diasVividos,bisiestos,diasAntesAct,diasAntesNac,totalAct,totalNac; //variable del problema 3
	suma=0;
	calf=0;
	bisiestos=0;
	srand(time(NULL)); //Se usa para que no sea la misma secuencia de numeros al usar rand() y utiliza time() para que obtenga los numeros de los segundo del sistema al ser ejecutado asi siempre va a ser random los numeros
	printf("Ingrese a que programa quiere ingresar:\n1.- Examen de operaciones random\n2.- Saber si un numero es perfecto\n3.- Saber cuantos dias ha vivido una persona hasta la fecha (10/10/2025)\n");
	scanf("%i",&opc1);
	switch(opc1){
		case 1:
			for(i=1;i<=5;i++){
				num1 = rand() % 10 + 1;
				num2 = rand() % 10 + 1;
				opc2 = rand() % 4;
				switch(opc2){
					case 0://suma
						RB=num1+num2;
						printf("%i + %i = ",num1,num2);
						scanf("%i",&R);
						if(R==RB){
							calf=calf+20;
						}
						break;
					case 1://resta
						RB=num1-num2;
						printf("%i - %i = ",num1,num2);
						scanf("%i",&R);
						if(R==RB){
							calf=calf+20;
						}
						break;
					case 2://multiplicacion
						RB=num1*num2;
						printf("%i * %i = ",num1,num2);
						scanf("%i",&R);
						if(R==RB){
							calf=calf+20;
						}
						break;
					case 3://division
						printf("Solo ingresa la parte entera de la division\n");
						while(num1<num2){//va a estar haciendo lo mismo hasta que num1 sea mayor a num2
							num1 = rand() % 10 + 1;
							num2 = rand() % 10 + 1;
						}
						RB=num1/num2;
						printf("%i / %i = ",num1,num2);
						scanf("%i",&R);
						if(R==RB){
							calf=calf+20;
						}
						break;
				}
			}
			printf("Su calificacion es: %i",calf);
			break;
		case 2:
			printf("Ingrese numero: ");
			scanf("%i",&n);
			if(n>0){
				for(i=1;i<n;i++){
					div = n % i;
					if(div==0){
						suma=i+suma;
					}
				}
				if(suma==n){
					printf("El numero es perfecto");
				}else{
					printf("El numero no es perfecto");
				}
			}else{
				printf("Ingrese un numero positivo");
			}
			break;
		case 3:
			do{//Todo ese do while es para que compruebe que las fechas ingresadas sean correctas y si no lo son entonces vuelve a pedir las fecha
				printf("Ingresa el dia que naciste: ");
				scanf("%i",&d);
				printf("Ingresa el mes que naciste: ");
				scanf("%i",&m);
				printf("Ingresa el año que naciste: ");
				scanf("%i",&a);
				
				printf("Ingresa el dia actual: ");
				scanf("%i",&da);
				printf("Ingresa el mes actual: ");
				scanf("%i",&ma);
				printf("Ingresa el año actual: ");
				scanf("%i",&aa);
				
				valido = 1;

		        if (a <= 0 || a >= 2100) {
		            printf("El año de nacimiento debe estar entre 1 y 2099\n");
		            valido = 0;
		        } else if (a > aa) {
		            printf("El año de nacimiento no puede ser mayor al año actual\n");
		            valido = 0;
		        } else if (a == aa && m > ma) {
		            printf("Si naciste en el mismo año, el mes no puede ser mayor al actual\n");
		            valido = 0;
		        } else if (a == aa && m == ma && d >= da) {
		            printf("Si naciste en el mismo mes y año, el día debe ser menor al actual\n");
		            valido = 0;
		        }else if (m > 12 || m < 1 || ma > 12 || ma < 1){
		        	printf("Alguno de los dos meses no es valido\n");
		        	valido = 0;
				}
		        
		        if(valido==1){ //Comprobar que el dia sea real para el mes de nacimiento
		        	if(m == 2){
		                if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)){//Este if es para comprobar si es bisiesto el año o no y ya dependiendo eso ya pone la cantidad de dias que tiene febrero
		                	diasMes = 29;
						}else{
							diasMes = 28;
						}  
		            }else if(m == 4 || m == 6 || m == 9 || m == 11){
		            	diasMes = 30;
					}else{
		            	diasMes = 31;
					}
		            if(d < 1 || d > diasMes){
		                printf("El dia no es valido para el mes %i\n", m);
		                valido = 0;
		            }
				}
				
				if(valido==1){ //Comprobar que el dia sea real para el mes actual
		        	if(ma == 2){
		                if (aa % 4 == 0 && (aa % 100 != 0 || aa % 400 == 0)){//Este if es para comprobar si es bisiesto el año o no y ya dependiendo eso ya pone la cantidad de dias que tiene febrero
		                	diasMes = 29;
						}else{
							diasMes = 28;
						}  
		            }else if(ma == 4 || ma == 6 || ma == 9 || ma == 11){
		            	diasMes = 30;
					}else{
		            	diasMes = 31;
					}
		            if(da < 1 || da > diasMes){
		                printf("El dia no es valido para el mes %i\n", m);
		                valido = 0;
		            }
				}
			}while(valido!=1);
			
			//Ahora si a calcular los dias y años bisiestos

		    totalNac = a * 365 + (a / 4) - (a / 100) + (a / 400); //dias que hay hasta antes del inicio del año de nacimiento es decir hasta el 31 de diciembre de un año antes
		    totalAct = aa * 365 + (aa / 4) - (aa / 100) + (aa / 400); //lo mismo pero para el año actual
		
		    diasAntesNac = 0;
			diasAntesAct = 0;
		
		    for (i = 1; i < m; i++) {//se suman los dias de los meses anteriores al mes que nacio
		        if (i == 2) {
		            if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)){
		            	diasAntesNac = diasAntesNac + 29;
					}else{
						diasAntesNac = diasAntesNac + 28;
					}   
		        }else if (i == 4 || i == 6 || i == 9 || i == 11){
		        	diasAntesNac = diasAntesNac + 30;
				}else{
					diasAntesNac = diasAntesNac + 31;
				}
		    }
		
		    for (i = 1; i < ma; i++) {//se suman los dias de los meses anteriores al mes actual
		        if (i == 2) {
		            if (aa % 4 == 0 && (aa % 100 != 0 || aa % 400 == 0)){
		            	diasAntesAct = diasAntesAct + 29;
					}else{
						diasAntesAct = diasAntesAct + 28;
					}   
		        }else if(i == 4 || i == 6 || i == 9 || i == 11){
		        	diasAntesAct = diasAntesAct + 30;
				}else{
					diasAntesAct = diasAntesAct + 31;
				} 
		    }
		
		    // Sumar los días del mes que se nacio y del mes actual en transcurso
		    totalNac = totalNac + diasAntesNac + d;
		    totalAct = totalAct + diasAntesAct + da;
		
		    // Al total de dias hasta el dia actual se le restan los dias totales hasta el dia de nacimiento (estos dias son desde el año 0)
		    diasVividos = totalAct - totalNac;
		
		    // Calcular años bisiestos
		    for (i = a; i <= aa; i++) {//checa desde el año de nacimiento hasta el actual
		        if (i % 4 == 0){//checa primero que sea divisible entre 4
		        	if(i % 100 == 0){//checa si es divisible entre 100
		        		if(i % 400 == 0){//como es divisible entre 100 tambien debe checar que sea divisible entre 400
		        			bisiestos++;
						}
					}else{//como no es divisible entre 100 pero si entre 4 entonces es bisiesto
						bisiestos++;
					}
				}
		    }
		    printf("Has vivido %i días\n", diasVividos);
    		printf("Han pasado %i años bisiestos desde tu nacimiento\n", bisiestos);
			break;
		default:
			printf("Ingrese una opcion valida");
			break;
	}
}
