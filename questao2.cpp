
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
        printf("1 - Adicionar n�mero\n");
        printf("2 - Mostrar n�meros cadastrados e sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (totalContato < maximoContato) {
                printf("Digite o nome: ");
                scanf("%s", nomes[totalContato]);

                printf("Digite o n�mero de telefone: ");
                scanf("%s", numeros[totalContato]);

                totalContato++;
                printf("Contato adicionado com sucesso!\n");
            } else {
                printf("A agenda est� cheia, n�o � poss�vel adicionar mais contatos.\n");
            }
        } else if (opcao == 2) {
            printf("\nN�meros cadastrados na agenda:\n");
            if (totalContato == 0) {
                printf("Nenhum contato cadastrado.\n");
            } else {
                for (int i = 0; i < totalContato; i++) {
                    printf("Nome: %s\nN�mero: %s\n", nomes[i], numeros[i]);
                }
            }
        } else {
            printf("Op��o inv�lida. Digite 1 para adicionar um n�mero, 2 para mostrar os n�meros cadastrados e encerrar o software.\n");
        }
    }

    return 0;
}
