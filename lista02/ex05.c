#include <stdio.h>

int main() {
int a1,r,n;
int soma = 0;
scanf("%d %d %d",&a1,&r,&n);
for(int i=0; i < n ; i++){
    soma += a1 + i*r;
}
printf("%d\n",soma);
}