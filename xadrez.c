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
    printf("\nDigite a opção: ");
    scanf("%d", &opcao);

    // Colocando os movimentos e loops dentro do jogo.

switch (opcao)
{
case 1:
    // mover a Torre para frente.

    printf("\nDigite a quantidade de movimento da Torre: ");
    scanf("%d", &torre);

    for (i = 0; i < torre; i++) // define o valor de i, depois a comparação e finaliza com o incremento.
{
    printf("Frente\n", i + 1); // imprime a direção do movimento.
}
    break;
case 2:
    // mover o Bispo para diagonal (direita/frente).

    printf("\nDigite a quantidade de movimento do Bispo: ");
    scanf("%d", &bispo);

    i = 0; // definindo o valor de i.

    while (i < bispo) // comparação, quando a condição for falsa finaliza o loop.
    { 
        printf("Direita / Frente\n", i + 1); // imprime a direção do movimento.
        i++;
    }
    break;
case 3:
    // mover a Rainha para esquerda.

    printf("\nDigite a quantidade de movimento da Rainha: ");
    scanf("%d", &rainha);

    i = 0; // definindo o valor de i.

    do
    {
        printf("Esquerda\n", i + 1); // executa a comparação pelo menos uma vez.
        i++;
    } 
    while (i < rainha); // comparação, quando a condição for falsa finaliza o loop.

    break;
default:
   printf("\nOpção inválida!\n"); // digitou uma opção que não consta na lista.
    break;
}
    return 0;
}
