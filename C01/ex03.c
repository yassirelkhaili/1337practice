#include <stdio.h>
#include <unistd.h>
#include <string.h>

void ft_div_mod(int a, int b, int *div, int *mod);

void ft_div_mod(int a, int b, int *div, int *mod) {
    *div = a / b; 
    *mod = a % b; 
    char divbuff[2]; 
    char modbuff[2]; 
    divbuff[0] = '0' + *div; 
    modbuff[0] = '0' + *mod; 
    divbuff[1] = '\0'; 
    modbuff[1] = '\0'; 
    char result[] = "result: "; 
    char remainder[] = " remainder: "; 
    char buff[30]; 
    strcpy(buff, result); 
    strcat(buff, divbuff); 
    strcat(buff, remainder); 
    strcat(buff, modbuff); 
    write(STDOUT_FILENO, buff, strlen(buff)); 
}

int main(int argc, char const *argv[])
{
    int a, b, div, mod; 
    a = 10; 
    b = 4; 
    ft_div_mod(a, b, &div, &mod); 
    return 0;
}


