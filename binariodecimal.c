/*------------------------------------------------------------*/
/*Aldair Manzano Sanchez                                      */
/* aldairmanzanosanchez@hotmail.com                           */
/*martes 24 de abril del 2018                                 */
/*Programa de binario a decimal                                */
/*------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>
int main(void)
{
int num_dig,i,j,resul,binario,sum=0,q;

  puts("ingrese cuantos digitos tiene el numero binario que desea convertir");
  scanf("%d",&num_dig);
  int array[num_dig];
  for(i=0;i<num_dig;i++)
    {
      printf("Ingresa el digito\n");
      scanf("%d",& array[i]);
      q=array[i] * pow(2,i);
      sum=sum+q;
    }

  printf(" La convercion de el numero decimal que ingreso es %d\n",sum);


  return 0;
}
