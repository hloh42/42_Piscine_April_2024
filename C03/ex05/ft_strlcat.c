/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:48:42 by hloh              #+#    #+#             */
/*   Updated: 2024/04/16 22:30:22 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>

//take the full size of  
int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	if (dest == NULL || src == NULL)
		return (0);

	unsigned int	i;
	unsigned int	d_size;
	unsigned int	s_size;
	unsigned int	max_append;

	i = 0;
	d_size = ft_strlen(dest);
	s_size = ft_strlen(src);
	if (size <= d_size)
		return (size + s_size);
	max_append = size - d_size - 1;
	while (src[i] != '\0' && i < max_append)
	{
		dest[d_size + i] = src[i];
		i++;
	}
	dest[d_size + i] = '\0';
	return (d_size + s_size);
}

/*
int	main(void)
{
	char start[20] = "START";
	char end[20] = "END";
	ft_strlcat(start, end, 20);
	printf("%s" , start );
	return (0);
}*/
