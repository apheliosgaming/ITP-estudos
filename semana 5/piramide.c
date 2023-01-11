// piramide

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int matriz[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // se i está mais próximo do centro e o ponto não faz parte da parte superior da diagonal secundária
            if (abs(n/2 - i) >= abs(n/2 - j) && (i > n/2 || i + j != n)) {
                if (i < n/2) {
                    matriz[i][j] = i + 1;
                }
                else if (i >= n/2) {
                    matriz[i][j] = n - i;
                }
            }
            else { // caso contrario
                if (j < n/2) {
                    matriz[i][j] = j + 1;
                }
                else if (j >= n/2) {
                    matriz[i][j] = n - j;
                }
            }
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        puts("");
    }





    return 0;
}