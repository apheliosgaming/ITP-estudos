// imprimir x com uma letra

#include <stdio.h>

int 
main () 
{
  
 
int coluna, linha, d;
  
char l;
  
  
 
// pra desenhar  x

scanf("%d %c", &d, &l);
    
for (linha = 0; linha < (d - 1); linha++)
    {
      
for (coluna = 0; coluna < (d - 1); coluna++)
	{
	  
if ((linha == coluna) || ((linha + coluna) == (d - 2)))
	    
printf ("%c", l);
	  
else
	    
printf (" ");
	
}
      
printf ("\n");
    
 
}
  
return 0;

}
