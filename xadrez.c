#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // criando as variáveis do jogo.

    int torre, bispo, rainha, opcao, i;

    // Menu interativo.

    printf("### Jogo Xadrez ###\n");
    printf("\nEscolha a peça para movimentar\n");
    printf("\n1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("\nDigite a opção: ");
    scanf("%d", &opcao);

    // Colocando os movimentos e loops dentro do jogo.

switch (opcao)
{
case 1:
    // movimento da Torre.

    printf("\nDigite a quantidade de movimento da Torre: ");
    scanf("%d", &torre);

    for (i = 0; i < torre; i++) // define o valor de i, depois a comparação e finaliza com o incremento.
{
    printf("Cima\n", i + 1); // imprime a direção do movimento.
}
    break;
case 2:
    // movimento do Bispo para diagonal.

    printf("\nDigite a quantidade de movimento do Bispo: ");
    scanf("%d", &bispo);

    i = 0; // definindo o valor de i.

    while (i < bispo) // comparação, quando a condição for falsa finaliza o loop.
    { 
        printf("Direita / Cima\n", i + 1); // imprime a direção do movimento.
        i++;
    }
    break;
case 3:
    // movimento da Rainha.

    printf("\nDigite a quantidade de movimento da Rainha: ");
    scanf("%d", &rainha);

    i = 0; // definindo o valor de i.

    do
    {
        printf("Esquerda\n"); // executa a comparação pelo menos uma vez.
        i++;
    } 
    while (i < rainha); // comparação, quando a condição for falsa finaliza o loop.

    break;
case 4:

    // movimento do Cavalo em L.

    int cavalo = 1; // flag para controlar o movimento em L

    while (cavalo--)
    {
        for (i = 0; i < 2; i++)
        {
            printf("Cima\n"); // imprime a direção do movimento 2 vezes.
        }
        printf("Direita\n"); // imprime a direção do movimento 1 vez.        
    } 
    break;
default:
   printf("\nOpção inválida!\n"); // digitou uma opção que não consta na lista.
    break;
}
    return 0;
}
