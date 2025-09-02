#include <stdio.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    len;
    i = 0;
    len = 0;
    while (src[len] != '\0')
    {
        len++;
        if (size == 0)
            return (len);
    }
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest = '\0';
    return (len);
}
int main()
{
    char src[] = "This";
    char dest[35];
    unsigned result = ft_strlcpy(dest, src, sizeof(dest));

    printf("Copied string: %s\n", dest);
    printf("Source string length: %zu\n", result);  
}