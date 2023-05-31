#include <stdio.h>

int ft_iterative_power(int nb, int power);

int ft_iterative_power(int nb, int power){
int temp_int = nb; 
if (nb == 0 && power== 0) {
    return 1; 
} 
for(int i = power - 1; i != 0; i--) {
nb = nb * temp_int; 
}
return nb; 
}

int main(int argc, char const *argv[])
{
    int nb = 5;
    int power = 4;  
    printf("%i", ft_iterative_power(nb, power)); 
    return 0;
}

