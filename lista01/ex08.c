#include <stdio.h>
#include <math.h>
int main (){
   int horas, minutos, segundos, soma;
   scanf("%d",&horas);
   scanf("%d",&minutos);
   scanf("%d",&segundos);
   soma = (horas * 3600) +( minutos * 60) + segundos;

   printf("o tempo em segundo é %d", soma);

}