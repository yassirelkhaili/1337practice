#include <stdio.h>

int ft_iterative_factorial(int nb);

int ft_iterative_factorial(int nb) {
if (nb == 1) {
return 1; 
} else {
    for(int i = nb - 1; i > 0; i--) {
    nb = nb * i; 
}
}
return nb; 
}

int main(int argc, char const *argv[])
{
    int nb = 5; 
    printf("%i", ft_iterative_factorial(nb)); 
    return 0;
}
