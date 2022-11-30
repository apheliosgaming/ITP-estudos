// extraçao de emails

#include <stdio.h>
#include <string.h>

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

int main(){
    int arroba, ponto;
    char email[69];
    
    scanf(" %s", email);
    
    while(strcmp(email, "FIM")){
       localiza(&arroba, &ponto, email);
       
       for(int i = arroba + 1; i < ponto; i++){
           printf("%c", email[i]);
       }
       printf("\n");
       scanf(" %s", email);
       
   }
    
    return 0;
}