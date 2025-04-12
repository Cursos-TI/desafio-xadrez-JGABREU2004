#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // criando as variáveis do jogo.

    int torre, bispo, rainha, opcao, i;
    char direcao;

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
case 1: // movimento da Torre.

    printf("\n** Direção do movimento **\n");
    printf("D. Direita\n");
    printf("E. Esquerda\n");
    printf("C. Cima\n");
    printf("B. Baixo\n");
    printf("\nDigite a direção: ");
    scanf(" %c", &direcao);
    printf("\nDigite a quantidade de movimento da Torre: ");
    scanf("%d", &torre);    

    switch (direcao) // direção e quantidade de movimento da Torre.
    {
    case 'D':
    case 'd':
        for (i = 0; i < torre; i++) // define o valor de i, depois a comparação e finaliza com o incremento.
    {
            printf("Direita\n"); // imprime o movimento para direita.
    }
    break;
    case 'E':
    case 'e':
        for (i = 0; i < torre; i++) // define o valor de i, depois a comparação e finaliza com o incremento.
    {
            printf("Esquerda\n"); // imprime o movimento para esquerda.
    }
    break;
    case 'C':
    case 'c':
        for (i = 0; i < torre; i++) // define o valor de i, depois a comparação e finaliza com o incremento.
    {
            printf("Cima\n"); // imprime o movimento para cima.
    }
    break;
    case 'B':
    case 'b':
        for (i = 0; i < torre; i++) // define o valor de i, depois a comparação e finaliza com o incremento.
    {
            printf("Baixo\n"); // imprime o movimento para baixo.
    }
    break;
    default:
        printf("Direção inválida\n");
    break;
    }
break;
case 2: // movimento do Bispo para diagonal.

    printf("\n** Direção do movimento **\n");
    printf("A. Direita/Baixo\n");
    printf("B. Esquerda/Baixo\n");
    printf("C. Direita/Cima\n");
    printf("D. Esquerda/Cima\n");
    printf("\nDigite a direção: ");
    scanf(" %c", &direcao);
    printf("\nDigite a quantidade de movimento do Bispo: ");
    scanf("%d", &bispo);    

    switch (direcao) // direção e quantidade de movimento do Bispo.
    {
    case 'A':
    case 'a':
        i = 0; // definindo o valor de i.

        while (i < bispo) // comparação, quando a condição for falsa finaliza o loop.
    { 
            printf("Direita / Baixo\n"); // imprime a direção do movimento.
            i++;
    }
    break;
    case 'B':
    case 'b':
        i = 0; // definindo o valor de i.

        while (i < bispo) // comparação, quando a condição for falsa finaliza o loop.
    { 
            printf("Esquerda / Baixo\n"); // imprime a direção do movimento.
            i++;
    }
    break;
    case 'C':
    case 'c':
        i = 0; // definindo o valor de i.

        while (i < bispo) // comparação, quando a condição for falsa finaliza o loop.
    { 
            printf("Direita / Cima\n"); // imprime a direção do movimento.
            i++;
    }
    break;
    case 'D':
    case 'd':
        i = 0; // definindo o valor de i.

        while (i < bispo) // comparação, quando a condição for falsa finaliza o loop.
    { 
            printf("Esquerda / Cima\n"); // imprime a direção do movimento.
            i++;
    }
    break;
    default:
        printf("Direção inválida\n");
    break;
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

    printf("Movimento do Cavalo em L\n");

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
