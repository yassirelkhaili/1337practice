#include <stdio.h>

int ft_recursive_power(int nb, int power);

int ft_recursive_power(int nb, int power)
{
power--; 
if (nb == 0 && power == 0) 
{
    return 1; 
}
if (power > 0) 
{
    return nb * ft_recursive_power(nb, power);
}
}

int main(int argc, char const *argv[])
{
    int nb = 5; 
    int power = 4; 
    printf("%i", ft_recursive_power(nb, power)); 
    return 0;
}
