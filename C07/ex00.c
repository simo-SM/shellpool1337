#include <stdio.h>
#include <stdlib.h>

/*

char *src = "ABC";
char *dup = ft_strdup(src);
Memory:
+---+---+---+---+
| A | B | C | \0|
+---+---+---+---+
  ^
  |
 src
------------------------
2. بعد malloc(len + 1)
Heap (new space):
+---+---+---+---+
|   |   |   |   |
+---+---+---+---+
  ^
  |
 dup
--------------------------
src ---> +---+---+---+---+
         | A | B | C | \0|
         +---+---+---+---+

dup ---> +---+---+---+---+
         | A | B | C | \0|
         +---+---+---+---+

*/
//===================================================
char *ft_strdup(char *src)
{
    char    *dup;
    int     i;
    int     len;

    if (!src)
    {
        return (NULL);
    }
    len = 0;
    while (src[len] != '\0')
        len++;
    dup = (char *)malloc((len + 1) * sizeof(char));
    if (!dup)
        return (NULL);
    i = 0;
    while (i < len)
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return dup;
}
int main()
{
    char *src = "this exrcice in c language 07";
    char *dup = ft_strdup(src);
    printf("[!] %s\n", src);
    printf("[?] %s\n", dup);

    free(dup);
    return 0;

}