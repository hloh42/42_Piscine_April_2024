/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:06:35 by hloh              #+#    #+#             */
/*   Updated: 2024/04/11 15:04:19 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		if (!check_alpha(str[index]))
		{
			return (0);
		}
		index++;
	}
	return (1);
}
