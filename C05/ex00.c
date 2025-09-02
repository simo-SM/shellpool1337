#include <stdio.h>

int     ft_iterative_factorial(int nb)
{
        int     fact;

        fact = 1;
        if (nb < 0)
                return (0);
        while (nb > 0)
        {
                fact = fact * nb;
                nb--;
        }
        return (fact);
}
int main() 
{
    int x;

    x = 4;
    printf(">>> %d ",ft_iterative_factorial(x));
    return 0;
}