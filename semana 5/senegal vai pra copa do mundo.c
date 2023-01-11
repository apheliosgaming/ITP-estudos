#include <stdio.h>

int calcular_aposta (int largura, int altura, int bandeira[altura][largura], int ninicial, char cor){
 
int v;

v = (altura*largura)/3;
  
 
if (cor == 'G')
    {
      
v = v * (ninicial + 1);
    
}
  else if (cor == 'Y')
    {
      
v = v * (ninicial + 2);
    
}
  else
    {
      
v = v * (ninicial + 3);
    
}
  
 
return v;

}

 

int
main ()
{
  
int ninicial, largura, altura, valor, aposta;
  
char cor;
  
scanf ("%d %d %c", &largura, &ninicial, &cor);
  
 
altura = (largura * 2) / 3;

int bandeira[altura][largura];
  
  
 
aposta = calcular_aposta(largura, altura, bandeira, ninicial, cor);
 
printf ("%d", aposta);
  
 
return 0;

}