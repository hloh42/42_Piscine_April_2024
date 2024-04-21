/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:32:22 by hloh              #+#    #+#             */
/*   Updated: 2024/04/21 18:53:42 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <string.h>
//#include <stdio.h>

/*strlcpy copies up to size - 1 character from 
Nul-terminated string src to dst
Nul-terminating the result. Size has to be larger than 0.
Return types : returns the total length of string 
they tried to create.
Strlcpy : returns the length of src.
Unsigned int cannot have -negative numbers.
*/
//s_size reset to 0 in between to copy over
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	s_size;

	s_size = 0;
	while (src[s_size] != '\0' && s_size < size - 1)
	{
		dest[s_size] = src[s_size];
		s_size++;
	}
	dest[s_size] = '\0';
	return (s_size);
}
/*
int	main(void)
{
	char s[] = "Hello";
	char s2[]= "World!";
	ft_strlcpy(s2,s,20);
	printf("String : %s\n", s2);
	return (0);
}*/
