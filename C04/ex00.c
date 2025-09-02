#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{       
        int     i;
        
        i = 0;
        while (str[i] != '\0')
        {       
                i++;
        }       
        return (i);
}
int main()
{
    char str[] = "this work calcule number lenghte carctre";
    ft_strlen(str);
    printf("you len .>>> %d",ft_strlen(str));
    return 0;
}