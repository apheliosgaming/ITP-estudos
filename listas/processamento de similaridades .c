// processamento de texto (similaridade)

#include <stdio.h>
#include <string.h>

int main(void){
    int n;
    
    scanf("%d", &n);

    char palavras[n][11];
    
    for(int i = 0; i < n; i++){
        scanf(" %s", palavras[i]);
    }
    
    // primeira linha da matriz
    printf("%*s", 10, ""); // dessa forma vai imprimir 10 espaços vazios
    
    for(int i = 0; i < n; i++){
        printf("%*s", 10, palavras[i]); // numero positivo entao o alinhamento vai ser pra direita
    }
        printf("\n");
    
    //
    
    for(int i = 0; i < n; i++){
        printf("%*s", -10, palavras[i]);
        
        for(int j = 0; j < n; j++){
           int tam1 = strlen(palavras[i]);
           int tam2 = strlen(palavras[j]);
           int menor = tam1 > tam2 ? tam2 : tam1; // se tam1 for maior que tam2, retorna tam2 como menor, caso contrário retorna tam1 como menor
           int maior = tam1 > tam2 ? tam1 : tam2;
           int iguais = 0;
           char res[11];
           
           for(int k = 0; k < menor; k++){
               if(palavras[i][k] == palavras[j][k]){
                   iguais++;
               }
           }
                   
                sprintf(res, "%d/%d", iguais, maior); // impressao dentro da string
                
                printf("%*s", 10, res);
           }
               printf("\n");
               }
    
    return 0;
    
}