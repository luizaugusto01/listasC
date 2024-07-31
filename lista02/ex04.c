#include <stdio.h>

int main() {
    int n, contador;
    scanf("%d %d",&n,&contador);
    n = n - 2 ;
    if(n%2!=0){
        printf("O PRIMEIRO NUMERO NAO E PAR");
    }else{
        for(int i = 0; i < contador; i++){
            n = n + 2;
            printf("%d ", n);
        }
    }
 
}
