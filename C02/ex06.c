#include <stdio.h>

int ft_str_is_printable(char *str);

int ft_str_is_printable(char *str) {
if(str[0] == '\0') {
    return 1; 
}
for(int i = 0; str[i] != '\0'; i++) {
    if (str[i] < 32 || str[i] > 126) {
        return 1; 
    }
}
return 0; 
}

int main(int argc, char const *argv[])
{
    char string[] = "Hello World"; 
    printf("%i", ft_str_is_printable(string)); 
    return 0;
}
