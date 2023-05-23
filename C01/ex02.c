#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a, int *b);

void ft_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    char buff[] = {'0' + *b}; 
    write(STDOUT_FILENO, &buff, 1); 
}

int main(int argc, char const *argv[])
{
    int a = 4; 
    int b = 8; 
    ft_swap(&a, &b); 
    return 0;
}
