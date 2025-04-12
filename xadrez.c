#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int torre;
    int bispo;
    int rainha;
    int opcao;

    printf("### Jogo Xadrez ###\n");
    printf("Escolha a peça para movimentar: ");
    printf("\n1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("Digite a quantidade de movimento da Torre: ");
    scanf("%d", &torre);

    // mover a Torre 5 casas para frente
    for (torre = 0; torre < 5; torre++)
{
    printf("Frente\n"); // imprime a direção do movimento
}
    break;
case 2:
    printf("Teste\n");
    break;
case 3:
    printf("Teste\n");
    break;

default:
    printf("Opção Invalida!");
    break;
}
    return 0;
}
