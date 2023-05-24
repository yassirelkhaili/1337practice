#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src);

char *ft_strcpy(char *dest, char *src) {
    int size = 0; 
    for (int i = 0; src[i] != '\0'; i++) {
        size++; 
    }
    for(int i = 0; i < size; i++) {
        dest[i] = src[i]; 
    }
        write(STDOUT_FILENO, dest, size); 
        return dest; 
}

int main(int argc, char const *argv[])
{
    char src[] = "Hello World!"; 
    int size = 0; 
    for (int i = 0; src[i] != '\0'; i++) {
        size++; 
    }
    char dest[size]; 
    ft_strcpy(dest, src); 
    return 0;
}

