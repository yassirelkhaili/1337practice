#include <stdio.h>

int ft_strlen(char *str);

int ft_strlen(char *str) {
int strlen = 0;
while(*str) {
    strlen++;
    str++;  
} 
return strlen; 
}

int main(int argc, char const *argv[])
{
    char str[] = "Hello World!"; 
    printf("%i", ft_strlen(str)); 
    return 0;
}
