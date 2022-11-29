// churrasco itp struct

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct i{
    char item[50];
    int preco;
    int qnt;
    
} Comida;

int main(){
    int n, qnt, cont = 0;
    Comida comidas[50];
    int oq;
    
    
    do{
            scanf(" %s%d %d", comidas[cont].item, &comidas[cont].preco, &comidas[cont].qnt);
            cont++;
            scanf("%d", &oq);
        } while(oq == 1);
        
            scanf("%d", &n);
    
    double total = 0;
    
    for(int i = 0; i < cont; i++){
        total += comidas[i].preco * comidas[i].qnt;
    }
    
    printf("Valor: R$ %.2lf\n", total);
    printf("Divisão R$ %.2lf para cada participante.", total/n);
    
    
    return 0;
}