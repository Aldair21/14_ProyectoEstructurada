/*------------------------------------------------------------*/
/*Aldair Manzano Sanchez                                      */
/* aldairmanzanosanchez@hotmail.com                           */
/*Lunes 16 de abril del 2018                                  */
/*Programa para cambiar de letras mayusculas a minusculas     */
/*------------------------------------------------------------*/

#include <stdio.h>
const int tamanio =5;
int main (void)
{
	char c;
	char arreglo[tamanio];
	int index=0; 
	while ((c=getchar())!='\n'){
	if(c>=65  && c<=90){
		c=c+32;
		arreglo[index]=c;
		index++;
	}
	}
	printf("\n");
	for(int i = 0;i<tamanio;i++){
	printf("%c",arreglo[i]);
	}
	printf("\n");
	return 0;
}
