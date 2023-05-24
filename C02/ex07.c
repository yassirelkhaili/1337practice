#include <stdio.h>

char *ft_strupcase(char *str);

char *ft_strupcase(char *str) {
for(int i = 0; str[i] != '\0'; i++) {
    if(str[i] >= 'a' && str[i] <= 'z') {
        str[i] = str[i] - 'a' + 'A'; 
    }
}
return str; 
}

int main(int argc, char const *argv[])
{
    char char_string[] = "Hello World"; 
    char* result = ft_strupcase(char_string); 
    printf("%s", result); 
    return 0;
}
