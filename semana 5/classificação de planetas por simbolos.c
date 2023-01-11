// fronteira final
#include <stdio.h>

int main()
{
    
    int n, m, c = 0;
    char matriz[n][m], p;
    float des = 0, hostil = 0, aqua = 0, veg = 0;
    float naqua, ndes, nhostil, nveg, ntotal;
    
    scanf("%d%d",&n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf(" %c", &matriz[i][j]);
            
            if ((matriz[i][j]) =='^'){
                des++;
            }
            else if ((matriz[i][j]) =='X'){
                hostil++;
            }
            else if ((matriz[i][j]) =='~'){
            aqua++;
            }
            else if ((matriz[i][j]) =='*'){
                veg++;
            }
   }
    }
    
    // -------------------------------------
    
    ntotal = n*m;
    naqua = ((aqua*100)/ntotal);
    ndes = ((des*100)/ntotal);
    nveg = ((veg*100)/ntotal);
    nhostil = ((hostil*100)/ntotal);
    
    // -------------------------------------
    
    if(nhostil >= 1){
        printf("Planeta Hostil");
    }
    else if(naqua >= 85){
        printf("Planeta Aquático");
      
        
    }
    else if(nveg >= 65){
        printf("Planeta Selvagem");
        
    }
    else if(ndes >= 60){
        printf("Planeta Desértico");
       
    }
    else if((naqua >= 50) && (nveg >= 20)){
        printf("Planeta Classe M");
       
        
    }
    else{
        printf("Planeta Inóspito");
        
        
    }
       
    
    
    
    return 0;
}