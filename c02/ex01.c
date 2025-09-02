#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while(i < n)
    {
        dest[i] !='\0';
        i++;
    }
    return(dest);
}
int main()
{
    char dest[20] = "simo";
    char src[20] = "hello";  
    unsigned int n = 4;

    printf(">> %s\n", ft_strncpy(dest, src, n));
    return 0;
}