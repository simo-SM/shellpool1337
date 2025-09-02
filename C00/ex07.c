#include <unistd.h>

void ft_putnbr(int nb)
{
    int n ;
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb >=10)
    {
        ft_putnbr(nb / 10);
    }
    n = (nb % 10) +'0';
    write(1, &n, 1);
    

}
int main()
{
    ft_putnbr(-300);
    write(1, "\n", 1);
    return 0;
}