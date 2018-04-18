/*-----------------------------------------------------------*/
/* Autor: Aldair Manzano Sánchez                             */
/* Fecha: 12/04/2018                                         */
/*titulo:programa que muestra cuantos numeros se repiten      */
/*-----------------------------------------------------------*/
#include <stdio.h>
int main (void)
{
	int x,i,n=10;
	int arreglo[n];
	int cont0=0;
	int cont1=0;
	int cont2=0;
	int cont3=0;
	int cont4=0;
	int cont5=0;
	int cont6=0;
	int cont7=0;
	int cont8=0;
	int cont9=0;
	for (x=0;x<n;x++){
                printf ("ingrese el numero %i de 10\n",x+1);
                scanf("%i",&arreglo[x]);
        }
        for (i=0;i<n;i++){
						switch (arreglo[i]){
						case 0:
									cont0=cont0+1;
						
						break;
						case 1:
									cont1=cont1+1;
						break;
						case 2:
				          cont2=cont2+1;
						
						break;
						case 3:
									
				          cont3=cont3+1;

						break;
						case 4:
				          cont4=cont4+1;
						break;
						case 5:
									
				          cont5=cont5+1;
						     
						break;
						case 6:

				          cont6=cont6+1;
						
						break;
						case 7:

				          cont7=cont7+1;
						
						break;
						case 8:
									
				          cont8=cont8+1;
						
						break;
						case 9:

				          cont9=cont9+1;
						break;
						}
				}
				printf("el numero 0 se repite %i veces\n",cont0);
				printf("el numero 1 se repite %i veces\n",cont1);
				printf("el numero 2  se repite %i veces\n",cont2);
				printf("el numero 3 se repite %i veces\n",cont3);
				printf("el numero 4 se repite %i veces\n",cont4);
				printf("el numero 5 se repite %i veces\n",cont5);
				printf("el numero 6 se repite %i veces\n",cont6);
				printf("el numero 7 se repite %i veces\n",cont7);
				printf("el numero 8 se repite %i veces\n",cont8);
				printf("el numero 9 se repite %i veces\n",cont9);
return 0;
}
