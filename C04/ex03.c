#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int result = 0;
    int sign ;

    i = 0;
    sign = 1;
    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign =sign * (-1);
        i++;
    }
    while ((str[i] >= '0' && str[i] <= '9'))
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}
int main()
{
    char str[] = " ---+--+1234ab567";
    ft_atoi(str);
    printf("your code number  >> %d",ft_atoi(str));
    return 0;
}