/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papiyapa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:53:15 by papiyapa          #+#    #+#             */
/*   Updated: 2024/07/21 22:27:32 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_check(int **table, int col, char col_up, char col_down, int size);

int	row_check(int **table, int row, char row_left, char row_right, int size);

int	ft_checker(int **table, char *clue, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (!col_check(table, i, clue[i], clue[i + size], size))
			return (0);
		i++;
	}
	i = 0;
	while (i < size)
	{
		if (!row_check(table, i, clue[i + size * 2], clue[i + size * 3], size))
			return (0);
		i++;
	}
	return (1);
}
