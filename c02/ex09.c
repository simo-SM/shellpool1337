#include <unistd.h>
char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if ((i - 1 == 0 && str[i] != ' ')
            || (str[i - 1] >= '0' && str[i - 1] <='9')
            || (str[i - 1] >= 'a' && str[i - 1] <='z' )
            || (str[i - 1] >= 'A' && str[i - 1] <='Z'))
        {
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        i++;
    }
    return (str);
}
void putchar(char c)
{
    write(1, &c, 1);
}
int main()
{
    char str[50] ="hi, how are you? 42words forty-two; fifty+and+one";
    
    *ft_strcapitalize(str);
    int i;

    i = 0;
    while (i < str[i])
    {
        putchar(str[i]);
        i++;
    }
	
    return 0;
}