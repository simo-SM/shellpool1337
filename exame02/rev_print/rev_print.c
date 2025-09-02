/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 21:55:01 by mohamous          #+#    #+#             */
/*   Updated: 2025/08/21 22:44:33 by mohamous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char  *ft_rev_print (char *str)
{
	int	i;
	int	rv;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	rv = i - 1;
	while (rv >= 0)
	{
		write(1, &str[rv], 1);
		rv--;
	}
	write(1, "\n", 1);
	return (str);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rev_print(argv[1]);
	}
	return 0;
}

