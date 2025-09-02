#include <stdio.h>
// Create a function that returns the next prime number greater than or equal to the
//given number.
//-------------------------------
int ft_is_prim(int nb)
{
    int i;

    i = 2;
    if (i < 2)
    {
        return (0);
    }
    while (nb < i)
    {
        if (nb % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int ft_find_next_prime(int nb)
{
    while (!ft_is_prim(nb))
    {
        nb++;
    }
    return nb;
}
int main()
{
    printf("[%d]\n", ft_find_next_prime(14));
    printf("[%d]\n", ft_find_next_prime(17));
    printf("[%d]\n", ft_find_next_prime(1));

}