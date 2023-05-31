#include <stdio.h>

int ft_recursive_factorial(int nb);

int ft_recursive_factorial(int nb) {
if (nb == 0) {
        return 1;
    } else {
        return nb * ft_recursive_factorial(nb - 1);
    }
}

int main(int argc, char const *argv[])
{
    int nb = 5; 
    printf("%i", ft_recursive_factorial(nb)); 
    return 0;
}

