#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
    int     i;

    i = 0;
    while(str[i] != '\0')
    {
        if(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') ))
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello123";
    char str3[] = "";

    printf("Test 1: %d\n", ft_str_is_alpha(str1));  
    printf("Test 2: %d\n", ft_str_is_alpha(str2)); 
    printf("Test 3: %d\n", ft_str_is_alpha(str3));
    return 0;
}