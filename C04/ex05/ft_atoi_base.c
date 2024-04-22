/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:56:56 by hloh              #+#    #+#             */
/*   Updated: 2024/04/22 19:31:15 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

//return (0) when its invalid else return the value
int	check_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i] != '\0'
		&& (base[i] != '+' || base[i] != '-' || base[i] == ' '))
	{
		i++;
	}
	return (i);
}

unsigned int	find_num_idx(char *str, int *sign)
{
	unsigned int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			(*sign)++;
		i++;
	}
	if (*sign % 2 == 0)
		*sign = 1;
	else
		*sign = -1;
	return (i);
}

int	get_index_in_base(char c, char *base)
{
	int	j;

	j = 0;
	while (base[j])
	{
		if (c == base[j])
			return (j);
		j++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	i;
	int				number;
	int				sign;
	int				idx;

	sign = 0;
	number = 0;
	if (ft_strlen(base) < 2 || !check_base(base) || base[0] == '\0')
		return (0);
	i = find_num_idx(str, &sign);
	while (str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')))
	{
		idx = get_index_in_base(str[i], base);
		if (idx != -1)
			number = number * ft_strlen(base) + idx;
		else
		{
			i++;
			continue ;
		}
		i++;
	}
	return (number * sign);
}
/*
int	main(void)
{
	char* s = "  +--4w40222";
	char* base = "0123456789";
	//ft_atoi_base(s, base);
	printf("Result: %d", ft_atoi_base(s, base));
	return (0);
}*/
