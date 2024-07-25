#include <stdio.h>
#include <locale.h>

int main(){
    float salario_minimo, quantidade_kw;
    float valor_kw, valor_consumo, valor_com_desconto;

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salario_minimo);
    printf("Digite a quantidade a quantidade de KW gasta por uma residencia ");
    scanf("%f", &quantidade_kw);

    valor_kw  = (0.70 * salario_minimo) / 100;
    valor_consumo = valor_kw * quantidade_kw;
    valor_com_desconto = valor_consumo * 0.90;

    printf("Valor de cada KW: RS %.2f\n", valor_kw);
    printf("Valor a ser pago pelo consumo RS %.2f\n", valor_consumo);
    printf("Valor a ser pago com desconto : RS %.2f\n", valor_com_desconto);

    return 0;
}