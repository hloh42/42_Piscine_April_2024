/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:08:07 by hloh              #+#    #+#             */
/*   Updated: 2024/04/16 22:25:51 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	tf_size;
	unsigned int	s_size;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	tf_size = 0;
	s_size = 0;
	while (str[s_size] != '\0')
		s_size++;
	while (to_find[tf_size] != '\0')
		tf_size++;
	if (s_size == 0)
		return (str);
	while (i <= s_size - tf_size)
	{
		j = 0;
		while (j < tf_size && str[i + j] == to_find[j])
			j++;
		if (j == tf_size)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
