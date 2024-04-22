/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:16:01 by hloh              #+#    #+#             */
/*   Updated: 2024/04/22 19:01:01 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 && nb == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power - 1 >= 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}
/*
int	main(void)
{
	
	printf("-2 to the power of 3:%d\n",ft_recursive_power(-2, 3));
	return (0);
}*/
