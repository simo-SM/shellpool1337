#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while ( str[i] != '\0')
    {
        i++;
    }
    return i;

}
void ft_putnbr(int n)
{
    char c ;
    if (n>= 10)
    {
        ft_putnbr(n / 10);
    }
    c = (n % 10 ) + '0';
    write(1, &c, 1);
}
int main()
{
    char  str[] = "this exrcice 06 in c01";
    ft_putnbr(ft_strlen(str));
    write(1, "\n", 1);
}