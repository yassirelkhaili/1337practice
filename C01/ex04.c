#include <stdio.h>
#include <unistd.h>
#include <string.h>

void ft_putstr(char *str);

void ft_putstr(char *str) {
    write(STDOUT_FILENO, str, strlen(str)); 
}

int main(int argc, char const *argv[])
{
    char str[] = "string"; 
    ft_putstr(str); 
    return 0;
}
