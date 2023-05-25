#include <stdio.h>
#include <unistd.h>

void ft_putstr_non_printable(char *str);

void ft_putstr_non_printable(char *str) {
    char hex_elements[] = "0123456789abcdef";
int size = 0; 
for(int i = 0; str[i] != '\0'; i++) {
    size++; 
}
for(int j = 0; j < size; j++) {
    if (str[j] < 32 || str[j] > 126) {
            write(1, "\\", 1);
            write(1, &hex_elements[(str[j] >> 4) & 0xF], 1);
            write(1, &hex_elements[str[j] & 0xF], 1);
        } else {
            write(1, &str[j], 1); 
        }
}
}

int main(int argc, char const *argv[])
{
    char str[] = "Coucou\rtu vas bien ?"; 
    ft_putstr_non_printable(str); 
    return 0;
}
