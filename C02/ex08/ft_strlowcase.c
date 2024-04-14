/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:47:14 by hloh              #+#    #+#             */
/*   Updated: 2024/04/11 16:04:29 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] >= 65) && (str[index] <= 90))
		{
			str[index] += 32;
		}
		index++;
	}
	return (str);
}
