#include <stdio.h>

int ft_sqrt(int nb)
{
    int sqr;
    int result; 

    sqr = 0;
    result = 1;
    while (result  < nb)
    {
        sqr = result * result;
        if(!(sqr - nb))
        {
            return result;
        }
        result++;
    }
    return 0;

}
int main()
{
    int r = ft_sqrt(36);
    printf("%d", r);
    return 0;
}