
#include <stdio.h>
#include <string.h>

int main() {
    int maximoVen = 100;
    char produtos[maximoVen][50];
    float precos[maximoVen];
    int quantidades[maximoVen];
    int opcao = 0;
    int totalVenda = 0;
    float totalVenVer = 0.0;

    while (opcao != 2) {
        printf("\nMenu:\n");
        printf("1 - Adicionar venda\n");
        printf("2 - Exibir total de vendas e sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (totalVenda < maximoVen) {
                printf("Digite o nome do produto: ");
                scanf("%s", produtos[totalVenda]);

                printf("Digite o preço do produto: ");
                scanf("%f", &precos[totalVenda]);

                printf("Digite a quantidade vendida: ");
                scanf("%d", &quantidades[totalVenda]);

                totalVenVer += precos[totalVenda] * quantidades[totalVenda];
                totalVenda++;
                printf("Venda registrada com sucesso!\n");
            } else {
                printf("A capacidade máxima de vendas foi atingida.\n");
            }
        } else if (opcao == 2) {
            printf("\nTotal de vendas realizadas: %d\n", totalVenda);
            printf("Total arrecadado: R$ %.2f\n", totalVenVer);
        } else {
            printf("Opção inválida. Digite 1 para adicionar uma venda, 2 para exibir o total de vendas e sair.\n");
        }
    }

    return 0;
}
