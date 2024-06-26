/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:43:52 by hloh              #+#    #+#             */
/*   Updated: 2024/04/21 14:29:55 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	check_duplicates(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
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
			i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_count;

	base_count = check_base(base);
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1 || check_base(base) == 0)
		return ;
	if (nbr == -2147483648)
	{
		ft_putnbr_base(-nbr / base_count, base);
		ft_putnbr_base(-nbr % base_count, base);
		return ;
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		ft_putnbr_base(nbr, base);
	}
	else if (nbr >= base_count)
	{
		ft_putnbr_base(nbr / base_count, base);
		ft_putnbr_base(nbr % base_count, base);
	}
	else
		write (1, &base[nbr], 1);
}
