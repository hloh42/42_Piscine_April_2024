/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:26:07 by hloh              #+#    #+#             */
/*   Updated: 2024/04/23 11:55:12 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	is_prime_recursive(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_recursive(n, i + 2));
}

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	return (is_prime_recursive(nb, 3));
}
/*
int	main()
{
    printf("Is 167 prime? %d\n", ft_is_prime(167));  // Should print 1
    printf("Is 10 prime? %d\n", ft_is_prime(10));  // Should print 0
    return 0;
}*/
