// crud

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
    char sex;
} algm;

algm criar (char nome[], int idade, char sex){
    algm pessoa = {.idade = idade, .sex = sex};
    strcpy(pessoa.nome, nome);

    return pessoa;
}

algm qmqm(){
    char nome[50];
    char sex;
    int idade;
    
    scanf(" %[^\n]", nome);
    scanf(" %d %c", &idade, &sex);
    
    return criar(nome, idade, sex);
}

int i(algm indv[], algm qm, int qnt){
    indv[qnt] = qm;
    return qnt + 1;
}
int d(algm indv[], algm ngm, int qnt){
    for(int i = 0; i < (qnt - 1); i++){
        if((strcmp(indv[i].nome, ngm.nome) == 0) && (indv[i].idade == ngm.idade) && (indv[i].sex == ngm.sex)){ 
            for(int j = i; j < (qnt - 1); j++)
                indv[j] = indv[j+1];
            
            return qnt - 1;
        }
    }
    return qnt;
    }
    
void p(algm indv[], int qnt){
     for(int i = 0; i < qnt; i++) 
        printf("%s,%d,%c\n", indv[i].nome, indv[i].idade, indv[i].sex);
    
}


int main(){
    int n, sla = 0;
    algm pessoas[50];
    char oq;
    
    
    
    while(sla == 0){
        
        scanf(" %c", &oq);
        
        switch (oq){
        case 'i':
            n = i(pessoas, qmqm(), n);
            break;
        
        case 'd':
            n = d(pessoas, qmqm(), n);
            break;
            
        case 'p':
            p(pessoas, n);
            
            return 0;
            
            break;

        }
        
    }
    
    return 0;
}
  