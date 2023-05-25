#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {
unsigned int src_size = 0; 
for(int i = 0; src[i] != '\0'; i++) {
    src_size++; 
}
for(int i = 0; i < size; i++) {
    dest[i] = src[i]; 
}
if (size > 0) {
    dest[size] = '\0'; 
}
return src_size; 
}

int main(int argc, char const *argv[])
{
    char src[] = "Hello World!"; 
    unsigned int size = 0;  
    while (src[size] != '\0') {
        size++; 
    }
    char dest[size]; 
    printf("%i", ft_strlcpy(dest, src, size)); 
    return 0;
}
