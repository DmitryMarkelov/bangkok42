/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papiyapa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:25:43 by papiyapa          #+#    #+#             */
/*   Updated: 2024/07/21 21:51:46 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

void	display_table(unsigned int **table)
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putnbr(table[row][col]);
			if (col != 3)
			{
				ft_putstr(" ");
			}
			col++;
		}
		ft_putstr("\n");
		row++;
	}
}
