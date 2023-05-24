#include <stdio.h>

//bubble algorithm 

void ft_sort_int_tab(int *tab, int size);

void ft_sort_int_tab(int *tab, int size) {
for (int i = 0; i < size - 1; i++) {
for (int k = 0; k < size - i - 1; k++) {
    if (tab[k] > tab[k + 1]) {
        int temp = tab[k]; 
        tab[k] = tab[k + 1];  
        tab[k + 1] = temp; 
    }
}
}
//print sortedarr
for(int i = 0; i < size; i++) {
    printf("%i", tab[i]);
}
}

int main(int argc, char const *argv[])
{
    int tab[] = {1, 0, 3, 2, 4, 9, 6, 7, 8, 5, 10, 12, 24}; 
    int size = sizeof(tab) / sizeof(int); 
    ft_sort_int_tab(tab, size); 
    return 0;
}

