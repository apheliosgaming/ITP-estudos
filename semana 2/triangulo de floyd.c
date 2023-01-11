// triangulo de floyd

#include <stdio.h>

int 
main () 
{
  
 
 
int n; // numero colocado por alguem
int inicial = 0; // soma dos numeros desde o 1
  scanf ("%d", &n);

// formaçao do triangulo

for (int linha = 1; linha <= n; linha++){
    for (int coluna = 1; coluna <= linha; coluna++){
      if(n>0)
        inicial++;
        printf("%2d ", inicial);
        

          
    
    }
    
    printf("\n");
      
    
}

    if(n <= 0){
        printf("Você entrou com %d, tente de novo na próxima", n);
    }
    return 0;

}