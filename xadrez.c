#include <stdio.h>

// Desafio Mestre de Xadrez - MateCheck
// CRIANDO OS PROCESSOS FORA DO INT MAIN, ELES SERÃO
// UTILIZADOS QUANDO FOR REALIZAR A RECURSIVIDADE

void torre(int casas){                  
    if(casas > 0){
        printf("Torre: Direita\n");
        torre(casas -1);
    }
}

void bispo(int casas){
    if(casas > 0){
        printf("Bispo: Cima - Direita\n");
        bispo(casas - 1);
    }
}

void cavalo(int casas){
    for (int i = 0; i < 2; i++)
    {
        printf("Cavalo: Cima\n");
    }
        printf("Cavalo: Direita\n");
}

void rainha(int casas){
    if(casas > 0){
        printf("Rainha: Esquerda\n");
        rainha(casas - 1);
    }
}

int main() {            // INFORMANDO O VALOR DE CADA VARIAVEL
                        // ESSE VALOR SERÁ UTILIZANDO PARA DETERMINAR O NUMERO DE LOOPS
    torre(5);
    printf("\n");
    bispo(5);
    printf("\n");
    rainha(8);
    printf("\n");
    cavalo(2);

    return 0;
}

    /*CODIGO UTILIZADO NOS NIVES NOVATO E AVENTUREIRO.
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

    printf("Quantas casas deseja mover?\n"); //Entrada do usuário (8)
    scanf("%d", &numero);                   //Guardar valor na variavel numero.
    printf("Para qual direção?\n"); //Entrada do usuário (ESQUERDA).
    scanf("%s", direcao);          //Guardar valor na variavel direcao.

    printf("\n");

   do
    {                                  
        printf("%s\n", direcao);
        controle++;
    } while (controle < numero);
    
    printf("\n");
    // Implementação de Movimentação do Cavalo
    // Mover o Cavalo duas casas para cima e uma casa para direita.

    printf("****Implementação de Movimentação do Cavalo****\n");
    printf("\n");
    printf("Mover o Cavalo 2 casas para cima e 1 casa para a direita.\n");

    int movimento = 1;   //Variavel que será utilizada como controle no loop interno

    for (int cavalo = 1; cavalo < 2; cavalo++)  //Iniciando o loop for, declarando a variavel, a condição e o controle.
    {
        while (movimento < 3)                   //Iniciando o loop while (interno)
        {
            printf("Cima\n");
            movimento++;
        }
        printf("Direita\n");
    }
    
    return 0;
}*/

