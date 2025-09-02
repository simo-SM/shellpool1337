#include <stdio.h>
#include <stdlib.h>
int *ft_range(int min, int max)
{
    int    *ran;
    int     i;
    int     size;
    if (min >= max)
    {
        return (NULL);
    }
    size = max - min;
    ran = (int *)malloc(size * sizeof(int));
    if(!ran)
        return (NULL);
    i = 0;
    while (i < size)
    {
        ran[i] = min + i;
        i++;
    }
    return (ran);

}
int main()
{
    int *tab;
    int i;

    tab = ft_range(3, 8); 
    if (tab)
    {
        i = 0;
        while (i < 8 - 3)
        {
            printf(" >> %d\n", tab[i]);
            i++;
        }
        printf("\n");
        free(tab); 
    }
    return (0);
}