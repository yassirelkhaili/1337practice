#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char *temp_ptr = argv[0]; 
    unsigned int strlen = 0; 
    while(*temp_ptr) {
        temp_ptr++; 
        strlen++; 
    }
    write(STDOUT_FILENO, argv[0], strlen); 
    return 0;
}
