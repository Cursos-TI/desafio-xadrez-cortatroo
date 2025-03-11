#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Implementação de Movimentação da Torre
    // Mover a Torre 5 casas para a direita.

    printf("****Implementação de Movimentação da Torre****\n");
    printf("\n");
    printf("Mover a Torre 5 casas para a direita\n");

    for (int i = 0; i < 5; i++) //estrutura de repetição.
    {
        printf("Direita\n"); //Imprime a direção do movimento.
    }
    printf("\n");

    // Implementação de Movimentação do Bispo
    // Mover o Bispo 5 casas para na diagonal (para cima a direita)
    
    printf("****Implementação de Movimentação do Bispo****\n");
    printf("\n");
    printf("Mover o Bispo 5 casas na diagonal (para cima a direita)\n");

    int i = 0; //Declarando a variavel i
    
    while (i < 5)
    {
        printf("Para cima a direita\n");
        i++;
    }
    
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Mover a Rainha 8 casas para a esquerda.

    printf("****Implementação de Movimentação da Rainha****\n");
    printf("\n");
    printf("Mover a Rainha 8 casas para a esquerda.\n");
    
    int numero; //Variavel que irá receber o número de casas a andar, no exemplo 8.
    int controle = 0; //Será a variavel de controle.
    char direcao[10]; //Variavel que irá receber a direção que Rainha irá mover.

    printf("Quantas casas deseja mover?\n"); //Entrada do usuário.
    scanf("%d", &numero);                   //Guardar valor na variavel numero.
    printf("Para qual direção?\n"); //Entrada do usuário.
    scanf("%s", direcao);          //Guardar valor na variavel direcao.

    printf("\n");

   do
    {                                  
        printf("%s\n", direcao);
        controle++;
    } while (controle < numero);
    
    return 0;
}

    //##################################################################################
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


