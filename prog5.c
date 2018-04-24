/*------------------------------------------------------------*/
/*Aldair Manzano Sanchez                                      */
/*viernes 20 de abril del 2018                                */
/*Programa de matizes                                         */
/*------------------------------------------------------------*/
#include <stdio.h>
int main (void)
{
        int j,a=0,b=0,i,c=0,d=0,k,f=0,g=0;
        int p=4,s=0;
        int q=5,r=3;
        int matrizcuadrada[p][p];
        int matrizrectangular[q][r];
	int columna[s][q];
        for( i=0;i<16;i++){
		matrizcuadrada[a][b]=i+1;
		printf("%i\t",matrizcuadrada[a][b]);
                if (a==3){
                        b=b+1;
			a=0;
			printf("\n");
                }
		else{
 			a=a+1;
                }
        }
	printf("\n");		
        for( k=0;k<15;k++){
                        matrizrectangular[c][d]=k+1;
			printf("%i\t",matrizrectangular[c][d]);
                        if (c==4){
                                d=d+1;
                                c=0;
				printf("\n");
                        }
                        else{
                                c=c+1;

                        }
        }
        printf("\n");
	for (j=0;j<5;j++){
		columna[f][g]=j;
		printf("%i \n",columna[f][g]);
		g=g+1;
	}
        return 0;

}
