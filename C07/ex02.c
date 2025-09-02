#include <stdio.h>
#include <stdlib.h>
int ft_ultimate_range(int **range, int min, int max)
{
    int     *uran;
    int     size;
    int     i;

    if(min >= max)
    {
        *range = (NULL);
        return (0);
    }
    size = max - min ;
    uran = (int *)malloc(size * sizeof(int));
    if (!uran)
    {
        *range = (NULL);
        return (-1);
    }
    i = 0;
    while (i < size)
    {
        uran[i] = min + i;
        i++;
    }
    *range = uran;
    return (size);
}
int main()
{
    int     *tab;
    int     size;
    int     i;

    size = ft_ultimate_range(&tab, 5, 10);
    if (size > 0)
    {
        i = 0;
        while (i < size)
        {
            printf("[%d]", tab[i]);
            i++;
        }
        printf("\n");
        free(tab);
    }
    
}