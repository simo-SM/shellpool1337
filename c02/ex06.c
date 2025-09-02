#include <stdio.h>

int	ft_str_is_printable(char *str)
{
    int     i;

    i = 0;
    while(str[i] != '\0')
    {
        if(!(str[i] >= 32 && str[i] <= 126))
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    char str1[] = "*";
    char str2[] = "Hello123";
    char str3[] = "";

    printf("Test 1: %d\n", ft_str_is_printable(str1));  
    printf("Test 2: %d\n", ft_str_is_printable(str2)); 
    printf("Test 3: %d\n", ft_str_is_printable(str3));
    return 0;
}