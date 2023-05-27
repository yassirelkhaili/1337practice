#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
unsigned int dlen = 0; 
char *temp_ptr = dest;  
while(*temp_ptr != '\0') {
    dlen++; 
    temp_ptr++; 
} 
unsigned int src_size = 0; 
char *temp_ptr2 = src;  
while(*temp_ptr2 != '\0') {
    src_size++; 
    temp_ptr2++; 
} 
if (size == 0) {
    return src_size; 
}
unsigned int free_space = size - dlen - 1;  
if(free_space < src_size) {
    return dlen + free_space; 
}
unsigned int index = 0; 
while(src[index] != '\0' && dlen + index < size - 1) {
dest[dlen + index] = src[index]; 
index++; 
}
dest[dlen + src_size] = '\0'; 
return dlen + src_size; 
}

int main(int argc, char const *argv[])
{
    char src[] = " World!"; 
    char dest[50] = "Hello"; 
    printf("%u", ft_strlcat(dest, src, 50)); 
    return 0;
}
