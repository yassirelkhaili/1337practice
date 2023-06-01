#include <stdio.h>

int ft_is_prime(int nb);

int ft_is_prime(int nb) {
if (nb == 1 || nb == 0) {
    return 0; 
}
for(int i = 2; i < nb - 1; i++) {
if(nb % i == 0) {
    return 0; 
}
}
return 1; 
}

int main(int argc, char const *argv[])
{
    printf("%i", ft_is_prime(73)); 
    return 0;
}
