#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

char *ft_strcat(char *dest, char *src) {
unsigned int dest_size = 0; 
unsigned int src_size = 0; 
while(dest[dest_size] != '\0') {
    dest_size++; 
}
while(src[src_size] != '\0') {
    src_size++; 
}
for (unsigned int i = dest_size, j = 0; j < src_size; i++, j++) {
    dest[i] = src[j]; 
}
dest[src_size + dest_size] = '\0'; 
return dest; 
}

int main(int argc, char const *argv[])
{
    char src[] = " World!"; 
    char dest[30] = "Hello";   
    char *result = ft_strcat(dest, src); 
    write(STDOUT_FILENO, result, strlen(result)); 
    return 0;
}
