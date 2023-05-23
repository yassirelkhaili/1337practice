#include <stdio.h>
#include <unistd.h>

void ft_is_negative(int n);

void ft_is_negative(int n) {
char display; 
if (n < 0) {
    display = 'N'; 
    
} else {
    display = 'P';
}
write(STDOUT_FILENO, &display, sizeof(char)); 
}


int main(int argc, char const *argv[])
{
    ft_is_negative(-2); 
    return 0;
}
