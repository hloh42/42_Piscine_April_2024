/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:54:11 by hloh              #+#    #+#             */
/*   Updated: 2024/04/20 16:41:28 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//if positive , return 1
//if negative, return 0
//move the index if its spaces
//if sign is odd , multiply into negative
// i will return 1st index after spaces and --+-

// i - start of digits index
// digits - end of digits index
/*int	parse_sign(char *str)
{

}
int	store_digit(char *str)
{
	return number;
}*/

unsigned int	skip_whitespace(char *str)
{
	unsigned int	i;

	i = 0;
	while ((str[i] != '\0') && ((str[i] == ' ')
			|| (str[i] >= 9 && str[i] <= 13)))
		i++;
	return (i);
}

int	process_sign(char *str, unsigned int *index)
{
	int	sign;

	sign = 0;
	while (str[*index] != '\0' && (str[*index] == '-' || str[*index] == '+'))
	{
		sign++;
		(*index)++;
	}
	return (sign);
}

int	convert_to_number(char *str, unsigned int index)
{
	int	number;

	number = 0;
	while (str[index] != '\0' && str[index] >= '0' && str[index] <= '9')
	{
		number = number * 10 + (str[index] - '0');
		index++;
	}
	return (number);
}

int	ft_atoi(char *str)
{
	unsigned int	i;
	int				sign;
	int				number;

	i = skip_whitespace(str);
	sign = process_sign(str, &i);
	if (sign % 2 == 0)
		sign = 1;
	else
		sign = -1;
	number = convert_to_number(str, i);
	return (number * sign);
}
/*
int	main(void)
{
	char str[] = " 	---+++12345alopxz567";
	//ft_atoi("    ---+--+1234ab567");
	printf("%d" , ft_atoi(str));
	return (0);
}*/
