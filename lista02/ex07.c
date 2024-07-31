#include <stdio.h>
#define min_horas 96




int main() {
    int matricula, presenca;
    float notas_provas[8];
    float notas_listsas[5];
    float trabalho;

    do {
        printf("Digite a matricula: ");
        scanf("%d", &matricula);
    } while(matricula < -1);

    printf("Digite as notas das provas:\n");
    for(int i = 0; i < 8; i++) {
        scanf("%f", &notas_provas[i]);
    }

    printf("Digite as notas das listas:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%f", &notas_listsas[i]);
    }

    printf("Digite a nota do trabalho: ");
    scanf("%f", &trabalho);

    printf("Digite a presença: ");
    scanf("%d", &presenca);

    float MP = 0.0, ML = 0.0;
    for(int i = 0; i < 8; i++) {
        MP += notas_provas[i];
    }
    MP /= 8;

    for(int i = 0; i < 5; i++) {
        ML += notas_listsas[i];
    }
    ML /= 5;

    float NF = 0.7 * MP + 0.15 * ML + 0.15 * trabalho;

    if (NF >= 6 && presenca >= 96) {
        printf("Aprovado\n");
    } else if (NF >= 6 && presenca < 96) {
        printf("Reprovado por falta\n");
    } else if (NF < 6 && presenca >= 96) {
        printf("Reprovado por nota\n");
    } else {
        printf("Reprovado por falta e nota\n");
    }

    return 0;
}

