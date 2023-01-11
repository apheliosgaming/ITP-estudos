// diferença simetrica

#include<stdio.h>
int
main () 
{
  
int a[10], b[10], c[10], d[10], m = 0, k = 0, n =
    0, n1, n2, l, u, i, j, sy[100], swap;
  
 
scanf ("%d", &n1);
  
scanf ("%d", &n2);
  
 
 
for (i = 0; i < n1; i++)
    
scanf ("%d", &a[i]);
  
 
 
for (i = 0; i < n2; i++)
    
scanf ("%d", &b[i]);
  
 
    // achando os elementos iguais  
    
for (i = 0; i < n1; i++)
    
    {
      
for (j = 0; j < n2; j++)
	
	{
	  
if (b[j] == a[i])
	    
break;
	
}
      
if (j == n2)
	
	{
	  
 
for (l = 0; l < k; l++)
	    
	    {
	      
if (c[l] == a[i])
		
break;
	    
}
	  
if (l == k)
	    
	    {
	      
c[k] = a[i];
	      
k++;
	    
}
	
}
    
 
}
  
 
for (i = 0; i < n2; i++)
    
    {
      
for (j = 0; j < n1; j++)
	
	{
	  
if (b[i] == a[j])
	    
break;
	
}
      
if (j == n1)
	
	{
	  
for (l = 0; l < m; l++)
	    
	    {
	      
if (d[l] == b[i])
		
break;
	    
}
	  
if (l == m)
	    
	    {
	      
d[m] = b[i];
	      
m++;
	    
}
	
}
    
 
}
  
 
    //diferença simetrica
    
for (i = 0; i < k; i++)
    
    {
      
sy[n] = c[i];
      
n++;
    
}
  
for (i = 0; i < m; i++)
    
    {
      
sy[n] = d[i];
      
n++;
    
}

// ordem crescente

for (int i = 0; i < n - 1; i++)
    
    {
      
for (int j = 0; j < n - 1; j++)
	
	{
	  
if (sy[j + 1] < sy[j]){
	      
swap = sy[j + 1];
	      
sy[j + 1] = sy[j];
	      
sy[j] = swap;
	    
}
}
}
  
 // fim
 
  
for (i = 0; i < n; i++)
    
printf ("%d ", sy[i]);
  
return 0;

 
}