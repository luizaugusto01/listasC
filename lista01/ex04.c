#include <stdio.h>

int main() {
    float a, b, c, delta;

    
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

     delta = b*b - (4 * a *c);
    printf("O valor de Delta é %.2f\n", delta);
    

    return 0;
}
