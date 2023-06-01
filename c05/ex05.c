#include <stdio.h>

int ft_sqrt(int nb);

int ft_sqrt(int nb) 
{
for(int i = 1; i < nb; i++) 
{
if(nb / i == i) 
{
    return i; 
}
}
return 0; 
}

int main(int argc, char const *argv[])
{
    int nb = 36; 
    printf("%i", ft_sqrt(nb)); 
    return 0;
}
