/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscol.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papiyapa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:01:43 by papiyapa          #+#    #+#             */
/*   Updated: 2024/07/21 22:32:13 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_colup(unsigned int **table, int col, char col_up, unsigned int size)
{
	unsigned int	cur_height;
	unsigned int	max_height;
	unsigned int	row;
	int	count;

	cur_height = 0;
	row = 0;
	count = 0;
	while (row < size)
	{
		max_height = table[row][col];
		if (max_height > cur_height)
		{
			cur_height = max_height;
			count++;
		}
		row++;
	}
	return (count == col_up - '0');
}

int	is_coldown(unsigned int **table, int col, char col_down, unsigned int size)
{
	unsigned int	cur_height;	
	unsigned int	max_height;
	unsigned int	row;
	int	count;

	cur_height = 0;
	row = size - 1;
	count = 0;
	while (row >= 0)
	{
		max_height = table[row][col];
		if (max_height > cur_height)
		{
			cur_height = max_height;
			count++;
		}
		row--;
	}
	return (count == (col_down - '0'));
}
