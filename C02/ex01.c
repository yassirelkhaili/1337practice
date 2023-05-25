#include <stdio.h>
#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

char *ft_strncpy(char *dest, char *src, unsigned int n){
    int size = 0; 
    for(int i = 0; src[i] != '\0'; i++) {
        size++; 
    }
    for(int i = 0; i <= n; i++) {
        dest[i] = src[i];
    }
    dest[n] = '\0'; 
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
    int n = size; 
    char *result = ft_strncpy(dest, src, n); 
    write(STDOUT_FILENO, result, size); 
    return 0;
} 