/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <dmimarke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:28:29 by papiyapa          #+#    #+#             */
/*   Updated: 2024/07/21 22:53:30 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_checker(int **table, char *clue, int size);

int	is_valid(int **table, int row, int col, int num, int size)
{
	int	index;

	index = 0;
	while (index < size)
	{
		if (table[row][index] == num || table[index][col] == num)
		{
			return (0);
		}
		index++;
	}
	return (1);
}

int	rush(int **table, int row, int col, char *clues, int size)
{
	int	num;

	if (row == size)
		return (ft_checker(table, clues, size));
	if (col == size)
		return (rush(table, row + 1, 0, clues, size));
	if (table[row][col] != 0)
		return (rush(table, row, col + 1, clues, size));
	num = 1;
	while (num <= size)
	{
		if (is_valid(table, row, col, num, size))
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
