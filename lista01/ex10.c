#include <stdio.h>
#include <math.h>

int main() {
    double L1, L2, L3;
    printf("Digite os comprimentos dos tr�s lados do tri�ngulo:\n");
    scanf("%lf %lf %lf", &L1, &L2, &L3);

    // C�lculo do semiper�metro
    double T = (L1 + L2 + L3) / 2;

      // C�lculo da �rea
    double area = sqrt(T * (T - L1) * (T - L2) * (T - L3));

    printf("A AREA DO TRIANGULO E = %.2lf\n", area);

    return 0;
}
