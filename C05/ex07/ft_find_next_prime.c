/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:55:45 by hloh              #+#    #+#             */
/*   Updated: 2024/04/23 12:57:08 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	n = 3;
	while (n * n <= nb)
	{
		if (nb % n == 0)
			return (0);
		n = n + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	current;

	current = nb + 1;
	printf("current val :%d\n" , current);
	while (1)
	{
		if (ft_is_prime(current))
			return (current);
		current++;
	}
}

int	main(void)
{
	printf("Next prime of 10 is : %d\n", ft_find_next_prime(10));
}
