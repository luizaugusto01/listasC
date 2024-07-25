#include <stdio.h>

int main() {
    float a, b, c, d, determinante;

    
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    determinante = a*d - b*c;

    printf("O valor de Delta é %.2f\n", determinante);
    

    return 0;
}
