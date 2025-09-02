/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 11:30:17 by mohamous          #+#    #+#             */
/*   Updated: 2025/08/22 12:17:14 by mohamous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

char    *ft_strrev(char *str) 
{
	int	i;
	int	len;
	int	tamp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i )
	{
		tamp = str[i];
		str[i] = str[len];
		str[len] = tamp;
		i++;
		len--;
	}
	return (str);
}
int main()
{
	char str[] = "this exam 1337";
	ft_strrev(str);
	write(1, str, ft_strlen(str));
	return 0;
}

