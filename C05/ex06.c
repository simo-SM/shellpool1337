#include <stdio.h>

int ft_is_prime(int nb)
{
   int i;
   i = 2;
   if (nb < i)
   {
        return 0;
   }  
   while (i < nb)
   {
    if (nb % i == 0)
        return 0;
    i++;
   }
   return 1;

}
int main() 
{
    printf("%d\n", ft_is_prime(2));
    printf("%d\n", ft_is_prime(9));
    printf("%d\n", ft_is_prime(11));
    printf("%d\n", ft_is_prime(10));
    printf("%d\n", ft_is_prime(7));

}