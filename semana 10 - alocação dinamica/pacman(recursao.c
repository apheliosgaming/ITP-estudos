// pacman

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
   int linha;
   int coluna;
   char **matriz;
} Jogo;

Jogo* mapadojogo(int linha, int coluna){
    static Jogo mapa;
    mapa.coluna = coluna;
    mapa.linha = linha;

    mapa.matriz = malloc(sizeof(char*) * linha);
    for(int i = 0; i < linha; i++){
        mapa.matriz[i] = malloc(sizeof(char) * linha);

}
    return (&mapa);
}

int Pacman(Jogo *mapa, int* rowPacman, int* colPacman){
    for(int i = 0; i < mapa->linha; i++){
        for(int j = 0; j < mapa->coluna; j++){
            if(mapa->matriz[i][j] == 'C'){
                *rowPacman = i;
                *colPacman = j;

                return 1;
            }
        }
    }
    return 0;
}
    
int bola(Jogo *mapa, int row, int col, int *bolinhas){
    
    if((row >= 0 && row < mapa->linha) && ((col + 1) >= 0 && (col + 1) < mapa->coluna)){
        if(mapa->matriz[row][col + 1] == '.'){
            mapa->matriz[row][col + 1] = ' ';
            (*bolinhas)++;

            if(bola(mapa, row, (col + 1), &(*bolinhas))) return 1;
        }
    }

    if((row >= 0 && row < mapa->linha) && ((col - 1) >= 0 && (col - 1) < mapa->coluna)){     
        if(mapa->matriz[row][col - 1] == '.'){
            mapa->matriz[row][col - 1] = ' ';
            (*bolinhas)++;

            if(bola(mapa, row, (col - 1), &(*bolinhas))) return 1;
        }
    }

    if(((row - 1) >= 0 && (row - 1) < mapa->linha) && (col >= 0 && col < mapa->coluna)){     
        if(mapa->matriz[row - 1][col] == '.'){
            mapa->matriz[row - 1][col] = ' ';
            (*bolinhas)++;

            if(bola(mapa, (row - 1), col, &(*bolinhas))) return 1;
        }
    }

    if(((row + 1) >= 0 && (row + 1) < mapa->linha) && (col >= 0 && col < mapa->coluna)){     
        if(mapa->matriz[row + 1][col] == '.'){
            mapa->matriz[row + 1][col] = ' ';
            (*bolinhas)++;

            if(bola(mapa, (row + 1), col, &(*bolinhas))) return 1;
        }
    }

    return 0;
}

int comecome(Jogo *mapa){
    int rowPacman, colPacman;
    int bolinhas = 0;

    if(Pacman(mapa, &rowPacman, &colPacman)){
        bola(mapa, rowPacman, colPacman, &bolinhas);
    }

    return bolinhas;
}

void printar(Jogo *mapa){
    for(int i = 0; i < mapa->linha; i++){
        for(int j = 0; j < mapa->coluna; j++){
        printf("%c", mapa->matriz[i][j]);
        }
        printf("\n");
        }
}

int main()
{
    
    int n, m, c = 0;
    Jogo *mapa;
    
    scanf("%d%d", &n, &m);
    
    mapa = mapadojogo(n, m);
    
    for(int i = 0; i < mapa->linha; i++){
        for(int j = 0; j < mapa->coluna; j++){
            scanf(" %c", &mapa->matriz[i][j]);
        }
    }
    
    c = comecome(mapa);
    
    printf("Total de bolinhas devoradas: %d \n", c);
    
    printf("Mapa final:\n");
    
    printar(mapa);
    
   return 0;
}