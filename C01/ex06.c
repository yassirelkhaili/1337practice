#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size);

void ft_rev_int_tab(int *tab, int size) 
{
    char reversedarr[size];
    for (int i = size - 1, j = 0; i >= 0; i--, j++) 
    {
    reversedarr[j] = tab[i]; 
    }
    //Print reverse arr
    for(int i = 0; i < size; i++) 
    {
        printf("%i\t", reversedarr[i]); 
    }
}

int main(int argc, char const *argv[]) 
{
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 24}; 
    int size = sizeof(tab) / sizeof(int); 
    ft_rev_int_tab(tab, size); 
    return 0;
}