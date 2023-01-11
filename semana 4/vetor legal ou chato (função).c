// legal chato

#include <stdio.h>

void legalchato(int vetor[])
{
    int resultado, i, subtracao = 0;
    
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &vetor[i]);
        resultado = vetor[i + 1] - vetor[i];
        
         if ((resultado%2 == 0) || (resultado == 0)){
            printf("Legal");
        }
        else{
            printf("Chato");
        }
        break;
          }
}


int 
main (void) 
{
   int n, a, c;
   scanf("%d", &n);
   int vetor[100];
   
   for (int i = 1; i < n; i++){
    
   scanf ("%d", &vetor[i]);
   }
   
   legalchato(vetor);
    
    
    
    return 0;
    
}