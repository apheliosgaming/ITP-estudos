// palindromo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


void tiraespaco(char *entrada){
    int swap;
    for(int i = 0; i < strlen(entrada); i++){
        if(entrada[i] == ' '){
            for(int j = 0; j < (strlen(entrada) - i); j++){
            entrada[i + j] = entrada[i + j + 1];
            }
            
        }   
    }
}

int ehounao(char *entrada){
    int i = 0, tam, diferentes = 0;

    tam = strlen(entrada);
    tam--;

    while(tam >= i){
        if(entrada[i] != entrada[tam])
            diferentes++;
            i++;
            tam--;
    }

    if(diferentes == 0){
        return 1;
    }

    else{
        return 0;
    }
}

int palindromo(char *entrada){
   tiraespaco(entrada);
   int s = ehounao(entrada);
   
   return s;
   
}

int main(){

    char palavra[69];
    char subs[69];
    int s;

    //printf("Digite uma palavra: ");
    scanf(" %[^\n]", palavra);
    
    strcpy(subs, palavra);
    
    
    s = palindromo(subs);
    
    if(s == true){
    printf("O texto \"%s\" é palíndromo", palavra);
    }
    
    else{
    printf("O texto \"%s\" não é palíndromo", palavra);
    }

    return 0;
}