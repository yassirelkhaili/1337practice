#include <stdio.h>
#include <unistd.h>

void duplicate_char(char* src); 

void duplicate_char(char* src) {
    while(*src) {
        unsigned int times_to_duplicate = 0; 
        if(*src >= 'A' && *src <= 'Z') {
            times_to_duplicate = *src -'A'; 
        } else if (*src >= 'a' && *src <= 'z') {
            times_to_duplicate = *src -'a';
        }
        unsigned int index = 0;
        while(index <= times_to_duplicate) {
        write(STDOUT_FILENO, &*src, 1); 
        index++; 
        } 
        src++;
    }
}

int main(int argc, char const *argv[])
{
    char src[] = "aBcdefghij"; 
    duplicate_char(src); 
    return 0;
}