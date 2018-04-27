/*------------------------------------------------------------*/
/*Aldair Manzano Sanchez                                      */
/* aldairmanzanosanchez@hotmail.com                           */
/*miercoles  de abril del 2018                                  */
/*Programa para cambiar de minusculas a mayusculas            */
/*------------------------------------------------------------*/

#include <stdio.h>
const int tamanio =5;
int main (void)
{
        char c;
        char arreglo[tamanio];
        int index=0;
        while ((c=getchar())!='\n'){
        if(c>=97  && c<=126){
                c=c-32;
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
  
