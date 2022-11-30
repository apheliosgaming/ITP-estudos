// vetor distinto

#include <stdio.h>
#include <stdlib.h>

float* naorepete(int n, float arr[n], int* nnovo){
    float* vetor = calloc(n, sizeof(float));
    *nnovo = 0;
    for (int i = 0; i < n; i++){
        int repete = 0;
        for (int j = 0; j < n; j++){
            if (arr[i] == arr[j] && i != j){
                repete = 1;
                break;
            }
        }
    if(repete == 0){
        vetor[*nnovo] = arr[i];
        *nnovo += 1;
    }
    }
    return vetor;
}

int main(){
    int n, nnovo;
    float* novo;
    int flag = 1;
    
    scanf("%d", &n);
    
    float vetor[n];
    
    for(int i = 0; i < n; i++){
        scanf("%f", &vetor[i]);
    }
    
    novo = naorepete(n, vetor, &nnovo);
    
    printf("[");
    
    for(int i = 0; i < nnovo; i++){
        if(flag){
            printf("%.4f", novo[i]);
            flag = 0;
        }
        else{
        printf(", %.4f", novo[i]);
        }
    }
    printf("]\n");
    
    return 0;
}