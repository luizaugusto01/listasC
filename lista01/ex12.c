#include <stdio.h>

int main() {
    double massa;
    double aceleracao;
    double tempo_decolagem;

    // Leitura dos dados de entrada
    scanf("%lf", &massa);
    scanf("%lf", &aceleracao);
    scanf("%lf", &tempo_decolagem);

    // Cálculo da velocidade atingida (em km/h)
    double velocidade_atingida = aceleracao * tempo_decolagem * 3.6;
    
    // Cálculo do espaço percorrido (em metros)
    double espaco_percorrido = 0.5 * aceleracao * tempo_decolagem * tempo_decolagem;

    // Cálculo do trabalho realizado (em Joules)
    double trabalho = massa * (aceleracao * tempo_decolagem)* (aceleracao * tempo_decolagem) / 2 ;

    // Impressão dos resultados
    printf("Velocidade = %.2lf km/h\n", velocidade_atingida);
    printf("Espaco percorrido = %.2lf m\n", espaco_percorrido);
    printf("Trabalho realizado = %.2lf J\n", trabalho);

    return 0;
}
