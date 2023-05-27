#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str); 

void ft_putstr(char *str) {
int strlen = 0; 
char *temp_ptr = str; 
while(*temp_ptr) {
    strlen++; 
    temp_ptr++; 
}
write(STDOUT_FILENO, str, strlen); 
}

int main(int argc, char const *argv[])
{
    char str[] = "Hello World!"; 
    ft_putstr(str); 
    return 0;
}
