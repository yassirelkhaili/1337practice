#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *ft_strdup(char *src);

char *ft_strdup(char *src) {
    char *temp_ptr = src; 
    unsigned int srclen = 0; 
    while (*temp_ptr) {
        temp_ptr++; 
        srclen++; 
    } 
    char *dup = (char*)malloc((srclen + 1) * sizeof(char)); 
    char *temp_ptr2 = src; 
    char *dup_ptr = dup; 
    while (*temp_ptr2) {
        *dup_ptr = *temp_ptr2;
        temp_ptr2++;
        dup_ptr++;
    }
    *dup_ptr = '\0'; 
    return dup; 
}

// int main(int argc, char const *argv[]) {
//     char src[] = "Hello World!";
//     char *dup = ft_strdup(src);
//     char *temp_ptr = dup;   
//     unsigned int duplen = 0; 
//     while(*temp_ptr) {
//         duplen++; 
//         temp_ptr++; 
//     }
//     write(STDOUT_FILENO, dup, duplen);  
//     free(dup); 
//     return 0;
// }


