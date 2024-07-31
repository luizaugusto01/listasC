#include <stdio.h>

int main() {
    double fahrenheint, celsius;
    int numero_de_conversoes;

    scanf("%d", &numero_de_conversoes);
    for (int i = 0; i < numero_de_conversoes; i++) {
        scanf("%lf", &fahrenheint);
        celsius = 5 * (fahrenheint - 32) / 9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", fahrenheint, celsius);
    }

    return 0;
}
