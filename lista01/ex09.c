#include <stdio.h>
#include <math.h>

int main() {
    double numero;
    printf("Digite um número real: ");
    scanf("%lf", &numero);

    // Arredondamento com 1 casa decimal
    double arredondado_1 = round(numero * 10) / 10;

    // Arredondamento com 2 casas decimais
    double arredondado_2 = round(numero * 100) / 100;

    // Arredondamento com 3 casas decimais
    double arredondado_3 = round(numero * 1000) / 1000;

    // Formatação para apresentar 6 casas decimais
    printf("%.6lf\n", arredondado_1);
    printf("%.6lf\n", arredondado_2);
    printf("%.6lf\n", arredondado_3);

    return 0;
}
