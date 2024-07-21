/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <dmimarke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:25:43 by papiyapa          #+#    #+#             */
/*   Updated: 2024/07/21 23:10:50 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

void	display_table(int **table, int size)
{
	int	row;
	int	col;

	row = 0;
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			ft_putnbr(table[row][col]);
			if (col != size - 1)
			{
				ft_putstr(" ");
			}
			col++;
		}
		ft_putstr("\n");
		row++;
	}
}
