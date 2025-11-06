#include <stdio.h>

#define TAM 10   // tamanho do tabuleiro
#define NAVIO 3  // tamanho dos navios


// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    int tabuleiro[TAM][TAM];

    // 1) inicializa tabuleiro com 0
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // Coordenadas do navio horizontal (linha, coluna inicial)
    int linhaH = 2;
    int colunaH = 4;

    // Coordenadas do navio vertical (linha, coluna inicial)
    int linhaV = 5;
    int colunaV = 1;

    // validação simples de limites
    if (colunaH + NAVIO <= TAM && linhaV + NAVIO <= TAM){

        // 2) posicionar navio horizontal
        for(int i = 0; i < NAVIO; i++){
            tabuleiro[linhaH][colunaH + i] = 3;
        }

        // 3) posicionar navio vertical
        for(int i = 0; i < NAVIO; i++){
            // verificação de sobreposição
            if(tabuleiro[linhaV + i][colunaV] == 0){
                tabuleiro[linhaV + i][colunaV] = 3;
            } else{
                printf("ERRO: Sobreposicao detectada!\n");
                return 0;
            }
        }

    } else{
        printf("ERRO: Navios fora dos limites do tabuleiro!\n");
        return 0;
    }

    // 4) exibir tabuleiro
    printf("\nTABULEIRO:\n\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }




    return 0;
}
