/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <dmimarke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:30:05 by papiyapa          #+#    #+#             */
/*   Updated: 2024/07/21 22:49:18 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_zero(int **table, int size)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < size)
	{
		while (col < size)
		{
			table[row][col] = 0;
			col++;
		}
		col = 0;
		row++;
	}
}
