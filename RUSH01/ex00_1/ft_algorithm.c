/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papiyapa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:28:29 by papiyapa          #+#    #+#             */
/*   Updated: 2024/07/21 22:26:46 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_checker(unsigned int **table, char *clue, unsigned int size);

int	is_valid(unsigned int **table, int row, int col, unsigned int num)
{
	int	index;

	index = 0;
	while (index < 4)
	{
		if (table[row][index] == num || table[index][col] == num)
		{
			return (0);
		}
		index++;
	}
	return (1);
}

int	rush(unsigned int **table, unsigned int row, unsigned int col, char *clues, unsigned int size)
{
	unsigned int	num;

	if (row == size)
		return (ft_checker(table, clues, size));
	if (col == size)
		return (rush(table, row + 1, 0, clues, size));
	if (table[row][col] != 0)
		return (rush(table, row, col + 1, clues, size));
	num = 1;
	while (num <= size)
	{
		if (is_valid(table, row, col, num))
		{
			table[row][col] = num;
			if (rush(table, row, col + 1, clues, size))
				return (1);
			table[row][col] = 0;
		}
		num++;
	}	
	return (0);
}
