#include <stdio.h>
//EXCERRCIE I DID NOT INCLUDED IN THE PISCINE EXCERCICES CHECK IF 2 ARRAYS ARE EQUAL
int ft_array(char* dest, char* src); 

int ft_array(char* dest, char* src) {
char *ptr1 = dest;
unsigned int destlen = 0; 
while(*ptr1)  {
    ptr1++; 
    destlen++; 
} 
char *ptr2 = src;
unsigned int srclen = 0; 
while(*ptr2)  {
    ptr2++; 
    srclen++; 
} 
if (srclen == destlen) {
while(*dest == *src) {
    dest++; 
    src++; 
    if (*src == '\0') {
    return 1; 
}
}
} 
return 0; 
}

int main(int argc, char const *argv[])
{
    char dest[] = "Hello World"; 
    char src[] = "Hello World"; 
    printf("%i", ft_array(dest, src));  
    return 0;
}
