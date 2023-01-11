#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void leitura(char h[], int n){
    fgets(h, n, stdin);

   while(h[0] == '\n')
   {
      fgets(h, n, stdin);    
   }
   if(h[strlen(h) - 1] == '\n'){

      h[strlen(h) - 1] = '\0';      
   }  
}

void decod(char P[], int k){
  const char S[]=
    {'0','1','2','3','4','5','6','7','8','9',
     'A','B','C','D','E','F','G','H','I','J',
     'K','L','M','N','O','P','Q','R','S','T',
     'U','V','W','X','Y','Z','.',',','?',' ', '\0'};


  int ind[201];
  int indice;
  int algo[4];
  algo[0] = k/1000;
  algo[1] = (k - (algo[0]*1000))/100;
  algo[2] = (k - (algo[0]*1000) - (algo[1]*100))/10;
  algo[3] = k - (algo[0]*1000) - (algo[1]*100) - (algo[2]*10);

  int tam = (int)strlen(P);


  for(int i = 0; i < tam; i++){
    for(int j = 0; j < 40; j++){
      if(P[i] == S[j]){
        ind[i] = j;
      }
    }
  }
  int aux = 0;
    
  for(int i = 0; i < tam; i++){
    if(aux > 3){
      aux = aux - 4;
    }
    indice = algo[aux] + ind[i];
    if(indice > 39){
      indice = indice - 40;
    }
    P[i] = S[indice];
    aux++;
  }

  for(int i = 0; i < tam; i++){
    printf("%c", P[i]);
  }
}

int verify(char P[]){
  const char S[]=
    {'0','1','2','3','4','5','6','7','8','9',
     'A','B','C','D','E','F','G','H','I','J',
     'K','L','M','N','O','P','Q','R','S','T',
     'U','V','W','X','Y','Z','.',',','?',' ', '\0'};

  int tam = (int)strlen(P); 
  int c = 0;  

  for(int i = 0; i < tam; i++){
    for(int j = 0; j < 40; j++){
      if(P[i] == S[j]){
        c++;
      }
    }
  }
  if(c != tam){
    return 0;
  }
  else{
    return 1;
  }
}

int main(){
	char message[201];
    int chave;

	scanf("%d", &chave);
    leitura(message, 200);

  verify(message);

  if(chave > 9999){
    printf("Chave invalida!");
  }
  else if(verify(message) == 0){
    printf("Caractere invalido na entrada!");
  }
  else{
    decod(message, chave);
  }

	return 0;
}