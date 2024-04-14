/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:13:17 by hloh              #+#    #+#             */
/*   Updated: 2024/04/11 13:26:06 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char* s1, char* s2);// ex00
int ft_strncmp(char* s1, char* s2, unsigned int n);//ex 01
int ft_strcat(char *s1, char* s2); //ex 02
int ft_strncat(char *s1, char* s2, unsigned int nb); //ex 03
int ft_strstr(char*str , char *to_find); //ex04
unsigned int ft_strlcat(char *dest, char *src , unsigned int size);//ex 05

int	main(void)
{
	char test01[] = "Wha";
	char test01a[] = "What";
	//return (ft_strcmp(test01, test01a));
	//return(ft_strncmp(test01, test01a,3));
	char test02[] = " is";
	printf("%s\n" , ft_strcat(test01a , test02));	
}
