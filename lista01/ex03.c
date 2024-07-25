#include <stdio.h>

int main(){
    float altura, raio, valor_de_custo;
    scanf("%f", &raio);
    scanf("%f", &altura);

    valor_de_custo = 100 * ( 2 * 3.14159 * raio * raio + (2 * 3.14159 * raio * altura));

    printf("Valor do custo E = %.2f", valor_de_custo);

    
}