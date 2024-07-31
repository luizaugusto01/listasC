#include <stdio.h>


int main() {
  float preco_de_fabrica,porcentagem_x,porcentagem_y ;
   float valor_do_carro ;
   scanf("%f %f %f",&preco_de_fabrica,&porcentagem_x,&porcentagem_y);
   valor_do_carro = preco_de_fabrica + preco_de_fabrica/100 *(porcentagem_x + porcentagem_y);
   printf("O valor do carro e %.2f\n",valor_do_carro);
   

    return 0;
}
