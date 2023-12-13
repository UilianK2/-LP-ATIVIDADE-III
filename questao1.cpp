#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][50];
    int idades[5];
    float notas[5][3];
    float medias[5];

    for (int i = 0; i < 5; i++) {
        printf("Informe o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Informe a idade do aluno %d: ", i + 1);
        scanf("%d", &idades[i]);

        printf("Informe as 3 notas do aluno %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%f", &notas[i][j]);
        }

        medias[i] = (notas[i][0] + notas[i][1] + notas[i][2]) / 3;
    }

    printf("\nInformações dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d\nNome: %s\nIdade: %d\nNotas: %.2f, %.2f, %.2f\nMédia: %.2f\n", i + 1, nomes[i], idades[i],
               notas[i][0], notas[i][1], notas[i][2], medias[i]);

        if (medias[i] >= 7.0) {
            printf("Você foi aprovado\n");
        } else if (medias[i] >= 5.0) {
            printf("Você ficou de recuperação\n");
        } else {
            printf("Você foi reprovado\n");
        }
    }

    return 0;
}
