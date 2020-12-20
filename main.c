#include <stdio.h>
#include <stdlib.h>

#define TAM 10
#define PAREDE_VERTICAL '|'
#define PAREDE_HORIZONTAL '-'
#define VAZIO ' '

void inicializaMatriz(char mat[TAM][TAM]);
void imprimirMatriz(char mat[TAM][TAM]);

int main()
{

    char mat[TAM][TAM];
    inicializaMatriz(mat);
    imprimirMatriz(mat);


    return 0;
}

void inicializaMatriz(char mat[TAM][TAM] ){
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            mat[i][0] = PAREDE_VERTICAL;
            mat[i][TAM-1] = PAREDE_VERTICAL;
            mat[0][i] = PAREDE_HORIZONTAL;
            mat[TAM-1][i] = PAREDE_HORIZONTAL;
        }
    }

    for(int i = 1; i < TAM-1; i++){
        for(int j = 1; j < TAM-1; j++){
            mat[i][j] = VAZIO;
        }
    }

}

void imprimirMatriz(char mat[TAM][TAM] ){
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%c ",mat[i][j]);
        }
        printf("\n");
    }

}

