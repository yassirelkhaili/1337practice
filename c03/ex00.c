#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int ft_strcmp(char *s1, char *s2) {
unsigned int size_s1 = 0; 
unsigned int size_s2 = 0; 
while(s1[size_s1] != '\0') {
    size_s1++; 
}
while(s2[size_s2] != '\0') {
    size_s2++; 
}
if (size_s1 < size_s2) {
    return -1; 
} else if (size_s1 > size_s2){
    return 1; 
}
for(unsigned int i = 0; i < size_s1; i++) {
    if (s1[i] != s2[i] ) {
        if(s1[i] < s2[i]) {
            return -1; 
        } else {
            return 1; 
        }
    }
}
return 0; 
}

int main(int argc, char const *argv[])
{
    char s1[] = "aBcd"; 
    char s2[] = "abcd"; 
    printf("%i", ft_strcmp(s1, s2)); 
    return 0;
}


