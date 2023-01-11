#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// função

int EhPerfect (int d)
{
  int f, soma = 0;
  for(f = 1; f <= d/2; f++){
    if (d % f == 0)
    {
      soma += f;
  }
  }
  if(d == soma){
      return 1; // perfeito
  }
  else{
      return 0; // n perfeito
  }

}

// verificando se o numero eh perfeito

int main ()
{
 int r, num; // numero de casos, numeros
 int a;
 scanf("%d", &r);
 
 while (r--){
     scanf("%d", &num);
     a = EhPerfect (num);
 if (a == true){
     printf("%d eh perfeito\n", num);
 }
 else{
     printf("%d nao eh perfeito\n", num);
 }
 }
 return 0;
 
}