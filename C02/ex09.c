#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strcapitalize(char *str);

char *ft_strcapitalize(char *str){
//capitalize first arr element
if ((str[0] > 97 && str[0] < 122)) {
str[0] = str[0] - 'a' + 'A'; 
}
//capitalize first letter in word
for (int i = 1; str[i] != '\0'; i++) {
if((str[i] >= 97 && str[i] <= 122) && (str[i-1] == 32 || str[i-1] == 43 || str[i-1] == 45)) {
    str[i] = str[i] - 'a' + 'A';
}
//put all other letters in lowercase
if ((str[i] >= 65 && str[i] <= 90) && (str[i-1] != 32 && str[i-1] != 43 && str[i-1] != 45)) {
    str[i] = str[i] + 'a' - 'A';
}
}
return str; 
}

int main(int argc, char const *argv[])
{
    char sentence[] = "salut, comment Tu vas ? 42MOts quarante-deux; cinQUAnte+et+uN"; 
    char *result = ft_strcapitalize(sentence); 
    write(STDOUT_FILENO, result, strlen(result)); 
    return 0;
}
