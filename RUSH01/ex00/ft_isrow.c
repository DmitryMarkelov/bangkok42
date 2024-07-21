/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isrow.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papiyapa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:01:43 by papiyapa          #+#    #+#             */
/*   Updated: 2024/07/21 22:26:04 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_rowleft(int **table, int row, char row_left, int size)
{
	int	cur_height;
	int	max_height;
	int	col;
	int	count;

	cur_height = 0;
	col = 0;
	count = 0;
	while (col < size)
	{
		max_height = table[row][col];
		if (max_height > cur_height)
		{
			cur_height = max_height;
			count++;
		}
		col++;
	}
	return (count == (row_left - '0'));
}

int	is_rowright(int **table, int row, char row_right, int size)
{
	int	cur_height;
	int	max_height;
	int	col;
	int	count;

	cur_height = 0;
	col = size - 1;
	count = 0;
	while (col >= 0)
	{
		max_height = table[row][col];
		if (max_height > cur_height)
		{
			cur_height = max_height;
			count++;
		}
		col--;
	}
	return (count == (row_right - '0'));
}
