#include <stdio.h>

int main() {
    int valor;
    int notas100, notas50, notas10, moedas1;
    
    // Ler o valor em reais
    scanf("%d", &valor);
    
    // Calcular quantidade de notas e moedas
    notas100 = valor / 100;
    valor %= 100;

    notas50 = valor / 50;
    valor %= 50;

    notas10 = valor / 10;
    valor %= 10;

    moedas1 = valor;
    
    // Imprimir os resultados
    printf("NOTAS DE 100 = %d\n", notas100);
    printf("NOTAS DE 50 = %d\n", notas50);
    printf("NOTAS DE 10 = %d\n", notas10);
    printf("MOEDAS DE 1 = %d\n", moedas1);
    
    return 0;
}
