#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
    int     i;

    i = 0;
    while(str[i] != '\0')
    {
        if(!(str[i] >= '0' && str[i] <= '9'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    char str1[] = "1234";
    char str2[] = "Hello123";
    char str3[] = "";

    printf("Test 1: %d\n", ft_str_is_numeric(str1));  
    printf("Test 2: %d\n", ft_str_is_numeric(str2)); 
    printf("Test 3: %d\n", ft_str_is_numeric(str3));
    return 0;
}