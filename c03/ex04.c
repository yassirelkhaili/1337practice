#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

char *ft_strstr(char *str, char *to_find){
if(*to_find == '\0') {
    return str; 
}
while (*str) {
    char *str_ptr = str; 
    while(*str_ptr && *to_find && *str_ptr == *to_find) {
        str_ptr++; 
        to_find++;
    }
    if(*to_find == '\0') {
            return str; 
    }
    str++; 
}
return NULL; 
}

int main(int argc, char const *argv[])
{
    char str[] = "Hello World!"; 
    char to_find[] = "World!"; 
    char *result = ft_strstr(str, to_find); 
    printf("%s", result); 
    return 0;
}
