// valores unicos

#include <stdio.h>

void ordena(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = i; j < tamanho; j++)
        {
            if (vetor[i] > vetor[j])
            {
                int swap = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = swap;
            }
        }
    }
}

void Vetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
}


int main()
{
    int n, j, k;
    int vetor[10];
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    
    // tirar valores duplicados
    for( int i = 0; i < n; i++ )
    {
        for( j = i + 1; j < n; )
        {
            if( vetor[j] == vetor[i] )
            {
                for( k = j; k < n; k++ )
                    vetor[k] = vetor[k + 1];

                n--;
            }
            else
            {
                j++;
            }
        }
    }
    //
    
    
    
    ordena(vetor, n);
    
    Vetor(vetor, n);
    
  


return 0;

 
}
