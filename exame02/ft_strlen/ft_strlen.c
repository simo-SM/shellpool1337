/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 19:16:37 by mohamous          #+#    #+#             */
/*   Updated: 2025/08/21 19:35:07 by mohamous         ###   ########.fr       */
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
	return (i);
}
int	ft_putnbr(int n)
{
	char	c;
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	c =(n % 10) + '0';
	write(1, &c, 1);
}

int main()
{
	char str[] = " this exrcice exame 02,";
	ft_putnbr(ft_strlen(str));
	write(1, "\n", 1);
	
}

	       
