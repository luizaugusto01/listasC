#include <stdio.h>
#include <math.h>

int main() {
    double L1, L2, L3;
    printf("Digite os comprimentos dos três lados do triângulo:\n");
    scanf("%lf %lf %lf", &L1, &L2, &L3);

    // Cálculo do semiperímetro
    double T = (L1 + L2 + L3) / 2;

      // Cálculo da área
    double area = sqrt(T * (T - L1) * (T - L2) * (T - L3));

    printf("A AREA DO TRIANGULO E = %.2lf\n", area);

    return 0;
}
