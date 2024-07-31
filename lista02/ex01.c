#include <stdio.h>


int main(){
    double popular, geral, arquibancada, cadeiras,renda;
    int casos_de_teste, pessoas;

    scanf("%d", &casos_de_teste);
    
    for( int i = 0;i<casos_de_teste;i++ ){
        scanf("%d",&pessoas);
        scanf("%lf %lf %lf %lf", &popular, &geral, &arquibancada, &cadeiras);

        renda = pessoas / 100 *(popular * 1 + geral * 5 + arquibancada *10 + cadeiras * 20 );
        printf("A renda do jogo é %.2f ", renda);

    }

}