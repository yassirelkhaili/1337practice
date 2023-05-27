#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nb) {
    if (nb < 0) {
        char negative = '-'; 
        write(STDOUT_FILENO, &negative, 1); 
        nb = -nb;
    }
    if (nb >= 10) {
        ft_putnbr(nb / 10);
    }
    char res = nb % 10 + '0'; 
    write(STDOUT_FILENO, &res, 1); 
}

int main(int argc, char const *argv[])
{
    ft_putnbr(10); 
    return 0;
}
