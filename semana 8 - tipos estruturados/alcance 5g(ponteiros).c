//5g

#include <stdio.h>

int get_range(int n, int cells[n], int distance, int user, int *left_index, int *right_index)
{

    int conexoes = 0;
    int count = 0;
    *left_index = user - distance;

    int aux = user + distance;

    for (int i = 0; i < n; i++)
    {
        if (cells[i] >= *left_index)
        {
            *left_index = cells[i];
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (aux >= cells[i])
        {
            *right_index = cells[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (cells[i] <= user)
        {
            if (cells[i] + distance >= user)
            {
                conexoes++;
            }
        }
        else
        {
            if (cells[i] - distance <= user)
            {
                conexoes++;
            }
        }
    }

    return conexoes;
}

int main()
{
    int n, d, u;
    int funcaoconex;
    int left_index;
    int right_index;

    scanf("%d%d%d", &n, &d, &u);
    
    int cel[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &cel[i]);
    }
    
    funcaoconex = get_range(n, cel, d, u, &left_index, &right_index);
    
    for (int i = 0; i < n; i++)
    {
        if (cel[i] >= left_index && cel[i] <= right_index)
        {
            printf("%d ", cel[i]);
        }
    }

    if (funcaoconex == 0)
    {
        printf("USUARIO DESCONECTADO");
    }
    
    return 0;
}
