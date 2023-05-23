#include <stdio.h>
#include <unistd.h>

void ft_ft(int *nbr);

void ft_ft(int *nbr) {
    *nbr = 42; 
    char buff[] = {'0' + (*nbr / 10), '0' + (*nbr % 10)}; 
    write(STDOUT_FILENO, &buff, 2); 
}

int main(int argc, char const *argv[])
{
    int a; 
    ft_ft(&a); 
    return 0;
}

