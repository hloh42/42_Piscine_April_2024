/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:47:42 by hloh              #+#    #+#             */
/*   Updated: 2024/04/21 20:22:59 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	floorSqrtHelper(int x, int i){}

int	ft_sqrt(int nb)
{
	if (nb == 0 || nb == 1)
		return nb;

	return floorSqrtHelper(nb, 1);

}
