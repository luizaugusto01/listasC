#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if (num >999 && num < 100){
        return 1;
    }

   int algarismo_centena = num / 100;
   int algarismo_dezena = (num / 10)%10;
   int algarismo_unidade = num%10;

  int quarto_algarismo = (algarismo_centena + algarismo_dezena * 3 + algarismo_unidade * 5) % 7;

  int novo_num = num * 10 + quarto_algarismo;

    printf("O novo numero é : %d", novo_num);
}