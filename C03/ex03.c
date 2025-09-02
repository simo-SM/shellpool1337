#include <stdio.h>
#include <unistd.h>

int  ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i; 
}


char *ft_strncat(char *dest, const char *src, unsigned int nb)
{
    unsigned int  dest_len = ft_strlen(dest);
    unsigned int  i = 0;

    while (i < nb && src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0'; 
    return dest;
}

int main()
{
    char src[] = "this code is working in exercise 02 using school 1337";
    char dest[80] = "simo ttt"; 
    unsigned int n = 80;

    
    ft_strncat(dest, src, n);

    printf("Resulting string: %s\n", dest);
    return 0;
}
