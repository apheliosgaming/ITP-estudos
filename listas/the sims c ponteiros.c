// sims ponteiros

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void limita(int* fome, int* sede, int* banheiro, int* sono, int* tedio){
    if(*fome > 100){
        *fome = 100;
    }
    if(*sede > 100){
        *sede = 100;
    }
    if(*banheiro > 100){
        *banheiro = 100;
    }
    if(*sono > 100){
        *sono = 100;
    }
    if(*tedio > 100){
        *tedio = 100;
    }
}

int alertas(int* fome, int* sede, int* banheiro, int* sono, int* tedio){
    int vivo = 1;

    if(*tedio <= 0){
        printf("Game Over! Morreu deprimido...\n");
        vivo = 0;
    }
    if(*fome <= 0){
        printf("Game Over! Morreu de fome\n");
        vivo = 0;
    }
    if(*sede <= 0){
        printf("Game Over! Morreu de sede\n");
        vivo = 0;
    }
    if(*banheiro <= 0){
        printf("Game Over! Morreu apertado...\n");
        vivo = 0;
    }
    if(*sono <= 0){
        printf("Game Over! Morreu dormindo...\n");
        vivo = 0;
    }
    
    if(vivo == 0){
        return 0;
    }
    
    if(*fome <= 15){
        printf("Alerta: fome está com valor baixo\n");
    }
    if(*sede <= 15){
        printf("Alerta: sede está com valor baixo\n");
    }
    if(*banheiro <= 15){
        printf("Alerta: banheiro está com valor baixo\n");
    }
    if(*sono <= 15){
        printf("Alerta: sono está com valor baixo\n");
    }
    if(*tedio <= 15){
        printf("Alerta: tédio está com valor baixo\n");
    }
    
    return vivo;
    
}

void mudastats(int* fome, int* sede, int* banheiro, int* sono, int* tedio, int fnovo, int senovo, int bnovo, int sonovo, int tnovo){
    
    *fome += fnovo;
    *sede += senovo;
    *banheiro += bnovo;
    *sono += sonovo;
    *tedio += tnovo;
    
}

int simula_sims(int* fome, int* sede, int* banheiro, int* sono, int* tedio){
    char string[69];
    int funfa = 0;
    
    scanf(" %[^\n]", string); //usa [^\n] em vez de s pq há elementos com espaço
    
    if(strcmp(string, "comer") == 0){ //jogador botou o sim p comer
        mudastats(fome, sede, banheiro, sono, tedio, 30, -5, -15, -5, -5);
    }
    else if(strcmp(string, "beber") == 0){
        mudastats(fome, sede, banheiro, sono, tedio, -5, 30, -20, -5, -5);
    }
    else if(strcmp(string, "dormir") == 0){
        mudastats(fome, sede, banheiro, sono, tedio, -30, -30, -30, 80, 30);
    }
    else if(strcmp(string, "se aliviar") == 0){
        mudastats(fome, sede, banheiro, sono, tedio, -5, -5, 100, -5, -5);
    }
    else{
        mudastats(fome, sede, banheiro, sono, tedio, -20, -20, -20, -20, 80);
    }
    
    limita(fome, sede, banheiro, sono, tedio);
   
   return alertas(fome, sede, banheiro, sono, tedio);
}

void imprime_relatorio(int fome, int sede, int banheiro, int sono, int tedio){
    
    printf("Status final:\n");
    
    printf("Fome: %d\n", fome);
    printf("Sede: %d\n", sede);
    printf("Banheiro: %d\n", banheiro);
    printf("Sono: %d\n", sono);
    printf("Tédio: %d\n", tedio);
}

int main(){
    int fome, sede, banheiro, sono, tedio;
    int acoes;
    
    scanf("%d%d%d%d%d", &fome, &sede, &banheiro, &sono, &tedio);
    
    scanf("%d", &acoes);

    for(int i = 0; i < acoes; i++){
        int ret = simula_sims(&fome, &sede, &banheiro, &sono, &tedio);
        
        if(ret == 0) break;
        
       }
    
    imprime_relatorio(fome, sede, banheiro, sono, tedio);
    
    return 0;
}