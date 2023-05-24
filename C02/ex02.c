#include <stdio.h>
#include <unistd.h>

int ft_str_is_alpha(char *str);

int ft_str_is_alpha(char *str) {
if(str[0] == '\0') {
    return 1; 
}
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122)) {
            return 0; 
        }
    }  
    return 1; 
}

int main(int argc, char const *argv[])
{
    char string[] = "HelloWorldiubiu"; 
    printf("%i", ft_str_is_alpha(string)); 
    return 0;
}
