// eleições de bairro

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int n;
    int votos;
} Votos;

int compute_votes(int n, int votes[n], int *most_voted, int *second_most_voted){
    
    Votos chapas[30];
    Votos swap;
    
    for(int i = 0; i < 30;  i++){
        chapas[i].n = i + 1;
        chapas[i].votos = 0;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 30; j++){
            if (votes[i] == chapas[j].n) 
            {
                chapas[j].votos++;
            }
        }
     }
        
    for (int k = 0; k < 30 - 1; ++k) {
        for (int i = 0; i < 30 - k - 1; ++i) {
            if (chapas[i].votos < chapas[i + 1].votos) 
            {
            swap = chapas[i];
            chapas[i] = chapas[i + 1];
            chapas[i + 1] = swap;
      }
    }
  }
  
    *most_voted = chapas[0].n;
    *second_most_voted = chapas[1].n;
  
}

int main()
{
    int n;
    int primeiro;
    int segundo;
    
    scanf("%d", &n);
    
    int votos[n];
    
    for (int i = 0; i < n; i++){
        scanf("%d", &votos[i]);
    }
    
    compute_votes(n, votos, &primeiro, &segundo);
    
    printf("%d %d", primeiro, segundo);
    
    return 0;
}
