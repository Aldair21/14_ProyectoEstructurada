/*------------------------------------------------------------*/
/*Aldair Manzano Sanchez                                      */
/* aldairmanzanosanchez@hotmail.com                           */
/*jueves 26 de abril del 2018                                 */
/*Programa de decimal a binar                                 */
/*------------------------------------------------------------*/
#include <stdio.h>
int main (void)
{
	int num,res,cont=0,iden,i=0,x;
	printf("ingresar el numero decimal\n");
	scanf("%i",&num);
	iden=num;
	while(num>=1){
		num/=2;
		cont++;
	}
	int arre[cont];
	while(iden>=1){
                arre[i]=iden%2;
                iden/=2;
		i++;
        }
	cont=cont-1;
	for(x=cont;x>=0;x--){
		printf("%i",arre[x]);
	}
	printf("\n");
	return 0;
}
