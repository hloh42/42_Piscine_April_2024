/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:54:09 by hloh              #+#    #+#             */
/*   Updated: 2024/04/11 21:34:10 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	unsigned int	index;
	unsigned int	non_count;

	non_count = 0;
	index = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		if (!(str[index] >= 32 && str[index] <= 126))
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
