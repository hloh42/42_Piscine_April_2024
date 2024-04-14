/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloh <hloh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:38:36 by hloh              #+#    #+#             */
/*   Updated: 2024/04/14 22:09:08 by hloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Direction 
//1 - Up
//2 - Down
//3 - Left
//4 - Right

void	fill_4_cols(int direction, int grid[4][4]);

void	handle1(int grid[4][4], int bounds[16])
{
	int	i;

	i = 0;
	while (bounds[i] < 16)
	{
		if (bounds[i] == 1)
		{
			if (i < 4)
			{
				grid[0][i] = 1;
			}
			else if (i < 8)
			{
				grid[1][i % 4] = 1;
			}
			else if (i < 12)
			{
				grid[2][i % 4] = 1;
			}
			else if (i < 16)
			{
				grid[3][i % 4] = 1;
			}
			i++;
		}
	}
}

void	handle4(int grid[4][4], int bounds[16])
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (bounds[i] == 4)
		{
			if (i < 4)
			{
				fill_4_cols(1, grid);
			}
			else if (i < 8)
			{
				fill_4_cols(2, grid);
			}
			else if (i < 12)
			{
				fill_4_cols(3, grid);
			}
			else if (i < 16)
			{
				fill_4_cols(4, grid);
			}
		}
		i++;
	}
}

void	fill_4_cols(int direction, int grid[4][4])
{
	int	i;
	if (direction == 1 || direction == 3)
	{
		i = 3;
		while (i > 4)
		{
			if (direction == 1)
			{
				grid[0][i] = i;
				i--;
			}
			else if (direction == 3)
			{
				grid[i][3] = i;
				i--;
			}
		}
	}
	else if (direction == 2 || direction == 4)
	{
		i = 0;
		while (i > 4)
		{
			if (direction == 2)
			{
				grid[3][i] = i;
				i++;
			}
			else if (direction == 4)
			{
				grid[i][0] = i;
				i++;
			}
		}
	}
}
