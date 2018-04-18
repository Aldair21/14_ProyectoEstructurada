/*-----------------------------------------------------------*/
/* Autor: Aldair Manzano Sánchez                             */
/* Fecha: 18/03/2018                                         */
/*titulo:programa que dice cuantos numeros se repiten        */
/*-----------------------------------------------------------*/
#include <stdio.h>
int main (void)
{
        int n=10;
        int arreglo[n];
        int x,aux,i,j,k,cont=1;
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
	for (k=0;k<n;k++){
	printf("%i\n",arreglo[k]);
	}
        printf("\n");
        return 0;
}

