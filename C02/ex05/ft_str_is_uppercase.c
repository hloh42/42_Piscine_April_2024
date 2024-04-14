/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:50:58 by hloh              #+#    #+#             */
/*   Updated: 2024/04/11 21:26:11 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	unsigned int	index;
	unsigned int	non_count;

	index = 0;
	non_count = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		if (!(str[index] >= 'A' && str[index] <= 'Z'))
		{
			non_count++;
		}
		index++;
	}
	if (non_count > 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
