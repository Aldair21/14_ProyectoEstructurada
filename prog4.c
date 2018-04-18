/*------------------------------------------------------------*/
/*Aldair Manzano Sanchez                                      */
/*Lunes 16 de abril del 2018                                  */
/*Programa para ordenar 10 numeros de forma acendente         */
/*------------------------------------------------------------*/


#include <stdio.h>

/*Declaracion de constantes*/
/*No se reservan espacios en memoria*/
#define PI 3.1416
#define G 9.81
#define TAMANIO 10
#define MIN 0
#define MAX 100

/*Implementacion de macro*/
#define SUMA(x,y) x+y
#define RESTA(x,y) x-y
#define MULT(x,y) x*y
#define DIV (x,y) x/y
#define POTCUADRADO(x) x**x
#define POTCUBO(x) x*x*x


/*Definir ciclos con macro*/
#define CICLOFOR(x,y)for(x=0;x<y;x++)


/*Declaracion de constantes con const */
/*Se reservan espacios en memoria*/
const float pi=3.1416;
const float g=8.81;
const int tamanio=10;
const int min=0;
const int max=100;
int main (void)
{
/*Imprimir constantes #define*/
printf("el valor de PI es %.4f\n",PI);
printf("el valor de G es %f\n",G);
printf("el valor de TAMAÑO es %d\n",TAMANIO);
printf("el valor de  MIN es %d\n",MIN);
printf("el valor de MAX es %d\n\n",MAX);

/*Imprimir macros*/

printf("\n%d\n",SUMA(3,4));

/*Imprimir constantes const*/
printf("el valor de pi es %.4f\n",pi);
printf("el valor de g es %.2f\n",g);
printf("el valor de tamanio es %d\n",tamanio);
printf("el valor de min es %d\n",min);
printf("el volor de man es %d\n",max);

/*Utilizando las macro de ciclo*/
int x;
int y=10;

CICLOFOR(x,y)
{
	printf("\n Hola mundo...\n");
}
/*Tarea para lunes 16 ciclo while,do while,*/
return 0;
}
