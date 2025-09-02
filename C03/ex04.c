#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
        int     i;
        int     j;

        i = 0;
        j = 0;
        if (to_find[j] == '\0')
        {
                return (str);
        }
        while (str[i] != '\0')
        {
                j = 0;
                while (to_find[j] == str[i + j] && to_find[j] != '\0')
                {
                        j++;
                }
                if (to_find[j] == '\0')
                {
                        return (&str[i]);
                }
                i++;
        }
        return (0);
}



int main() {
    char str[] = "Hello, world!fdfjoig  ";
    char to_find[] = "world";

    char *result = ft_strstr(str, to_find);

    if (result != 0) {
        printf("Found at position: %ld\n", result - str);
    } else {
        printf("Not found.\n");
    }

    return 0;
}
