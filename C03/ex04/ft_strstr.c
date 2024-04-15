/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:08:07 by hloh              #+#    #+#             */
/*   Updated: 2024/04/15 15:45:44 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//if return (1) == true , else return (0)
int	search(char *str, char *to_find)
{	
	while (*to_find)
	{
		if (*str != *to_find)
		{
			return (0);
		}
		str++;
		to_find++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	while (to_find[size] != '\0')
	{
		size++;
	}
	if (size == 0)
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (search(&str[i], to_find))
			{
				return (&str[i]);
			}		
		}
		i++;
	}
	return (NULL);
}
