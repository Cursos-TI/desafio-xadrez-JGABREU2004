#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int movimentacao;

    printf("Digite a quantidade de movimento da Torre: ");
    scanf("%d", &movimentacao);

    while (movimentacao <= 8)
    {
        printf("Frente \n");
        movimentacao++;
    }
    
    return 0;
}
