// troco combos etc
#include <stdio.h>

 int
main ()
{
  
int combo, valor, troco, x, y;
  
scanf ("%d %d", &combo, &troco);

// valores dos combos

if (combo == 1)
    {
      
valor = 12;
    
}
  
 
else if (combo == 2)
    {
      
valor = 23;
    
}
  
 
else if (combo == 3)
    {
      
valor = 31;
    
}
  
 
else if (combo == 4)
    {
      
valor = 28;
    
}
  
 
else if (combo == 5)
    {
      
valor = 15;
    
}

y=troco - valor;
x=valor - troco;
 
// para o troco
    
if (troco == valor)
    {
      
printf ("Deu certim!");
    
 
}
  
 
else if(troco < valor)
    {
      
      
printf ("Saldo insuficiente! Falta %d reais", x);
    
}
  
 
else if (troco>valor)
    {
    
printf ("Troco = %d reais", y);
}
  
 
return 0;

 
}
