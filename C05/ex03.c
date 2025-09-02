#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return 0;
    if (power == 0)
        return 1; 
    return nb * ft_recursive_power(nb, power - 1);
}
int main()
{
    printf("t1 >> %d\n", ft_recursive_power(4, 2));
    printf("t2 >> %d\n", ft_recursive_power(0, 0));
    printf("t3 >> %d\n", ft_recursive_power(0, 1));
    printf("t4 >> %d\n", ft_recursive_power(2, 2));

}