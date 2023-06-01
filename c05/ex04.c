 #include <stdio.h>

 int ft_fibonacci(int index);

int ft_fibonacci(int index) 
{
if (index < 0) 
{
    return -1; 
} 
if (index == 0) 
{ 
return 0; 
}
else if (index == 1) 
{
return 1; 
} 
else 
{
return ft_fibonacci(index - 1) + ft_fibonacci(index - 2); 
}
}
 int main(int argc, char const *argv[])
 {
    int index = 4; 
    printf("%i", ft_fibonacci(index)); 
    return 0;
 }
 