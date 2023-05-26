#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            if (s1[i] < s2[i]) {
                return -1;
            } else {
                return 1;
            }
        } else if (s1[i] == '\0'){
            return 0; 
        }
    }
    return 0;
}

int main() {
    unsigned int n = 8;
    const char s1[] = "azeru";
    const char s2[] = "azeruT";
    printf("%i", ft_strncmp(s1, s2, n));

    return 0;
}