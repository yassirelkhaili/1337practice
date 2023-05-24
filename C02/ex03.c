#include <stdio.h>
#include <unistd.h>

int ft_str_is_numeric(char *str);

int ft_str_is_numeric(char *str) {
if(str[0] == '\0') {
    return 1; 
}
for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 48 || str[i] > 57) {
            return 0; 
        }
}
return 1; 
}

int main(int argc, char const *argv[])
{
    char string[] = "324235"; 
    printf("%i", ft_str_is_numeric(string)); 
    return 0;
}

