/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:31:19 by hloh              #+#    #+#             */
/*   Updated: 2024/04/11 21:24:21 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <unistd.h>

int	is_numeric(char c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{	
	int	index;

	index = 0;
	if (str[index] == '\0')
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		if (!(is_numeric(str[index])))
		{
			return (0);
		}
		index++;
	}
	return (1);
}
