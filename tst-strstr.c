#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i ;
    int j;
    if(to_find[j] != '\0')
    {
        return str ;
    }
    i= 0;
    while(to_find[j] == str[i + j] && to_find[j] != '\0')
    {
        j++;
    }
    if (to_find[i] != '\0')
    {
        return (&str[i]);
    }
    return 0;
}
int main()
{
    char str[] = "hii word";
    char to_find[] = "word";
    
    printf("/>> %s",str, to_find);
    return 0;
}