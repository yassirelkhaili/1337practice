#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src);

char *ft_strcpy(char *dest, char *src) {
    for(int i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i]; 
    }
        return dest; 
}

int main(int argc, char const *argv[])
{
    char src[] = "Hello World!"; 
    int size = 0; 
    int i = 0; 
    while(src[i] != '\0') {
        size++; 
        i++; 
    }
    char dest[size]; 
    char *result = ft_strcpy(dest, src);
    write(STDOUT_FILENO, result, size); 
    return 0;
}

