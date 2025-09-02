/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 21:22:25 by mohamous          #+#    #+#             */
/*   Updated: 2025/08/21 21:52:37 by mohamous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tamp;

	tamp = *a;
	*a = *b;
	*b = tamp;
}

void	ft_putnbr(int n)
{
	char	c;
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int main()
{
	int	a = 50;
	int	b = 60;

	ft_swap(&a, &b);

	ft_putnbr(a);
	write(1, "\n ", 1); 
	ft_putnbr(b);
	return 0;
}
