/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:05:17 by hloh              #+#    #+#             */
/*   Updated: 2024/04/11 22:08:36 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*capitalize(char *str, int size)
{
	if (size >= 0 && size < 128)
	{
		if (str[size] >= 'a' && str[size] <= 'z')
		{
			str[size] -= 32;
		}
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	index;
	unsigned int	word_index;

	word_index = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if (((index == 0 || str[index - 1] == ' ')
				&& (str[index - 1] >= 0) && str[index - 1] <= 64))
		{
			word_index = index;
		}
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str = capitalize(str, index);
		}
		index++;
	}
	return (str);
}
