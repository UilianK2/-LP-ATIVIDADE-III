#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "");
    // variaveis
   int contadorImpar =0;
   int contadorPar =0;
   int contadorNegativo =0;
   int somarPar =0;
   int somaGeral =0;
   int maiorNumero = -999999;
   int menorNumero = 9999999;
   float media =0;
   int i;
   int numero =0;
   float mediaPar =0;
   int contadorGeral =0;


    for (i = 0; i < 5; i++){
        printf("Digite um numero\n");
        scanf("%d",&numero);

        if (numero % 2 != 0)
        {
            contadorImpar++;
        }
        if (numero <0)
        {
            contadorNegativo++;
        }
        if (numero > maiorNumero)
        {
            maiorNumero=numero;
        }
        if (numero < menorNumero)
        {
            menorNumero = numero;
        }
        if (numero % 2 ==0)
        {
            contadorPar++;
            somarPar+= numero;
        }
        somaGeral+= numero;
        contadorGeral++;

    }
   mediaPar=somarPar/contadorPar;
   media= somaGeral/contadorGeral; 
   printf("\n\n\n\n\n\n");

    printf("Impares: %d\n",contadorImpar); 
    printf("Negativos: %d\n",contadorNegativo); 
    printf("Maior numero : %d\n",maiorNumero); 
    printf("Menor numero : %d\n",menorNumero); 
    printf("Media par: %.1f\n", mediaPar); 
    printf("Media geral: %.1f\n", media); 
    return 0;
}