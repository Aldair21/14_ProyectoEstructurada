/*------------------------------------------------------------*/
/*Aldair Manzano Sanchez                                      */
/*Lunes 16 de abril del 2018                                  */
/*Programa para ordenar 10 numeros de forma acendente         */
/*------------------------------------------------------------*/

#include <stdio.h>
int main (void)
{
        int n=10;
        int arreglo[n];
        int x,aux,i,j,k;
        for (x=0;x<n;x++){
                printf ("ingrese el numero %i de 10\n",x+1);
                scanf("%i",&arreglo[x]);
        }
        for (i=1;i<n;i++){
                for (j=0;j<n-1;j++){
                        if (arreglo[j]>arreglo[j+1]){
                                aux=arreglo[j];
                                arreglo[j]=arreglo[j+1];
                                arreglo[j+1]=aux;
                        }
                }
        }
	printf("el menor de los numeros que ingreso es el numero %i",arreglo[0]);
        return 0;
}
