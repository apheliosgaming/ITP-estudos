//smartphones

#include <stdio.h>

typedef struct {
    char modelo[40];
    int memoria;
    float processador;
    float camera;
    float bateria;
    
} smartphone;

int CadastrarSmartphone(int qnt, smartphone phone[]){
    smartphone aux;
    scanf(" %[^\n]", aux.modelo);
    scanf(" %d %f %f %f ", &aux.memoria, &aux.processador, &aux.camera, &aux.bateria);
    phone[qnt] = aux;
    return qnt+ 1;
}

int pesquisaSmartphones(int qnt, smartphone phone[], smartphone reqmin){
    int k = 0;
    for (int i = 0; i < qnt; i++)
    {
        if (phone[i].bateria >= reqmin.bateria && phone[i].memoria >= reqmin.memoria && phone[i].camera >= reqmin.camera && phone[i].processador >= reqmin.processador){
            
            k++;
            
            printf("Modelo: %s\n", phone[i].modelo);
            printf("Memoria: %dGB\n", phone[i].memoria);
            printf("Processador: %.2fGhz\n", phone[i].processador);
            printf("Camera: %.2fMPixels\n", phone[i].camera);
            printf("Bateria: %.2fmA\n\n", phone[i].bateria);
        }
    }

    return k;
}

int main(){
    int cad = 0, k = 0, sla;
    char escolha;
    smartphone celular[80];

    smartphone aux;

    for(sla = 0 ; ; sla++){
        scanf("%c", &escolha);

        if (escolha == 's'){
           cad = CadastrarSmartphone(cad, celular);
        }
        else{
            break;
        }
    }

    scanf("%d %f %f %f", &aux.memoria, &aux.processador, &aux.camera, &aux.bateria);
    
    k = pesquisaSmartphones(cad, celular, aux);
    
    printf("%d smartphones encontrados.", k);

    return 0;
}
  