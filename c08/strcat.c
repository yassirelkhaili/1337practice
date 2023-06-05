#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *dest, const char *src);

unsigned int ft_strlen(char* str); 

char *ft_strcpy(char *dest, const char *src) {
    char *temp_ptr = dest; 
    while (*src) {
        *temp_ptr = *src;
        temp_ptr++;
        src++;
    }
    *temp_ptr = '\0';
    return dest;
}
unsigned int ft_strlen(char* str) {
    unsigned int strlen = 0; 
    char *temp_ptr = str; 
    while(*temp_ptr) {
        strlen++; 
        temp_ptr++; 
    }
    return strlen; 
}
int main(int argc, char const *argv[]) {
    char dest[20];
    char src[] = "Hello World!";
    char*result = ft_strcpy(dest, src); 
    unsigned int resultlen = ft_strlen(result); 
    write(STDOUT_FILENO, result, resultlen);
    return 0;
}