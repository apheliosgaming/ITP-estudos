//  programa pra pegar um número inteiro de 1 até 100.000 e separar seus dígitos

#include <stdio.h>

//  programa pra pegar um número inteiro de 1 até 100.000 e separar seus dígitos

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int u,d,c,m,dm,cm; // unidade, dezena, centena, milhar, dezena milhar
    
    u=n%10;
    d=(n/10)%10;
    c=(n/100)%10;
    m=(n/1000)%10;
    dm=(n/10000)%10;
    cm=(n/100000)%10;

    // separando os digitos
    
    if(100 <= n && n < 1000){
    //para números menores que 1000!e maiores que 100
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",u);
    }
    else if(1000 <= n && n < 10000){
    //para numeros menores que 10000 e maiores que 1000
    printf("%d\n",m);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",u);
    
    }
    
    else if(10000 <= n && n < 100000){
    //para numeros menores que 100000 e maiores que 10000
    printf("%d\n",dm);
    printf("%d\n",m);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",u);
    
    }
    
    else if(1 <= n && n < 10){
    //para numeros menores que 10 e maiores que 1
    printf("%d\n",u);
    
    }
    
    else if(10 <= n && n < 100){
    //para numeros menores que 100 e maiores que 10
    printf("%d\n",d);
    printf("%d\n",u);
    
    }
  
    return 0;
}
