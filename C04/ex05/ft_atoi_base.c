/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:56:56 by hloh              #+#    #+#             */
/*   Updated: 2024/04/21 11:06:14 by hloh             ###   ########.fr       */
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
		{
			i++;
		}
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	number;

	number = 0;
	return (number);
}
