#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void direita(int casas)
{
    if (casas > 0)
    { 
        printf("Direita \n");
        direita(casas - 1);
    }
}
void esquerda(int casas)
{
    if (casas > 0)
    { 
        printf("Esquerda \n");
        esquerda(casas - 1);
    }
}
void baixo(int casas)
{
    if (casas > 0)
    { 
        printf("Baixo \n");
        baixo(casas - 1);
    }
}
void cima(int casas)
{
    if (casas > 0)
    { 
        printf("Cima \n");
        cima(casas - 1);
    }
}
void direitacima(int casas)
{
    if (casas > 0)
    { 
        printf("Direita / Cima \n");
        direitacima(casas - 1);
    }
}void esquerdacima(int casas)
{
    if (casas > 0)
    { 
        printf("Esquerda / Cima \n");
        esquerdacima(casas - 1);
    }
}void direitabaixo(int casas)
{
    if (casas > 0)
    { 
        printf("Direita / Baixo \n");
        direitabaixo(casas - 1);
    }
}void esquerdabaixo(int casas)
{
    if (casas > 0)
    { 
        printf("Esquerda / Baixo \n");
        esquerdabaixo(casas - 1);
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
        direita(torre); // define a direção da Torre através da recursividade.
    break;
    case 'E':
    case 'e':
        esquerda(torre); // define a direção/movimento da Torre através da recursividade.
    break;
    case 'C':
    case 'c':
        cima(torre); // define a direção/movimento da Torre através da recursividade.
    break;
    case 'B':
    case 'b':
        baixo(torre); // define a direção/movimento da Torre através da recursividade.
    break;
    default:
        printf("Direção inválida\n");
    break;
    }
break;
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

    printf("\n** Direção do movimento **\n");
    printf("D. Direita\n");
    printf("E. Esquerda\n");
    printf("C. Cima\n");
    printf("B. Baixo\n");
    printf("A. Direita/Baixo\n");
    printf("F. Esquerda/Baixo\n");
    printf("G. Direita/Cima\n");
    printf("H. Esquerda/Cima\n");
    printf("\nDigite a direção: ");
    scanf(" %c", &direcao);
    printf("\nDigite a quantidade de movimento da Rainha: ");
    scanf("%d", &rainha);    

    switch (direcao) // direção e a quantidade de movimento da Rainha.
    {
    case 'D':
    case 'd':
    direita(rainha); // define a direção da Rainha através da recursividade.
    break;
    case 'E':
    case 'e':
    esquerda(rainha); // define a direção da Rainha através da recursividade.
    break;
    case 'C':
    case 'c':
    cima(rainha); // define a direção da Rainha através da recursividade.
    break;    
    case 'B':
    case 'b':
    baixo(rainha); // define a direção da Rainha através da recursividade.
    break;
    case 'A':
    case 'a':
    direitabaixo(rainha); // define a direção da Rainha através da recursividade.
    break;
    case 'F':
    case 'f':
    esquerdabaixo(rainha); // define a direção da Rainha através da recursividade.
    break;
    case 'G':
    case 'g':
    direitacima(rainha); // define a direção da Rainha através da recursividade.
    break;
    case 'H':
    case 'h':
    esquerdacima(rainha); // define a direção da Rainha através da recursividade.
    default:
        printf("Direção inválida\n");
    break;
    }
break;
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
