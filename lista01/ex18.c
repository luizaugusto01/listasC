#include <stdio.h>

int main() {
    float a, b, c, d, e, f;
    float x, y;

    // Ler os valores dos coeficientes
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);

    // Calcula o determinante
    float det = a * e - b * d;

    // Verifica se o determinante é zero (sistema não tem solução única)
    if (det == 0) {
        printf("Sistema sem solução única\n");
        return 1; // Indica erro
    }

    // Calcula os valores de x e y
    x = (c * e - b * f) / det;
    y = (a * f - c * d) / det;

    // Imprime os resultados com duas casas decimais
    printf("O VALOR DE X E = %.2f\n", x);
    printf("O VALOR DE Y E = %.2f\n", y);

    return 0;
}
