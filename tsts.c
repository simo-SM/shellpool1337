#include <stdio.h>

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    len_d;
    unsigned int    len_s;
    unsigned int    i;

    len_d = 0;
    len_s = 0;
    while (dest[len_d] != '\0')
    {
        len_d++;
    }
    while (src[len_s] != '\0')
    {
        len_s++;
    }
    if (size <= len_d)
    {
        return (size + len_d)
    }
    i = 0;
    while (src[i] != '\0' && (len_d + i) < size - 1)
    {
        dest[len_d + i] = src[i];
        i++;
    }
    dest[len_d + i] = '\0';
    return (dest)
}