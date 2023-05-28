#include <stdio.h>
#include <unistd.h>

char *ft_replace(char* src, char arg); 

char *ft_replace(char* src,  char arg) {
char *temp_ptr = src; 
char *temp_ptr2 = src; 
while(*src) {
if(*src == 'a') {
*src = arg; 
}
src++; 
}
return temp_ptr; 
}

int main(int argc, char const *argv[])
{
    char src[] = "Hello World"; 
    char arg = 'z'; 
    char *result = ft_replace(src, arg); 
    unsigned int resultlen = 0;
    char *temp_ptr2 = result; 
    while(*temp_ptr2) {
    resultlen++; 
    temp_ptr2++; 
}
    write(STDOUT_FILENO, result, resultlen); 
    return 0;
}


