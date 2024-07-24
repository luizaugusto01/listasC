#include <stdio.h>

int main() {
    float fahrenheit, polegadas, celsius, milimetro;

    printf("Digite o valor em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Digite o valor em polegadas: ");
    scanf("%f", &polegadas);

    celsius = 5 * (fahrenheit - 32) / 9;
    milimetro = polegadas * 25.4;

    printf("O valor em Celsius é %.2f\n", celsius);
    printf("O valor em Milímetro é %.2f\n", milimetro);

    return 0;
}
