#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int      i;
    int     j;
    
    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
        
    }
    dest[i] = '\0';
    return (dest);
    
}

int main() 
{
  char src[] = "hii ";
  char dest[10] = "simo";
  ft_strcat(src, dest);
  printf("this code worke in :%s ",src ,dest);
  return 0;
}