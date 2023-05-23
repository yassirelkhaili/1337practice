#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);

void ft_putchar(char c) {
    write(STDOUT_FILENO, &c, sizeof(c)); 
}

int main(int argc, char const *argv[])
{
    ft_putchar('a'); 
    return 0;
}
