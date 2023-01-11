// notas alunos medias

#include <stdio.h>

int 
main (void) 
{
    int na, i = 0, m = 0, p = 0, w = 0, c = 0, k = 0, l = 0; // numero de alunos e contadores
    float nma;
    scanf("%d", &na);
    float vetor[na];

    for (int i = 1; i <= na; i++)
    {
    scanf("%d -", &i);
    scanf("%f", &vetor[i]);
    }

    for (int i = 1; i <= na; i++)
    {
    while(vetor[i] >= 7){
        while (c == 0){
        printf("Aprovados: ");
        c = c + 1;
        }
        if (m == 0){
        printf("%i (%0.1f)", i, vetor[i]);
        m = m + 1;
        }
        else if (m >= 1){
        printf(", %i (%0.1f)", i, vetor[i]);
        }
         
         break;
    }
    }
     for (int i = 1; i <= na; i++)
    {
    while(vetor[i] < 7 && vetor[i] >= 5){
    
        while (k == 0){
        printf("\n");
        printf("Recuperação: ");
        k++;
        }
        if (p == 0){
            printf("%i (%0.1f)", i, vetor[i]);
            p++;
            
        }
        else if(p >= 1){
    printf(", %i (%0.1f)", i, vetor[i]);
    }
    break;
    }
    }
     for (int i = 1; i <= na; i++)
    {
    while (vetor[i] < 5){
        while (l == 0){
        printf("\n");
        printf("Reprovados: ");
        l++;
        }
        if (w ==0){
        printf("%i (%0.1f)", i, vetor[i]);
        w++;
        }
        else if(w >= 1){
        printf(", %i (%0.1f)", i, vetor[i]);
        }
        break;
    }
    }
    return 0;

}
