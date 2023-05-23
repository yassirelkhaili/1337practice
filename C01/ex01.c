#include <stdio.h>
#include <unistd.h>

void ft_ultimate_ft(int *********nbr);

void ft_ultimate_ft(int *********nbr) {
    *********nbr = 42; 
    char buff[] = {'0' + (*********nbr / 10), '0' + (*********nbr % 10)}; 
    write(STDOUT_FILENO, &buff, 2); 
}

int main(int argc, char const *argv[]) {
    int a; 
    int *ptr1 = &a;             
    int **ptr2 = &ptr1;        
    int ***ptr3 = &ptr2;     
    int ****ptr4 = &ptr3;     
    int *****ptr5 = &ptr4;   
    int ******ptr6 = &ptr5;   
    int *******ptr7 = &ptr6;   
    int ********ptr8 = &ptr7;  
    int *********ptr9 = &ptr8; 

    ft_ultimate_ft(ptr9); 
    return 0;
}







