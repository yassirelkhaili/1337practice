#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char *str = argv[1];
    if (argc != 4) {
        return 1; 
    }
    char *arg = argv[3]; 
    char *to_find = argv[2]; 
    char *temp_ptr = str;
    char *temp_ptr2 = str; 
     unsigned int strlen = 0; 
    while(*temp_ptr2) {
        temp_ptr2++; 
        strlen++; 
    } 
    while(*temp_ptr) {
        if(*temp_ptr == *to_find) {
            *temp_ptr = *arg; 
        }
        temp_ptr++; 
    }
    write(STDOUT_FILENO, str, strlen); 
    return 0;
}
