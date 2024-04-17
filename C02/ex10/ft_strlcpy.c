/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:32:22 by hloh              #+#    #+#             */
/*   Updated: 2024/04/16 13:11:53 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*strlcpy copies up to size - 1 character from 
Nul-terminated string src to dst
Nul-terminating the result. Size has to be larger than 0.
Return types : returns the total length of string 
they tried to create.
Strlcpy : returns the length of src.
Unsigned int cannot have -negative numbers.
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	s_size;

	s_size = 0;
	while (src[s_size] != '\0')
	{
		s_size++;
	}
	if (size == 0)
	{
		return (s_size);
	}
	s_size = 0;
	while (src[s_size] != '\0' && s_size < size - 1)
	{
		dest[s_size] = src[s_size];
		s_size++;
	}
	dest[s_size] = '\0';
	return (s_size);
}
