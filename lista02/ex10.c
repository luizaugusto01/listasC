#include <stdio.h>

int main() {
    int n, K;
    double i, s;
    double B;
    double result;
    
    // Leitura dos valores
    printf("Digite o valor de n (0 a 9): ");
    scanf("%d", &n);
    printf("Digite o valor inicial i: ");
    scanf("%lf", &i);
    printf("Digite o numero de valores K: ");
    scanf("%d", &K);
    printf("Digite o incremento s: ");
    scanf("%lf", &s);

    // Tabuada de soma
    printf("Tabuada de soma:\n");
    B = i;
    for (int j = 0; j < K; j++) {
        result = n + B;
        printf(" + %.2f = %.2f\n", n, B, result);
        B += s;
    }

    // Tabuada de subtracao
    printf("Tabuada de subtracao:\n");
    B = i;
    for (int j = 0; j < K; j++) {
        result = n - B;
        printf("%.2f - %.2f = %.2f\n", (double)n, B, result);
        B += s;
    }

    // Tabuada de multiplicacao
    printf("Tabuada de multiplicacao:\n");
    B = i;
    for (int j = 0; j < K; j++) {
        result = n * B;
        printf("%.2f * %.2f = %.2f\n", (double)n, B, result);
        B += s;
    }

    // Tabuada de divisao
    printf("Tabuada de divisao:\n");
    B = i;
    for (int j = 0; j < K; j++) {
        if (B != 0) {  // Evitar divisão por zero
            result = n / B;
            printf("%.2f / %.2f = %.2f\n", (double)n, B, result);
        } else {
            printf("%.2f / %.2f = undefined (divisao por zero)\n", (double)n, B);
        }
        B += s;
    }

    return 0;
}