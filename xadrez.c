#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void mover(int casas, char direcao) {
    int i;
    for (i = 0; i < casas; i++) {
        switch (direcao) {
            case 'D':
            case 'd':
                printf("Direita\n");
            break;
            case 'E':
            case 'e':
                printf("Esquerda\n");
            break;  
            case 'C':
            case 'c':
                printf("Cima\n");
            break;  
            case 'B':
            case 'b':
                printf("Baixo\n");
            break;  
            case 'A':
            case 'a':
                printf("Direia / Baixo\n");
            break;  
            case 'F':
            case 'f':
                printf("Esquerda / Baixo\n");
            break;  
            case 'G':
            case 'g':
                printf("Direita / Cima\n");
            break;  
            case 'H':
            case 'h':
                printf("Esquerda / Baixo\n");
            break;  
        default:
            printf("Opção imválida!\n");
            return;
        }
    }
}    

int main() {

    // criando as variáveis do jogo.

    int torre, bispo, rainha, cavalo;
    int opcao, i;
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

    printf("\n** Direção do movimento (Torre) **\n");
    printf("D. Direita\n");
    printf("E. Esquerda\n");
    printf("C. Cima\n");
    printf("B. Baixo\n");
    printf("\nDigite a direção: ");
    scanf(" %c", &direcao);
    printf("\nDigite a quantidade de casas: ");
    scanf("%d", &torre);   
    mover(torre, direcao);

case 2: // movimento do Bispo para diagonal.

    printf("\n** Direção do movimento **\n");
    printf("A. Direita/Baixo\n");
    printf("F. Esquerda/Baixo\n");
    printf("G. Direita/Cima\n");
    printf("H. Esquerda/Cima\n");
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
    case 'F':
    case 'f':
        i = 0; // definindo o valor de i.

        while (i < bispo) // comparação, quando a condição for falsa finaliza o loop.
    { 
            printf("Esquerda / Baixo\n"); // imprime a direção do movimento.
            i++;
    }
    break;
    case 'G':
    case 'g':
        i = 0; // definindo o valor de i.

        while (i < bispo) // comparação, quando a condição for falsa finaliza o loop.
    { 
            printf("Direita / Cima\n"); // imprime a direção do movimento.
            i++;
    }
    break;
    case 'H':
    case 'h':
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
case 3: // movimento da Rainha.

    printf("\n** Direção do movimento (Rainha) **\n");
    printf("D. Direita\n");
    printf("E. Esquerda\n");
    printf("C. Cima\n");
    printf("B. Baixo\n");
    printf("A. Direita/Baixo\n"); // simula a diagonal.
    printf("F. Esquerda/Baixo\n"); // simula a diagonal.
    printf("G. Direita/Cima\n"); // simula a diagonal.
    printf("H. Esquerda/Cima\n"); // simula a diagonal.
    printf("\nDigite a direção: ");
    scanf(" %c", &direcao);
    printf("\nDigite a quantidade de casas: ");
    scanf("%d", &rainha);
    mover(rainha, direcao); // recursividade

case 4: // movimento em L do cavalo.

    printf("\n** Direção do movimento **\n");
    printf("D. Cima/Direita\n");
    printf("E. Cima/Esquerda\n");
    printf("C. Esquerda/Cima\n");
    printf("B. Esquerda/Baixo\n");
    printf("A. Direita/Cima\n");
    printf("F. Direita/Baixo\n");
    printf("G. Baixo/Direita\n");
    printf("H. Baixo/Esquerda\n");
    printf("\nDigite a direção do movimento em L: ");
    scanf(" %c", &direcao);

    cavalo = 1; // flag para controlar o movimento em L.

    switch (direcao) // direção e a quantidade de movimento da Rainha.
    {
    case 'D':
    case 'd':
        printf("\nMovimento do Cavalo em L\n");
    while (cavalo--)
    {
        for (i = 0; i < 2; i++)
        {
            printf("Cima\n"); // imprime a direção do movimento 2 vezes.
        }
        printf("Direita\n"); // imprime a direção do movimento 1 vez.        
    } 
    break;
    case 'E':
    case 'e':
    printf("\nMovimento do Cavalo em L\n");
    while (cavalo--)
    {
        for (i = 0; i < 2; i++)
        {
            printf("Cima\n"); // imprime a direção do movimento 2 vezes.
        }
        printf("Esquerda\n"); // imprime a direção do movimento 1 vez.        
    } 
    break;
    case 'C':
    case 'c':
    printf("\nMovimento do Cavalo em L\n");
    while (cavalo--)
    {
        for (i = 0; i < 2; i++)
        {
            printf("Esquerda\n"); // imprime a direção do movimento 2 vezes.
        }
        printf("Cima\n"); // imprime a direção do movimento 1 vez.        
    } 
    break;
    case 'B':
    case 'b':
    printf("\nMovimento do Cavalo em L\n");
    while (cavalo--)
    {
        for (i = 0; i < 2; i++)
        {
            printf("Esquerda\n"); // imprime a direção do movimento 2 vezes.
        }
        printf("Baixo\n"); // imprime a direção do movimento 1 vez.        
    } 
    break;
    case 'A':
    case 'a':
    printf("\nMovimento do Cavalo em L\n");
    while (cavalo--)
    {
        for (i = 0; i < 2; i++)
        {
            printf("Direita\n"); // imprime a direção do movimento 2 vezes.
        }
        printf("Cima\n"); // imprime a direção do movimento 1 vez.        
    } 
    break;
    case 'F':
    case 'f':
    printf("\nMovimento do Cavalo em L\n");
    while (cavalo--)
    {
        for (i = 0; i < 2; i++)
        {
            printf("Direita\n"); // imprime a direção do movimento 2 vezes.
        }
        printf("Baixo\n"); // imprime a direção do movimento 1 vez.        
    } 
    break;
    case 'G':
    case 'g':
    printf("\nMovimento do Cavalo em L\n");
    while (cavalo--)
    {
        for (i = 0; i < 2; i++)
        {
            printf("Baixo\n"); // imprime a direção do movimento 2 vezes.
        }
        printf("Direita\n"); // imprime a direção do movimento 1 vez.        
    } 
    break;
    case 'H':
    case 'h':
    printf("\nMovimento do Cavalo em L\n");
    while (cavalo--)
    {
        for (i = 0; i < 2; i++)
        {
            printf("Baixo\n"); // imprime a direção do movimento 2 vezes.
        }
        printf("Esquerda\n"); // imprime a direção do movimento 1 vez.        
    } 
    break;
    default:
        printf("Direção inválida\n"); // Movimento inexistente.
    break;
    }
break;
default:
   printf("\nOpção inválida!\n"); // digitou uma opção que não consta na lista.
    break;
}
    return 0;
}
