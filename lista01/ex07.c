#include <stdio.h>
#include <math.h>
int main (){
    float altura,aresta,volume;
    scanf("%f %f",&altura, &aresta);
    volume = (3 *aresta * aresta * sqrt(3) / 2 ) * altura / 3 ;
    printf("O volume da altura é %.2f metros cúbicos", volume);
}