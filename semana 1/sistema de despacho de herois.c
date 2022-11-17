//despacho de herois

#include <stdio.h>

int 
main () 
{
  
 
 
int q, c, a;		// quantida, classe e ameaC'a
  scanf ("%d%d%d", &q, &c, &a);
  
 
 
// um caso para cada ameaC'a
    
if (a == 1 && c > 1 && q != 0 || c == 1 && q >= 3)
    
    {
      
 
printf ("Heróis vencerão!\n");
    
 
 
}

else if (q == 0)
    
    {
      
 
printf ("Melhor chamar Saitama!");
    
 
 
}
  
 
 
  else if (a == 1 && c < 1 || c == 1 && q < 3 && a ==1)
    
    {
      
 
printf ("Melhor chamar Saitama!\n");
    
 
 
}
  
 
  else if (a == 2 && c > 2 || c == 2 && q >= 3 && a ==2)
    
    {
      
 
printf ("Heróis vencerão!");
    
 
 
}
  
 
 
  else if (a == 2 && c < 2 || c == 2 && q < 3 && a == 2)
    
    {
      
 
printf ("Melhor chamar Saitama!");
    
 
 
}
  
 
  else if (a == 3 && c > 3 || c == 3 && q >= 3 && a == 3)
    
    {
      
 
printf ("Heróis vencerão!");
    
 
 
}
  
 
  else if (a == 3 && c < 3 || c == 3 && q < 3 && a == 3)
    
    {
      
 
printf ("Melhor chamar Saitama!");
    
 
 
}

else if (a == 4 && c < 4 || c == 4 && q < 3 && a == 4)
    
    {
      
 
printf ("Melhor chamar Saitama!");

}
  
 
  else if (a == 4 && c >= 4)
    
    {
      
 
printf ("Heróis vencerão!");
    
 
}
  
 else if (a == 5 && c < 5){
    printf("Melhor chamar Saitama!");
}
 
  else if (a == 5 && c == 5)
    
    {
      
 
printf ("Heróis vencerão!");
    
 
}
  
 
return 0;

 
}