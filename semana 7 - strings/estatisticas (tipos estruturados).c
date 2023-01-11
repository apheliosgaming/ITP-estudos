// etatistica de times
#include <stdio.h>
#include <string.h>

// struct
typedef struct{
  char name[50];
  int golsm, golss;
  int n;
} time;

void quantos(time *times, int qnt){
    for (int j = 0; j < qnt; j++){
        char aux;
        scanf(" %[^\n]", &times[j].name);
        scanf("%d", &times[j].golsm);
        scanf("%d", &times[j].golss);
    }
}

void bubbles (time *times, int qnt){
   for (int i = 0 ; i < (qnt - 1); i++){
        for (int j= 0 ; j < qnt - i - 1; j++){
        if(times[j].golsm < times[j+1].golsm){
            time aux=times[j];
            times[j]  = times[j+1];
            times[j+1] = aux;
            
        }
            }
        }
}

int main() {
    int n;
    scanf("%d", &n);
    
    time times[n];
    quantos(times, n);
    bubbles(times, n);
    

// printar as structs

for(int i = 0; i < n; i++){
  printf("%d - %s\n", i + 1, times[i].name);
  printf("Gols marcados: %d\n", times[i].golsm);
  printf("Gols sofridos: %d\n", times[i].golss);
  }
  
  return 0;
  
}

  