

#include <stdio.h>

int main() {
    int a, b;
    do {
        scanf("%d %d", &a, &b);
    } while (b <= a);
    
    int anos = 0;
    while (a < b) {
        a = a * 1.03;
        b = b * 1.015;
        anos++;
    }
    
    printf("ANOS = %d\n", anos);
    return 0;
}
