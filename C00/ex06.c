#include <stdio.h>
#include <unistd.h>
#include <string.h>

void ft_putnbr(int num);

void ft_putnbr(int num) {
char num_char; 
if (num >= 0 && num <= 9) {
num_char = '0' + num; 
write(STDOUT_FILENO, &num_char, sizeof(char)); 
} else if (num < 0 && num >= -9) {
 char buff[2]; 
 buff[0] = '-'; 
 buff[1] = '0' - num; 
write(STDOUT_FILENO, &buff, strlen(buff)); 
} else if (num > 9) {
char buff[1]; 
buff[0] = ('0' + (num / 10));
buff[1] = ('0' + (num % 10)); 
write(STDOUT_FILENO, &buff, strlen(buff) - 1);
}
}

int main(int argc, char const *argv[])
{
    ft_putnbr(14); 
    return 0;
}
