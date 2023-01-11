// bola pro mato campeonato

#include <stdio.h>
#include <string.h>

// struct
typedef struct{
  char name[50];
  int vitorias, derrotas, empates, golsm, golss;
  int n;
} time;

void quantos(time *times, int qnt){
    for (int j = 0; j < qnt; j++){
        char aux;
        scanf(" %[^;]%c ", &times[j].name, &aux);
        scanf("%d ", &times[j].vitorias);
        scanf("%d ", &times[j].empates);
        scanf("%d ", &times[j].derrotas);
        scanf("%d ", &times[j].golsm);
        scanf("%d ", &times[j].golss);
    }
}

void bubbles (time *times, int qnt){
   for (int i = 0 ; i < qnt - 1; i++){
        for (int j= 0 ; j < qnt - i - 1; j++){
            
            int p = (3 * times[j].vitorias) + (1 * times[j].empates);
            int p2 = (3 * times[j + 1].vitorias) + (1 * times[j + 1].empates);
            
        if(p < p2){
            time aux=times[j];
            times[j]  = times[j+1];
            times[j+1] = aux;
        }
        else if(p == p2){
            if(times[j].vitorias < times[j+1].vitorias){
                time aux=times[j];
                times[j]  = times[j+1];
                times[j+1] = aux;
        }
            else if (times[j].vitorias == times[j + 1].vitorias){
                if(times[j].golsm - times[j].golss < times[j+1].golsm - times[j + 1].golss){
                time aux=times[j];
                times[j]  = times[j+1];
                times[j+1] = aux;
                }
            }
            
      
        }
            }
        }
}

void printar (time *times, int qnt){
        int pontos, saldo, jogos;
        printf("Tabela do campeonato:\n");
        printf("Nome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols\n");
         for(int i = 0; i < qnt; i++){
             pontos = (3 * times[i].vitorias) + (1 * times[i].empates);
             jogos = times[i].vitorias + times[i].empates + times[i].derrotas;
             saldo = times[i].golsm - times[i].golss;
             
             
            printf("%s| ", times[i].name);
            printf("%d| ", pontos);
            printf("%d| ", jogos);
            printf("%d| ", times[i].vitorias);
            printf("%d| ", times[i].empates);
            printf("%d| ", times[i].derrotas);
            printf("%d| ", times[i].golsm);
            printf("%d| ", times[i].golss);
            printf("%d\n", saldo);
           
            }
            printf("\nTimes na zona da libertadores:\n");
            for (int i = 0; i < 6; i++){
              printf("%s\n", times[i].name);
          } 
          printf("\nTimes rebaixados:\n");
           for (int i = qnt - 1; i > qnt - 5; i--){
              printf("%s\n", times[i].name);
          } 
  }
  

int main() {
    int n;
    scanf("%d", &n);
    
    time times[n];
    quantos(times, n);
    bubbles(times, n);
    printar(times, n);
    
  return 0;
  
}

  