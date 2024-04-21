/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:27:12 by hloh              #+#    #+#             */
/*   Updated: 2024/04/21 18:24:21 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#define SPACING "  "
#define CHUNK_SIZE 16

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	unsigned int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}

	return (size);
}

void	print_str(char *str, unsigned int size)
{
	//unsigned int	size;
	unsigned int	spacing;
	unsigned int	i;

	size = ft_strlen(str);
	spacing = 16;
	i = 0;
	while (i < size)
	{
		ft_putchar(str[i]);
		i++;
		size--;
		if (i >= spacing)
		{
			i = 0;
		}
	}
}

void	print_address(char *str, unsigned int size)
{
	unsigned long	ptr_value;
	char	address_str[19];
	unsigned int	i;

	i = 17;
	address_str[0] = '0';
	address_str[1] = 'x';
	ptr_value = (unsigned long)str;
	while (i > 1)
	{
		int digit;

		digit = ptr_value & 0xF;
		if(digit < 10)
		{
			address_str[i] = '0'+ digit;
			ft_putchar(address_str[i]);
		}
		else
		{
			address_str[i] = 'a' + (digit - 10);
			ft_putchar(address_str[i]);
	}
		i--;
		ptr_value >>=4;
	}
	address_str[18] = ':';
	ft_putchar(address_str[18]);
}

void	print_hexadecimal(char *str, unsigned int size)
{
	
}


void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int 	i;
	unsigned char	*ptr;

	*ptr = (unsigned char*)addr;
	i = 0;
	while (i < size)
	{
		unsigned int	bytes_to_process;
		if (size - i < CHUNK_SIZE)
			bytes_to_process = size - i;
		else
			bytes_to_process = CHUNK_SIZE;


		print_address(ptr + i, bytes_to_process);
		//print_hexadecimal(ptr + i, bytes_to_process);
		print_str(ptr + i, bytes_to_process);
		ft_putchar('\n');

		i+=CHUNK_SIZE;
	}
}

int	main(void)
{
	char sample_text[] = "HelloWorlds..!ITS A WHOLE NEW WHOLENAJSHFSH837483487";
	ft_print_memory(sample_text,sizeof(sample_text) - 1);

	return (0);
}*/
