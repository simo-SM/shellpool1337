#include <stdio.h>
// #include <string.h>
int ft_strcmp(char *s1, char *s2)
{
    int i;
    
    i = 0;
    while (s1[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}
int main() {
	
	char	*s1 = "hel";
	char	*s2 = "hel";

	printf("My: %d\n", ft_strcmp(s1, s2));

}

