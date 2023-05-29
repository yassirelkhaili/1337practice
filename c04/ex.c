#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc > 2) {
    printf("Too many args"); 
    return 0; 
    }
    char *src = argv[1];
    char *temp_ptr = src;
    char *temp_ptr2 = src;
    *src = 'A';  
    unsigned int srclen = 0;
    
    while (*temp_ptr) {
        srclen++;
        temp_ptr++;
    }
    write(STDOUT_FILENO, temp_ptr2, srclen);
    return 0;
}