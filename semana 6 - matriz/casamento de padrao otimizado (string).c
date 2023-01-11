#include <stdio.h>
#include <string.h> 
int main() 
{ 
    char texto[20],padrao[20], sem[20], sub[20];
    int a,b, l = 0, p = 0, j=7, k = 0, s;
    int flag = 0;
    char *ret;
    char *ret2;
    scanf("%s\n", texto);
    scanf("%s\n", padrao);
    
    a = strlen(padrao); 
    b = strlen(texto); 
    
    ret = strstr(texto, padrao);
    strcpy(sem, &texto[strlen(padrao)]);
    
    // separandoa as palavras da string 

    int z = 0;
    
    while(texto[l] != '\0')
    {
//////
   for(int i=0;i<= (int)strlen(padrao) ;i++)
	{ 
			flag=1;
			if (texto[j]!= padrao[i])
			{
				flag=0;
				break;
			}
		
		if (flag==1){
			break;
		}
	}

   if(flag == 0){
       if(texto[l] != padrao[p]){
            // sem o contador z apenas l ele pula a ultima letra comparada
            printf("%c não\n", texto[l]);
            l++;
            p=0;
            if(texto[l] == '\0'){
                printf("\n Não achei o padrão");
                break;
            }
        }
        else{ 
            printf("%c ", padrao[p]);
            p++;
             l++;
             if(padrao[p] == '\0'){
                 printf("sim\n");
                 break;
             }
             else if(texto[l] == '\0'){
                printf("\nNão achei o padrão");
                break;
             }
        }
   }
   if(flag == 1){
        if(texto[l] != padrao[p]){
            // TODO: Se texto[l] não existe em lugar nem um de padrao, então:
            // z = l+1; // Pule o caracter fora do padrão

            printf("%c não\n", texto[l]);
            z++;
            l=z;
            p=0;
            if(texto[l] == '\0'){
                printf("\n Não achei o padrão");
                break;
            }
        }
        else{ 
            printf("%c ", padrao[p]);
             p++;
             l++;
             if(padrao[p] == '\0'){
                 printf("sim\n");
                 break;
             }
             else if(texto[l] == '\0'){
                printf("\nNão achei o padrão");
                break;
             }
        }
   }

        if (z > b-a) { // não precisa continuar verificando se o resto do texto for menor que o padrão
            printf("Não achei o padrão");
            break;
        }
    }
    
    // para onde esta o padrao (sem else pq n funciona quando boto
    
    for (int i = 0; i <= b - a; i++) { 
        int j; 
  
        for (j = 0; j < a; j++){
            if (texto[i + j] != padrao[j])
                break; 
        }
  
        if (j == a)
            printf("Achei o padrão no índice %d", i);
    }
    return 0;
}