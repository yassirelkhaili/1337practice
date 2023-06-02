#include <stdio.h>

int ft_find_next_prime(int nb);

int ft_find_next_prime(int nb) {
    if (nb == 1 || nb == 0) {
        return 0;
    }
    for (int j = nb; ; j++) {
        for (int i = 2; i < j; i++) {
            if (j % i == 0) {
                break;
            }
            if (i == j - 1) {
                return j;
            }
        }
    }
}

int main(int argc, char const *argv[]) {
    int nb = 14;
    printf("%i", ft_find_next_prime(nb));
    return 0;
}
