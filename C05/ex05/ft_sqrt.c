/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:47:42 by hloh              #+#    #+#             */
/*   Updated: 2024/04/22 18:25:24 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;
	int	square;

	sqrt = 0;
	square = 0;
	if (nb < 0)
		return (0);
	while (square <= nb && square >= 0)
	{
		sqrt++;
		square = sqrt * sqrt;
		if (square == nb)
			return (sqrt);
	}
	return (0);
}
/*
int main() {
    // Test cases
    printf("Square root of %d is %d\n", 2, ft_sqrt(2));  // Should return 4
    printf("Square root of %d is %d\n", 20, ft_sqrt(20));  // Should return 0
    printf("Square root of %d is %d\n", 25, ft_sqrt(25));  // Should return 5
    printf("Square root of %d is %d\n", -4, ft_sqrt(-4));  // Should return 0
    return 0;
}*/
