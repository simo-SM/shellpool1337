#include <stdio.h>
//================================================
    //                 F(5)
    //                /    \
    //            F(4)      F(3)
    //           /   \      /   \
    //        F(3)  F(2)  F(2)  F(1)
    //        / \    / \   / \   
    //     F(2) F(1) F(1) F(0) F(1)
    //     / \
    //  F(1) F(0)
    //------------------------------------
// F(0) = 0
// F(1) = 1

// F(2) = F(1) + F(0) = 1 + 0 = 1
// F(3) = F(2) + F(1) = 1 + 1 = 2
// F(4) = F(3) + F(2) = 2 + 1 = 3
// F(5) = F(4) + F(3) = 3 + 2 = 5

//=====================================================
int ft_fibonacci(int index)
{
  //cas de base
  if (index < 0)
  {
    return (-1);
  }
  if (index == 0)
  {
    return(0);
  }
  if (index == 1)
  {
    return (1);
  }
  return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
int main()
{
    int i;

    i = 1;
    while (i <= 4)
    {
        printf("Fibonacci(%d) = %d\n", i, ft_fibonacci(i));
        i++;
    }
    return (0);

}