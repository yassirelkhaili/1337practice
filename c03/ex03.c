#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

char *ft_strncat(char *dest, char *src, unsigned int nb) {
unsigned int dest_size = 0;  
while(dest[dest_size] != '\0') {
    dest_size++; 
}
for (unsigned int i = dest_size, j = 0; j < nb; i++, j++) {
    dest[i] = src[j]; 
}
dest[nb + dest_size] = '\0'; 
return dest; 
}

int main(int argc, char const *argv[])
{
    unsigned int nb = 3; 
    char src[] = " World!"; 
    char dest[50] = "Hello"; 
    char *result = ft_strncat(dest, src, nb); 
    write(STDOUT_FILENO, result, strlen(result)); 
    return 0;
}


