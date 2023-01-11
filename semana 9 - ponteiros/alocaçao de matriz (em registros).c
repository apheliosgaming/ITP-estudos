// alocaçao de matriz

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int nlin, ncol;
    int **mat;
} Matrix;

Matrix* createMatrix(int nlin, int ncol){
    Matrix *matrix = calloc(1, sizeof(Matrix));
    
    matrix->nlin = nlin;
    matrix->ncol = ncol;
    matrix->mat = calloc(nlin, sizeof(int *));
    
    for (int i = 0; i < nlin; i++) 
    {
    matrix->mat[i] = calloc(ncol, sizeof(int));
    }
    
    return matrix;
    
}

void readMatrix(Matrix *m){
    for (int i = 0; i < m->nlin; i++) {
        for (int j = 0; j < m->ncol; j++) {
      scanf("%d", &m->mat[i][j]);
    }
  }
}

void printMatrix(Matrix *m){
    for(int i = 0; i < (m->nlin); i++){
        for(int j = 0; j <= (m->ncol); j++){
            if(j == (m->ncol)){
            printf("\n");
            }
            else{
                printf("%d ", m->mat[i][j]);
            }
    }
    }
}

void destroyMatrix(Matrix **m){ 
    for (int i = 0; i < (*m)->nlin; i++){
    free((*m)->mat[i]);
  }
  
  *m = NULL;
}

int main() {
    int lin, col;
    Matrix* mat;

    scanf("%i %i", &lin, &col);
    mat = createMatrix(lin, col);
    readMatrix(mat);
    printMatrix(mat);
    destroyMatrix(&mat);
    if(mat == NULL) {
        printf("OK\n");
    }

    return 0;
}