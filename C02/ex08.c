#include <stdio.h>

char *ft_strlowcase(char *str);

char *ft_strlowcase(char *str) {
for(int i = 0; str[i] != '\0'; i++) {
    if(str[i] >= 'A' && str[i] <= 'Z') {
        str[i] = str[i] + 'a' - 'A';  
    }
}
return str; 
}

int main(int argc, char const *argv[])
{
    char char_string[] = "Hello World"; 
    char* result = ft_strlowcase(char_string); 
    printf("%s", result); 
    return 0;
}
