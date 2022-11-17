// Conversor de temperaturas
#include <stdio.h>

 int
main ()
{
  
 
float t, c, f, k;		// celsius, frenheit e kelvin
char escala;
scanf("%f %c", &t, &escala);

// CASO CELSIUS
    
if (escala == 'C')
    {
t == c;
f = t * 1.8 + 32;
k = t + 273.15;    
printf ("Celsius: %.2f\n", t);
      
printf ("Farenheit: %.2f\n", f);
      
printf ("Kelvin: %.2f\n", k);
    
}
  
// CASO Farenheit

else if (escala == 'F')
    {

t == f;
c = (t - 32)/1.8;
k = c + 273.15;
  
 
      
printf ("Celsius: %.2f\n", c);
      
printf ("Farenheit: %.2f\n", t);
      
printf ("Kelvin: %.2f\n", k);
    
}
  
//CASO KELVINS

else if (escala == 'K')
    {
t == k;
c = t - 273.15;
f = c * 1.8 + 32;
      
printf ("Celsius: %.2f\n", c);
      
printf ("Farenheit: %.2f\n", f);
      
printf ("Kelvin: %.2f\n", t);
    
}
  
 
return 0;

 
 
}