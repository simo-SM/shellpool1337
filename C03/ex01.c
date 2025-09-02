
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ( i < n&& s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
int main() {
	
	// char	*s1 = "hel";
	// char	*s2 = "hel";

	printf("%d\n", ft_strncmp("abc", "abc", 3));  
	printf("%d\n", ft_strncmp("abc", "abd", 3));   
	printf("%d\n", ft_strncmp("abc", "ab", 3));    
	printf("%d\n", ft_strncmp("ab", "abc", 3));    


}