#include <unistd.h>
// #include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{

    *div = a / b;
    *mod = a % b;

}
void ft_putnbr(int n)
{
    if (n >=10)
    {
        ft_putnbr(n / 10);
    }
    char c = (n % 10) + '0';
    write(1, &c, 1);
}
int main ()
{
    int a = 50;
    int b = 2;
    int div, mod;

    ft_div_mod(a, b, &div, &mod);

    ft_putnbr(div);
    write(1, "\n", 1);
    ft_putnbr(mod);
    write(1, "\n", 1);
    
    
}