#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    for(unsigned int i = 1; i < argc; i++) {
        char *temp_ptr = argv[i]; 
        unsigned int arglen = 0; 
        while (*temp_ptr)
        {
           arglen++; 
           temp_ptr++; 
        }
        write(STDOUT_FILENO, argv[i], arglen); 
        write(STDOUT_FILENO, "\n", sizeof(char)); 
    }
    return 0;
}
