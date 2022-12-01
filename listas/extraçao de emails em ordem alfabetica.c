// extraçao de emails c ordem alfabetica

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void localiza(int* inicio, int* fim, char* email){
    int eh = 0;
    
    for(int i = 0; i < strlen(email); i++){
        if(email[i] == '@'){
            *inicio = i; //acessando o endereço do ponteiro
            eh = 1;
        }
        else if(email[i] == '.' && eh == 1){
            *fim = i;
            break;
        }
    }
}

void ordem(int p, char** lista){
    char *temp;
    for (int i = 0; i < p - 1 ; i++){
        for (int j = i + 1; j < p; j++){
            if (strcmp(lista[i], lista[j]) > 0){ // ordem alfabetica
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }
    
    for(int k = 0; k < p; k++){
        printf("%s\n", lista[k]);
    }
}

int main(){
    int arroba, ponto, p = 0;
    char email[69];
    char **temp = NULL;
    
    scanf(" %s", email);
    
    
    while(strcmp(email, "FIM")){
       localiza(&arroba, &ponto, email);
       temp = realloc(temp, sizeof(char*) * (p + 1));
       temp[p] = calloc(ponto-arroba + 1, sizeof(char));
       
       for(int i = arroba + 1, j = 0; i < ponto; i++, j++){
           temp[p][j] = email[i]; // copiando o email na lista
       }
       
       p++;
       
       scanf(" %s", email);
      
   }
   
   ordem(p, temp);
    
    return 0;
}