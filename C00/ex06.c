#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    print2(int n, int b)
{
       ft_putchar((b / 10) + '0');
       ft_putchar((b % 10) + '0');
       write(1," ",1);
       ft_putchar((n / 10) + '0');
       ft_putchar((n % 10) + '0');
        if (!(n == 98 && b == 99))
        {
            write(1, ", ", 2);
        }
}

void    ft_print_comb2(void)
{
        
        int b;
        int n;

        b = 0;
        while (b<= 98)
        {
                n= b + 1;
               while (n <= 99)
               {
                        print2(n, b);
                        n++;
               }
               b++;

        }
        
        
       
}
int main()
{
  ft_print_comb2();  
  return 0;    
}