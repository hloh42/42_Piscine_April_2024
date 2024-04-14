/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colim <colim@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:34:37 by colim             #+#    #+#             */
/*   Updated: 2024/04/14 16:17:42 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*result = "0000000000000000";

char	*handle1(char *bounds, char *output) //takes the string and give value to nearest sq
{
	int i;
	//char out;

	i = 0;
	while (bounds[i] != '\0') //read 4321122243211222
	{
		if (bounds[i] == '1')
		{
			if (i < 4) //top
				output[0 * 4 + i] = '4';	// row = 0
			else if (i < 8)	//bottom
				output[3 * 4 + (i % 4)] = '4';	//row = 3, col = %
			else if (i < 12) //left
				output[((i % 4) * 4) + 0] = '4';	//row = % col = 0
			else if (i < 16) // right
				output[(i % 4) * 4 + 3] = '4';	//row = % col = 3
		}
		i++;
	}
	return output;
}


void	Handle4_Top(char *output, int col)
{
	int	j;
	int	size;

	size = 4;
	j = 0;
	while (j < size)
	{
		output[j * 4 + col] = '1' + j;
		j++;
	}
}

void	Handle4_Bot(char *output, int col)
{
	int	j;
	int	size;

	size = 4;
	j = 0;
	while (j < size)
	{
		output[(3 - j) * 4 + col] = '1' + j;
		j++;
	}
}

void	Handle4_Left(char *output, int row)
{
	int	j;
	int	size;

	size = 4;
	j = 0;
	while (j < size)
	{
		output[row * 4 + j] = '1' + j;
		j++;
	}
}

void	Handle4_Right(char *output, int row)
{
	int	j;
	int	size;

	size = 4;
	j = 0;
	while (j < size)
	{
		output[row * 4 +(3 - j)] = '1' + j;
		j++;
	}
}

char	*handle4(char *bounds, char *output)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (bounds[i] == '4')
		{
			if (i < 4)
			{
				Handle4_Top(output,i);
			}
			else if ( i < 8 )
			{
				Handle4_Bot(output,i % 4);
			}
			else if (i < 12)
			{
				Handle4_Left(output, i % 4);
			}
			else if (i < 16)
			{
				Handle4_Right(output, i % 4);
			}
		}
		i++;
	}
	return (output);
}

int	main(int argc, char *argv[])
{
	int i;
	int j;
	//int k;
	char *bounds;
	char *template; //array with null
	
	//i = 0;
	j = 0;
	//k = 0;
	bounds = malloc((strlen(argv[1]) / 2 + 1) * sizeof(char)); // divide by 2 to account for space between 1 char and the next
	template = malloc(17 * sizeof(char));
	if (argc != 2)
	{		//checks for ./ and string
		printf("Error\n");
	}

	if (!bounds || !template)
	{
		perror("Memory allocation failed");
		free(bounds);
		free(template);
		return (1);
	}

	i = 0;
	while ( i < 16 ) 
	{
		template[i] = '0';
		i++;
	}
	template[16] = '\0';

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (i % 2 == 0)
		{
			bounds[j] = argv[1][i]; //take out whitespace
			//printf("%c\n" , bounds[j]);
			j++;
		}
		i++;
	}

	bounds[j] = '\0'; //ends the string
	
	//prepropogate solution based on boundary
	template = handle1(bounds, template); //modify solved
	template = handle4(bounds, template);
	printf("%s\n", bounds);
	printf("%s\n", template);

	free(bounds);
	free(template);
	return (0);
}
