#include <stdio.h>



int main() {
    int a;
    scanf("%d", &a);

    int fat = 1;
    for (int i = 1; i <= a; i++) {
        fat *= i;
    }

    printf("%d\n", fat);

    return 0;
}






