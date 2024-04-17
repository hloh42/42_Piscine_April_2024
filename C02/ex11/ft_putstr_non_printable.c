/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:13:24 by hloh              #+#    #+#             */
/*   Updated: 2024/04/16 14:25:47 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*Conversion from any base to decimal.
  1.Write down the number.
  2.Multiply each digit by the base raised to the power of its position.
  Position start at 0 from the right.
  3.Sum all these values to get te decimal number
*/
/*Applying this...
  Conversion from decimal to any other base
  1.Divide the decimal number by the base.
  2.Record the remainder as the rightmost digit.
  3.Use the quotient as the new number to divide by the base.
  4.Repeat until the quotient is 0.
  5.The digits,read from last remainder to first, gives you the number 
  the new base.
  
  unsigned char  0 - 255
  Then due to 2 digits limit it will work 16*16  = 256
  You need \\ to escape the print.
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert_hex_base(unsigned char c)
{
	char	*hex_base;

	hex_base = "0123456789abcdef";
	if (c / 16 > 0)
	{
		ft_putchar(hex_base[c / 16]);
		ft_putchar(hex_base[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hex_base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] <= 31 || str[index] >= 127)
		{
			ft_putchar('\\');
			ft_convert_hex_base(str[index]);
		}
		else
		{
			ft_putchar(str[index]);
		}
		index++;
	}
}
