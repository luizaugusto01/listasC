#include <stdio.h>

int main() {
    int n;
    double soma = 0;

    printf("Digite um número inteiro positivo maior que 1: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Numero invalido!\n");
        return 1;
    }
    double x = 1.0;
    for (int i = 1; i <= n; i++) {
        soma += 1.0 / x;
        x++;
    }

    printf("Soma: %.6lf\n", soma);

    return 0;
}
