int main(){
    int num;
    scanf("%d",&num);
    if (num >999 && num < 100){
        return 1;
    }

   int algarismo_centena = num / 100;
   int algarismo_dezena = (num / 10)%10;
   int algarismo_unidade = num%10;

  

    printf("O novo numero é : %d%d%d",algarismo_unidade,algarismo_dezena,algarismo_centena);
}