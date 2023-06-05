#include <stdio.h>

char *my_strcpy(char *dest, const char *src);

char *my_strcpy(char *dest, const char *src) {
    char *temp_ptr = dest; 
    while (*src) {
        *temp_ptr = *src;
        temp_ptr++;
        src++;
    }
    *temp_ptr = '\0';
    return dest;
}

int main(int argc, char const *argv[]) {
    char dest[20];
    char src[] = "Hello World";
    printf("%s", my_strcpy(dest, src));
    return 0;
}