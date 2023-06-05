#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int *ft_range(int min, int max) {
    if (min >= max) {
    return NULL;
    }
    unsigned int arrlen = max - min;
    int *rand = (int*)malloc(arrlen * sizeof(int));
    int* int_ptr = rand;
    int value = min;
    while (value < max) {
        *int_ptr = value;
        int_ptr++;
        value++;
    }
    return rand;
}

// int main(int argc, char const *argv[])
// {
//     int min = 4; 
//     int max = 9; 
//     int *result = ft_range(min, max);
//     if (result == NULL) {
//         printf("Invalid range.\n");
//     } else {
//         for (int i = 0; i < max - min; i++) {
//             printf("%d ", result[i]);
//         }
//         free(result);
//     }
//     return 0;
// }

