#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char **temp_ptr = argv + argc - 1;
    while (temp_ptr > argv) {
        char *temp_ptr2 = *temp_ptr;
        unsigned int arglen = 0;
        while (*temp_ptr2) {
            temp_ptr2++;
            arglen++;
        }
        write(STDOUT_FILENO, *temp_ptr, arglen);
        write(STDOUT_FILENO, "\n", sizeof(char)); 
        temp_ptr--;
    }
    return 0;
}