#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>


// frunção

int EhPar (int d)
{
  if (d % 2 == 0)
    {
      return 1;
    }
  else{
        return 0;
    }
}

int main ()
{

  int num;
  int a;
  scanf ("%d", &num);

  a = EhPar (num);

  if (a == true)
    {
      printf ("true");

    }
  else
    {
      printf ("false");
    }

  return 0;
}