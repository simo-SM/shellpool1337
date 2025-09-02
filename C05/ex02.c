#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int reslt;

    reslt = 0;
    if (power < 0)
    {
        return 0;
    }
    if (power == 0)
    {
        return 1;
    }
    while (power > 0)
    {
        reslt *= nb;
        power--;
    }
    return (reslt);
}
int main()
{
    printf("Power of 2 ^ -1 = %d\n", ft_iterative_power(2, -1));
	printf("Power of 0 ^ 0 = %d\n", ft_iterative_power(0, 0));
	printf("Power of 3 ^ 1 = %d\n", ft_iterative_power(3, 1));
	printf("Power of -3 ^ 3 = %d\n", ft_iterative_power(-3, 3));
}