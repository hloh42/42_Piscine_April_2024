/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:43:52 by hloh              #+#    #+#             */
/*   Updated: 2024/04/20 17:24:47 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	check_duplicates(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		while (base[j] != '\0')
		{
			j = i + 1;
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_base(char *base)
{
	unsigned int	i;

	i = 0;
	if (base[0] == '\0' || check_duplicates(base) == 1)
		return (0);
	else
	{
		while (base[i] != '\0' && (base[i] != '+' || base[i] != '-'))
		{
			i++;
		}
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	check_base(base);
}
