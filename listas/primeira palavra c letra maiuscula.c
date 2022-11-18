// toda palavra começando com letra maiúscula

#include <stdio.h>

int main(void){
  char letra[60];
  
  scanf("%[^\n]s", letra);
  
  for(int i = 0; letra[i] != '\0'; i++){
    if(i == 0){
        if(letra[i] >= 'a' && letra[i] <= 'z'){
          letra[i] -= 32; // subtrai o char 32 pra ficar minúsculo
      }
    }
      
    else if(letra[i] == ' '){
        i++;
        
        if(letra[i] >= 'a' && letra[i] <= 'z'){
            letra[i] -= 32;
        }
      }
        
    else{
        if(letra[i] >= 'A' && letra[i] <= 'Z'){
            letra[i] += 32; // soma o char 32 pra ficar maiúsculo
        }
      }
    }
    
    printf("%s", letra);

    return 0;
}