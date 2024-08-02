#include <stdio.h>

int main() {
    int num;
    int binario[8] = {0};

    // Lê o número
    scanf("%d", &num);

    // Multiplica o número por 2
    num = num * 2;

    // Converte o número para binário (8 bits)
    for (int i = 0; i < 8; i++) {
        num /= 2;
        binario[7 - i] = num % 2;
    }

    // Imprime o vetor binario
    for (int i = 0; i < 8; i++) {
        printf("%d", binario[i]);
    }
    printf("\n");

    return 0;
}






