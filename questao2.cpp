
#include <stdio.h>
#include <string.h>

int main() {
    const int maximoContato = 100;
    char nomes[maximoContato][50];
    char numeros[maximoContato][15]; 
    int opcao = 0;
    int totalContato = 0;

    while (opcao != 2) {
        printf("\nMenu:\n");
        printf("1 - Adicionar número\n");
        printf("2 - Mostrar números cadastrados e sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (totalContato < maximoContato) {
                printf("Digite o nome: ");
                scanf("%s", nomes[totalContato]);

                printf("Digite o número de telefone: ");
                scanf("%s", numeros[totalContato]);

                totalContato++;
                printf("Contato adicionado com sucesso!\n");
            } else {
                printf("A agenda está cheia, não é possível adicionar mais contatos.\n");
            }
        } else if (opcao == 2) {
            printf("\nNúmeros cadastrados na agenda:\n");
            if (totalContato == 0) {
                printf("Nenhum contato cadastrado.\n");
            } else {
                for (int i = 0; i < totalContato; i++) {
                    printf("Nome: %s\nNúmero: %s\n", nomes[i], numeros[i]);
                }
            }
        } else {
            printf("Opção inválida. Digite 1 para adicionar um número, 2 para mostrar os números cadastrados e encerrar o software.\n");
        }
    }

    return 0;
}
