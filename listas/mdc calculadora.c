// MDC
#include <stdio.h>
#include <math.h>

int QualMdc(int x, int y){
    int MDC;
    int d;
    if(y == 0){
        
        int MDC = x;
        
    }
    else if(x == 0){
        MDC = y;
    }
    else{
       for(int i = 1; i <= x && i <= y; i++){
			if(x % i == 0 && y%i == 0){
                MDC = i;
			}
       }
    }
    return MDC;
}

int main(){
    int n, m;
    int mdc = 0;
    
    scanf("%d%d", &n, &m);
    
    mdc = QualMdc(n, m);
    
     printf("MDC(%d , %d) = %d", n, m, mdc);
    
   return 0; 
}