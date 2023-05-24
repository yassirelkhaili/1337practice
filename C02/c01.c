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
    char* result = ft_strcpy(dest, src);
    write(STDOUT_FILENO, result, size); 
    return 0;
}

