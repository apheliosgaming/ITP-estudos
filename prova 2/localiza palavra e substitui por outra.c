// substituir

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replace(char* string, char* sub, char* new_str){
    int stringLen, subLen, newLen;
    int i = 0, j, k;
    int flag = 0, start, end;
    
    
    stringLen = strlen(string);
    subLen = strlen(sub);
    newLen = strlen(new_str);

    for(i=0;i<stringLen;i++){
        flag=0;
        start=i;
        for(j=0;string[i]==sub[j];j++,i++)
            if(j==subLen-1)
                flag=1;
                end=i;
        if(flag==0)
            i-=j;
        else{
            for(j=start;j<end;j++){
                for(k=start;k<stringLen;k++)
                    string[k]=string[k+1];
                
                    stringLen--;
                    i--;
                
            }
    for(j=start;j<start+newLen;j++){
        for(k=stringLen;k>=j;k--)
            string[k+1]=string[k];
            string[j]=new_str[j-start];
            stringLen++;
            i++;
        
    }
            
        }
        
    }
}

int padrao(int pos, char* g, char* p){
    for(int i = 0; i < strlen(p); i++){
        if(g[pos + i] != p[i]){
            return 0;
        }
    }
    
    return 1;
}

int main(){
    char A[101], B[101];
    char nova[101];
    char* procura;
    
    char* rep = NULL;
    
    gets(A);
    gets(B);
    gets(nova);
    
    procura = strstr(A, B);
   
   replace(A, B, nova);
   
   
    if(procura != NULL){

    printf("%s", A);
    }
    else{
        printf("Palavra não encontrada no texto!");
    }
   

    //free(rep);
    
    return 0;
}