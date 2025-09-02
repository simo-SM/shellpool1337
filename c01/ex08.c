#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i ;
    int j ;
    int t;
    int end;
    i = 0;
    end = size -1;
    while(i < end)
    {
        j= 0;
        while(j < end - i)
        {
            if (tab[j] >= tab[j+ 1])
            {
                t = tab[j];
                tab[j] = tab[j +1];
                tab[j + 1] = t;
                
            }
            j++;
        }
        i++;
    }

}
void ft_putnbr(int n)
{
    char c;
    if(n >10)
    {
        ft_putnbr(n /10);
    }
    c = (n % 10) + '0';
    write(1, &c, 1);
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