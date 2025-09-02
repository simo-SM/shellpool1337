#include <unistd.h>

int ft_putnbr(int n)
{
    char  c;
    if (n > 9)
    {
        ft_putnbr( n / 10);
    }
    c = (n % 10) + '0';
    write(1, &c, 1);
}
void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int len;
    int tamp;

    i = 0;
    len = size - 1 ;
    while (i < len)
    {
        j = 0;
        while (j < len - i)
        {
            if (tab[j] >= tab[j+ 1])
            {
                tamp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tamp;
            }
            j++;

        }
        i++;
    }
}
int main()
{
   int size = 9;
    int tab[9] = {14,2,3,0,5,50,7,8,9};
    int i;
    ft_sort_int_tab(tab, size);
    i = 0;
    while(i < size)
    {
        ft_putnbr(tab[i]);
        write(1, " ", 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}