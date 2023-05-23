#include <stdio.h>
#include <unistd.h>
#include <string.h>

void comb(void); 

void comb(void) {
    char buff[2]; 
    int i, j; 
    for(i = 0; i < 10; i++) 
    {
        for (j = i + 1; j < 10; j++) 
        {
            buff[0] = '0' + i; 
            buff[1] = '0' + j; 
            char tab[] = "\t";  
            write(STDOUT_FILENO, &buff, 2); 
            write(STDOUT_FILENO, &tab, 1); 
        }
    }
}

int main(int argc, char const *argv[])
{
    comb(); 
    return 0;
}
