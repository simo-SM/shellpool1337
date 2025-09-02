#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    int fact_re;

    fact_re =  1;
    if (nb < 0)
    {
        return 0;
    }
    if (nb == 0 || nb == 1)
    {
         return 1;
    }
    return nb * ft_recursive_factorial(nb - 1);
}
int main()
{
    int n = 4;
    printf(">> recursive fsctorial : %d\n", ft_recursive_factorial(n));
    return 0;    
}