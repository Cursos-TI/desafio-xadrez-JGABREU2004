#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int torre;
    int bispo;
    int rainha;
    int opcao;
    int i;

    printf("### Jogo Xadrez ###\n");
    printf("\nEscolha a peça para movimentar\n");
    printf("\n1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("\nDigite a opção: ");
    scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("Digite a quantidade de movimento da Torre: ");
    scanf("%d", &torre);

    // mover a Torre para frente
    for (i = 0; i < torre; i++)
{
    printf("Frente\n", i + 1); // imprime a direção do movimento
}
    break;
case 2:
    printf("Digite a quantidade de movimento do Bispo: ");
    scanf("%d", &bispo);

    while (bispo <= 5)
    { 
        // mover o Bispo 5 casas para diagonal (direita/frente)
        if (bispo >= 0) {
        printf("Direita / frente");
        bispo++;
        }
        else {
            printf("Movimento inválido!");
        }
    }
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
