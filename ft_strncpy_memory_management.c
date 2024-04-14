/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:34:37 by hloh              #+#    #+#             */
/*   Updated: 2024/04/11 11:42:12 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	get_str_size(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return size;
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	index;
	int	new_size;
	
	new_size = get_str_size + n;
	index = 0;
	if (get_str_size(src) < get_str_size(dest))
	{
		while (src[index] != '\0')
		{
			dest[index]=src[index];
			index++;
		}
	}
	else 
	{
		char* new_dest;

		new_dest = (char *)malloc((new_size + 1) * sizeof(char));
		if (new_dest == NULL)
		{
			return (NULL);
		}
		while(src[index] != '\0')
		{
			new_dest[index] = src[index];
			index++;
		}
		new_dest[new_size] = '\0';
		free(dest);
		dest=new_dest;
	}
}
