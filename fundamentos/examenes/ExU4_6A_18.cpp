#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
    int Alt[4][6], V[4]={0}, A[6]={0}, ndia1,ndia2,i,j,opc;
    float TEM[7], Dif[7], P, SP=0, men, may;
    srand(time(NULL));
    printf("Programa que quiere ejecuar\n1.-Atletas\n2.-Temperatura\n");
    scanf("%i",&opc);
    switch(opc){
        case 1:
            printf("Tabla (filas atleta y columna distancia)\n");
            for(i=0;i<4;i++){
                for(j=0;j<6;j++){
                    Alt[i][j]=rand()%2;
                    if(Alt[i][j]==1){
                        V[i]=V[i]+1;
                        A[j]=A[j]+1;
                    }
                    printf("%i  ",Alt[i][j]);
                }
                printf("\n");
            }
            printf("Saltos validos de cada atleta: \n");
            for(i=0;i<4;i++){
                printf("%i ",V[i]);
            }
            printf("\nSaltos validos de cada distancia: \n");
            for(i=0;i<6;i++){
                printf("%i ",A[i]);
            }
            break;
        case 2:
            for(i=0;i<7;i++){
                printf("\nIngrese temperatura del dia %i: ",i+1);
                scanf("%f",&TEM[i]);
                SP=SP+TEM[i];
                if(i>=1){
                    if(TEM[i]<men){
                        men = TEM[i];
                        ndia1 = i+1;
                    }
                    if(TEM[i]>may){
                        may = TEM[i];
                        ndia2 = i+1;
                    }
                }else{
                    men=TEM[i];
                    may=TEM[i];
                    ndia1=i+1;
                    ndia2=i+1;
                }
            }
            P=SP/7;
            printf("\nDiferencias de temperatura respecto promedio-dia:\n");
            for(i=0;i<7;i++){
                Dif[i]=P-TEM[i];
                if(Dif[i]<0){
                    Dif[i]=Dif[i]*(-1);
                }
                printf("%.2f ",Dif[i]);
            }
            printf("\nPromedio: %.2f\nTemperatura menor: %.2f\nDia: %i\nTemperatura mayor: %.2f\nDia: %i",P,men,ndia1,may,ndia2);
            break;
        default:
            printf("Ingreso opcion invalida");
            break;
    }
}