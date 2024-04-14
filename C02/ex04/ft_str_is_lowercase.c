/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:45:57 by hloh              #+#    #+#             */
/*   Updated: 2024/04/11 21:25:08 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	unsigned int	index;
	unsigned int	non_count;

	non_count = 0;
	index = 0;
	if (str[index] == '\0')
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		if (!(str[index] >= 'a' && str[index] <= 'z'))
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
