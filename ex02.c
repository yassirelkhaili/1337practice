#include <stdio.h>
#include <unistd.h>

void ft_print_reverse_alphabet(void);

void ft_print_reverse_alphabet(void) {
    char first_char = 'z'; 
    for(int i = 0; i < 26; i++) {
        write(STDOUT_FILENO, &first_char, sizeof(char)); 
        first_char--; 
    }
}

int main(int argc, char const *argv[])
{
    ft_print_reverse_alphabet(); 
    return 0;
}
