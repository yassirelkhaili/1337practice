#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(void);

void ft_print_numbers(void) {
    int first_num = 0; 
    char number_char; 
    while (first_num < 10) {
        number_char = '0' + first_num; 
        write(STDOUT_FILENO, &number_char, sizeof(char)); 
        first_num++; 
    }
}

int main(int argc, char const *argv[])
{
    ft_print_numbers(); 
    return 0;
}
