/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:47:14 by hloh              #+#    #+#             */
/*   Updated: 2024/04/11 15:59:44 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] >= 97) && (str[index] <= 122))
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}
