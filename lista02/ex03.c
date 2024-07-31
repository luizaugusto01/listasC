#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Correção: use o operador '&' para obter o endereço de 'n'
    for (int i = 1; i <= n; i++) {
        if (n < 5 || n > 2000) {
            break;
        }
        if (i % 2 == 0) {
            printf("%d * %d = %d\n", i, i, i * i);
        }
    }

    return 0;
}
