/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:44:38 by hloh              #+#    #+#             */
/*   Updated: 2024/04/11 12:04:33 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char*	ft_strncpy(char* dest,char* src, unsigned int n);
char*	ft_strcpy(char* dest, char* src);
void	print_string(const char* str);

void print_string(const char *str) {
    while (*str != '\0') {
        putchar(*str);
        str++;
    }
}

int	main(void)
{
	//test ex00 ft_strcpy
	char dest[] = "Hello,World!";
	char src[] = "Hi!";
	
	unsigned int size = sizeof(dest) / sizeof(dest[0]);
	printf("Size of dest array: %u\n", size);

	print_string(dest);
	print_string(src);
	write (1,"\n", 1);
	ft_strncpy(dest, src, size);
	print_string(dest);
	print_string(src);
	write (1,"\n", 1);
	//Put your test cases here
	return (0);
}
