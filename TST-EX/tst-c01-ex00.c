// #include <stdio.h>

// int ft_strcmp(char *s1, char *s2)
// {
//     int i = 0;
//     while (s1[i] != '\0' && s1[i] == s2[i] && s2[i] != '\0')
//     {
//         i++;
//     }
//     return (s1[i] - s2[i]);
// }
// int main() 
// {
//     char *s1 = "hii";
//     char *s2 = "hii";

//     printf(">> %d\n ",ft_strcmp(s1, s2));
  
// }

//===================================================
// ex01
// #include <stdio.h>

// int ft_strncmp(char *s1, char *s2, unsigned int n)
// {
//     int i ;
//     i = 0;
//     if (n == 0)
//     {
//         return 0;
//     }
//     while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] - s2[i])
//     {
        
//         if (s1[i] != s2[i])
//         {
//             return (s1[i] - s2[i]);
//         }
//         i++;
//     }
//     return (s1[i] - s2[i]);
// }
// int main() 
// {
//     char *s1 = "llii";
//     char *s2 = "hii";
//     unsigned int n = 5;
//     printf(">> %d\n ",ft_strncmp(s1, s2, n));
  
// }

//=============================================================
//ex02
// #include <stdio.h>

// char *ft_strcat(char *dest, char *src)
// {
//     int i;
//     int j;

//     i = 0;
//     while(dest[i] != '\0')
//     {
//         i++;
//     }
//     while (src[j] != '\0')
//     {
//         dest[i] = src[j];
//         j++;
//         i++;
//     }
//     dest[i] = '\0';
//     return dest;
    
// }
// int main()
// {
//     char dest[] = "hii ";
//     char src[] = "simo ";
//     printf (">>  %s", ft_strcat(dest, src));
// }

//=========================================================

//ex03

// #include <stdio.h>
// int ft_strlen(char *str)
// {
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         i++;
//     }
//     return i;
// }

// char *ft_strncat(char *dest, char *src, unsigned int nb)
// {
//     unsigned int lend;
//     unsigned int i;
//     lend = ft_strlen(dest);
//     i = 0;
//     while (i < nb && src[i] != '\0')
//     {
//         dest[lend + i] = src[i];
//         i++;
        
//     }
//     dest[lend + i] = '\0';
//     return dest;
// }

// int main()
// {
//     char src[] = "this code work ex03";
//     char dest[20] = "go work !! ";
//     unsigned int n = 20;

//     ft_strncat(dest, src, n);

//     printf("Resulting string: %s\n", dest);
// }
//=====================================================
//ex04
// #include <stdio.h>

// char *ft_strstr(char *str, char *to_find)
// {
//     int i ;
//     int j;
//     if (to_find[j] != '\0')
//     {
//         return str;
//     }
//     while (str[i] != '\0')
//     {
//         j = 0;
//         while (to_find[j] == str[i + j] && to_find[j] != '\0')
//         {
//             j++;
//         }
//         if (to_find[j] != '\0')
//         {
//             return (&str[i]);
//         }
//         i++;

//     }
//     return 0;
// }
// int main()
// {
//     char str[] = "this hii ";
//     char to_find[] = "hjhj";

//     printf("this code strstr : %s",ft_strstr(str, to_find));
// }
//======================================================
//ex5
// #include <stdio.h>

// unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
// {
//     unsigned int lend;
//     unsigned int lens;
//     unsigned int i;

//     lend = 0;
//     lens = 0;
//     i = 0;
//     while(dest[lend] != '\0')
//     {#include <stdio.h>

// unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
// {
//     unsigned int lend;
//     unsigned int lens;
//     unsigned int i;

//     lend = 0;
//     lens = 0;
//     i = 0;
//     while(dest[lend] != '\0')
//     {
//         lend++;
//     }
//     while(src[lens] !='\0')
//     {
//         lens++;
//     }
//     if(size < lend)
//     {
//         return (size + lens);

//     }
//     while(src[i] != '\0' && (lend + i) < size -  1) 
//     {
//         dest[lend + i] = src[i];
//         i++;
//     }
//     dest[lend + i] = '\0';
//     return (lend + lens);

// }
// int main()
// {
//     char src[] = "this";#include <stdio.h>

// unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
// {
//     unsigned int lend;
//     unsigned int lens;
//     unsigned int i;

//     lend = 0;
//     lens = 0;
//     i = 0;
//     while(dest[lend] != '\0')
//     {
//         lend++;
//     }
//     while(src[lens] !='\0')
//     {
//         lens++;
//     }
//     if(size < lend)
//     {
//         return (size + lens);

//     }
//     while(src[i] != '\0' && (lend + i) < size -  1) 
//     {
//         dest[lend + i] = src[i];
//         i++;
//     }
//     dest[lend + i] = '\0';
//     return (lend + lens);

// }
// int main()
// {
//     char src[] = "this";
//     char dest[20]= "simo";
//     unsigned int size = 20;

//     printf("risult : %zu\n",ft_strlcat(src, dest , size));
// }
//     char dest[20]= "simo";
//     unsigned int size = 20;

//     printf("risult : %zu\n",ft_strlcat(src, dest , size));
// }
//         lend++;
//     }
//     while(src[lens] !='\0')
//     {
//         lens++;
//     }
//     if(size < lend)
//     {
//         return (size + lens);

//     }
//     while(src[i] != '\0' && (lend + i) < size -  1) 
//     {
//         dest[lend + i] = src[i];
//         i++;
//     }
//     dest[lend + i] = '\0';
//     return (lend + lens);

// }
// int main()
// {
//     char src[] = "this";
//     char dest[20]= "simo";
//     unsigned int size = 20;

//     printf("risult : %zu\n",ft_strlcat(src, dest , size));
// }
//==============================================
// c01 ex07
#include <unistd.h>

// void ft_rev_int_tab(int *tab, int size)
// {
//     int i;
//     int t;
//     i = 0;
//     while(i < size / 2)
//     {
//         t = tab[i] ;
//         tab[i] = tab[size - 1 - i];
//         tab[size - 1 - i] = t;
//         i++;
//     }

// }
// int ft_putnbr(int n)
// {
//     char c;
//     if (n > 9)
//     {
//         ft_putnbr(n / 10);
//     }
//     c = (n % 10) + '0';
//     write(1, &c, 1);
// }
// =================================================
// ex08

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int t;

    i = 0;
   
    while (i < size - 1)
    {
        j = 0;
        while (j < size - 1 - i)
        {
            if (tab[j] >= tab[j + 1])
            {
                t = tab[j];
                tab[j] = tab[j + 1];
                tab [j + 1] = t;

            }
            j++;
        }
        i++;
    }
}
int ft_putnbr(int n)
{
    char c;
    if (n > 9)
    {
        ft_putnbr(n / 10);
    }
    c = (n % 10) + '0';
    write(1, &c, 1);
}
int main() 
{
    int tab[] = {5,4,3,1,5};
    int size = 5;
    ft_sort_int_tab(tab, size);
    int i = 0;
    while (i < size)
    {
        ft_putnbr(tab[i]);
        write(1, " ", 1);
        i++;
    }

}


