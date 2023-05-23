#include <stdio.h>

void ft_print_comb()
{
    int i, j, k;
    
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            for (k = j + 1; k < 10; k++)
            {
                printf("%d%d%d, ", i, j, k);
            }
        }
    }
    printf("\n");
}

int main()
{
    ft_print_comb();
    return 0;
}