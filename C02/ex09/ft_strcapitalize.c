/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:05:17 by hloh              #+#    #+#             */
/*   Updated: 2024/04/15 21:09:28 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*capitalize(char *str, int index)
{
	if (str[index] >= 'a' && str[index] <= 'z')
	{
		str[index] -= 32;
	}
	return (str);
}

char	*decapitalize(char *str, int index)
{
	if (str[index] >= 'A' && str[index] <= 'Z')
	{
		str[index] += 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char			c;
	unsigned int	index;
	unsigned int	word_index;

	word_index = 1;
	index = 0;
	while (str[index] != '\0')
	{
		c = str[index];
		if (word_index && c >= 'a' && c <= 'z')
			str = capitalize(str, index);
		else if (!word_index && c >= 'A' && c <= 'Z')
			str = decapitalize(str, index);
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			word_index = 1;
		else
			word_index = 0;
		index++;
	}
	return (str);
}
/*
int	main(int argc , char *argv[])
{
	if (argc >= 2)
	{
		printf("%s",ft_strcapitalize(argv[argc - 1]));
	}
	return (0);
}*/
