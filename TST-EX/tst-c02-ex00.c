#include <stdio.h>

// char *ft_strcpy(char *dest, char *src)
// {
//     int i;

//     i = 0;
//     while(src[i] !='\0')
//     {
//         dest[i] = src[i];
//         i++;
//     }
//     dest[i] = '\0';
//     return dest;
    
// }
//*********************ex01**************************** */
// char *ft_strncpy(char *dest, char *src, unsigned int n)
// {
//     unsigned int i ;
//     i = 0;
//     while(src[i] != '\0' && i < n){
//         dest[i] = src[i];
//         i++;
//     }
//     while(i < n)
//     {
//         dest[i] = '\0';
//         i++;
//     }
//     return dest;
// }
//*********************ex02**************************** */
// int ft_str_is_alpha(char *str)
// {
//     int i;
    
//     i = 0;
//     while (str[i] != '\0')
//     {
//         if ((!(str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
//         {
//             return 0;
//         }
//         i++;
//     }
//     return 1;
// }

//*********************ex03**************************** */
// Create a function that returns 1 if the given string contains only digits and 0 if it
// contains any other character.
// • Here is how it should be prototyped
//-------------------
// int ft_str_is_numeric(char *str)
// {
//     int i;

//     i = 0;
//     while(str[i] != '\0')
//     {
//         if (!(str[i] >= '0' && str[i] <= '9'))
//         {
//             return 0;
//         }
//         i++;
//     }
//     return 1;
// }

//*********************ex04**************************** */
// • Create a function that returns 1 if 
// the given string contains only lowercase alphabetical characters and 0 
// if it contains any other character.
//----------------------------------

// int ft_str_is_lowercase(char *str)
// {
//     int i;
//     i = 0;
//     while (str[i] != '\0')
//     {
//         if (!(str[i] >= 'a' && str[i] <= 'z'))
//         {
//             return 0;
//         }
//         i++;
//     }
//     return 1;
// }

//*********************ex05**************************** */
// Create a function that returns 1 
// if the given string contains only uppercase alphabetical characters and 0 
// if it contains any other character.
//------------------------------------

// int ft_str_is_uppercase(char *str)
// {
//     int i;
//     i = 0;
//     while (str[i] != '\0')
//     {
//         if ((str[i] >= 'A' && str[i] <= 'Z'))
//         {
//             return 0;
//         }
//         i++;

//     }
//     return 1;
// }

//*********************ex06**************************** */

// Create a function that returns 1 
// if the given string contains only printable characters and 0 
// if it contains any other character
//--------------------------------------

// int ft_str_is_printable(char *str)
// {
//    int i ;
//    i = 0 ;
//    while (str[i] != '\0')
//    {
//         if(!(str[i] >= 32 && str[i] <= 126))// this a-z ||0-9 || - / ~
//         {
//             return 0;
//         }
//         i++;
//    } 
//    return 1;
// }

//*********************ex07**************************** */

// • Create a function that converts every letter to uppercase.
//---------------------------------------------
// char *ft_strupcase(char *str)
// {
//     int i;

//     i = 0;
//     while (str[i] != '\0')
//     {
//         if ((str[i] >= 'a' && str[i] <= 'z'))
//         {
//             str[i] -= 32;
//         }
//         i++;
//     }
//     return str;
// }

//*********************ex08**************************** */

// • Create a function that converts every letter to uppercase.
//---------------------------------------------
// char *ft_strupcase(char *str)
// {
//     int i;

//     i = 0;
//     while (str[i] != '\0')
//     {
//         if ((str[i] >= 'A' && str[i] <= 'Z'))
//         {
//             str[i] += 32;
//         }
//         i++;
//     }
//     return str;
// }

//*********************ex08**************************** */
// • Create a function that capitalizes the first 
// letter of each word and converts all other
// letters to lowercase.
// • A word is a sequence of alphanumeric characters.
// • For example:
// hi, how are you? 42words forty-two; fifty+and+one
//-------------------------------------------------

// char *ft_strcapitalize(char *str)
// {
//     int i ;
//     i = 0;
//     while (str[i] != '\0')
//     {
//         if ((i - 1 == 0 && str[i] != ' ')
//             || (str[i - 1] >= 'a' && str[i - 1] <= 'z')
//             || (str[i - 1] >= '0' && str[i - 1] <= '9')
//             || (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
//         {
//         }
//         else if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] -=32;
//         }
//         i++;


//     }
//     return str;
// }


//***************************************************** */
//***************************************************** */
//***************************************************** */
//**********************|----C03----|********************/
//***************************************************** */
//***************************************************** */
//***************************************************** */
//*************************EX00**************************** */
// • Reproduce the behavior of the function strcmp (man strcmp).
//--------------------------------------

// int ft_strcmp(char *s1, char *s2)
// {
//     int i;
//     i = 0;
//     while (s1[i] != '\0' && s1[i] == s2[i])
//     {
//         i++;
//     }
//     return (s1[i] - s2[i]);   
// }


//*************************EX01**************************** */
// Reproduce the behavior of the function strncmp (man strncmp).
//--------------------------------------

// int ft_strncmp(char *s1, char *s2, unsigned int n)
// {
//     unsigned int i ;
//     if (n == 0)
//     {
//         return 0;
//     }
//     i = 0 ;
//     while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
//     {
//         if (s1[i] != s2[i])
//         {
//             return (s1[i] - s2[i]);
//         }
//         i++;
//     }
//     return (s1[i] - s2[i]);
// }

//*************************EX02**************************** */
// • Reproduce the behavior of the function strcat (man strcat).
//---------------------------------------

// char *ft_strcat(char *dest, char *src)
// {
//     int i;
//     int j;

//     i= 0; 
//     j =0;
//     while (dest[j] != '\0')
//     {
//         j++;
//     }
//     while (src[i] != '\0')
//     {
//         dest[j] = src[i];
//         i++;
//         j++;
//     }
//     dest[j] = '\0';
//     return dest;

// }

//*************************EX03**************************** */
// • Reproduce the behavior of the function strncat (man strncat).
//------------------------------------------------

// int ft_strlen(char *str)
// {
//     int i;
//     i = 0;
//     while (str[i] != '\0')
//     {
//         i++;
//     }
//     return i;
// }

// char *ft_strncat(char *dest, char *src, unsigned int nb)
// {
//     int i;
//     int d_len;
//     i = 0;
//     d_len = ft_strlen(dest);
//     while (i < nb && src[i] != '\0')
//     {
//         dest[d_len + i] = src[i];
//         i++;
        
//     }
//     dest[d_len + i] = '\0';
//     return dest;
// }

//*************************EX04**************************** */
// • Reproduce the behavior of the function strstr (man strstr).
//----------------------------------

// char *ft_strstr(char *str, char *to_find)
// {
//    int i;
//    int j;
//    if (to_find[j] != '\0')
//    {
//         return str;
//    }
//    i = 0;
//    while (str[i] !='\0')
//    {
//         j = 0;
//         while (to_find[j] == str[i + j] && to_find[j] != '\0')
//         {
//             j++;
//             if (to_find[j] != '\0')
//             {
//                 return (&str[i]);
//             }
//         }
//         i++;
//    }
//    return 0;
//}

//*************************EX05**************************** */
// • Reproduce the behavior of the function strlcat (man strlcat).

//---------------------------------------------------

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int len_d;
    unsigned int len_s;
    unsigned int i;

    len_d = 0;
    len_s = 0;
    i = 0;
    while (dest[len_d] != '\0')
    {
        len_d++;
    }
    while (src[len_s] != '\0')
    {
        len_s++;
    }
    if (size <= len_d)
    {
        return (size + len_s);
    }
    while (src[i] != '\0' && (len_d + i) < size - 1)
    {
        dest[len_d + i] = src[i];
        i++;
    }
    dest[len_d + i] = '\0';
    return (len_d + len_s);
}

int main()
{
    // char src[] = "this code 1337";
    // char dest[] = "hhhhhh";
    // unsigned int  n = 5;
    // printf(">> %s",ft_strncpy(dest, src, n));
    // ------------------------------------
   
    // char str1[] = "hi, how are you? 42words forty-two; fifty+and+one";
    // char str2[] = "HASSN";
    // char str3[] = "";

    // printf("Test 1: %s\n",ft_strcapitalize(str1));  
    // printf("Test 2: %s\n",ft_strcapitalize(str2)); 
    // printf("Test 3: %s\n",ft_strcapitalize(str3));

    //-----------------------------------------------

    // char	*s1 = "hello";
	// char	*s2 = "hello";

	// printf("My: %d\n", ft_strncmp(s1, s2 ,1));

    //----------------------------------------------

    // char src[] = " char *ft_strncat(char *dest, char *src, unsigned int nb)";
    // char dest[10] = "simo";
    // int nb = 5;
    // ft_strncat(src, dest, nb);
    // printf("this code worke in :%s ",src ,dest, nb);
    // return 0;

    char dest[5] = "hii";
    char src[5] = "simo";
    unsigned int size = 2;
    printf(">>> %d\n", ft_strlcat(dest, src, size));
}