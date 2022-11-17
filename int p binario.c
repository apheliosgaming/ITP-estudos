// binarios
#include <stdio.h>
#include <math.h>

int binariza(int n){
    int resto[32];
    int i = 0;
    if(n == 0){
        printf("%d", n);
    }
    else{
      while(n > 0){
        resto[i] = n%2;
        n /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--){
        printf("%d", resto[j]);
    }
    }
}


int main()
{
    int n;
    int binario;
    
    scanf("%d", &n);
    
    binario = binariza(n);

    return 0;
}
