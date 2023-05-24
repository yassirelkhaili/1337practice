#include <stdio.h>
#include <unistd.h>

int ft_str_is_lowercase(char *str);

int ft_str_is_lowercase(char *str) {
if (str[0] == '\0') {
    return 1; 
}
for(int i = 0; str[i] != '\0'; i++) {
    if(str[i] > 'a' && str[i] < 'z') {
        return 1; 
    } 
} 
return 0; 
}

int main(int argc, char const *argv[])
{
    char string[] = "u"; 
    printf("%i", ft_str_is_lowercase(string)); 
    return 0;
}