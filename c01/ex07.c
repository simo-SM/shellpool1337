#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int t;

    i = 0;
    while(i < size / 2)
    {
        t = tab[i] ;
        tab[i] = tab[size -1 - i];
        tab[size -1 - i] = t;
        i++;
    }

}
void ft_putnbr(int n)
{
    char c;
    if (n>10)
    {
        ft_putnbr(n /10);
    }
    c = (n % 10) + '0';
    write(1, &c, 1);
}
int main()
{
    int size =9;
    int tab[9] = {1,2,3,4,5,6,7,8,9};
    int i;
    ft_rev_int_tab(tab, size);
    i = 0;
    while(i <size)
    {
        ft_putnbr(tab[i]);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}