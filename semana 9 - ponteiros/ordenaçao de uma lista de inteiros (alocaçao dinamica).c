//ordenaçao

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble(int n, int* array){
    int swap;
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n - 1; j++){
        if(array[j] > array[j+1]){
            swap = array[j];
            array[j]  = array[j+1];
            array[j+1] = swap;
            }
            }
    }
}

int main()
{
    char str[200];
    int count = 0;
    char* pedaco;
    int* vetor;
   
    
    vetor = calloc(1, sizeof(int));
    
    scanf(" %[^\n]", str);
    pedaco = strtok(str, " "); // quebra a string usando um delimitador (nesse caso " ") e retorna suas partes
    
    for(count = 0; pedaco != NULL; count++){
        vetor[count] = atoi(pedaco); //string em int
        pedaco = strtok(NULL, " ");
        vetor = realloc(vetor, sizeof(int) * (count + 2));
    }
   
   
    bubble(count, vetor);
    
    for (int i = 0; i < count; i++) 
    {
        printf("%d ", vetor[i]);
    }
}
