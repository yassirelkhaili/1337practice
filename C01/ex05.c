#include <stdio.h>

int ft_strlen(char *str);

int ft_strlen(char *str) {
    int size = 0; 
    for (int i = 0; str[i] != '\0'; i++) {
        size++; 
    }
    return size;
}

int main(int argc, char const *argv[])
{
    char str[] = "string"; 
    printf("%i", ft_strlen(str)); 
    return 0;
}
