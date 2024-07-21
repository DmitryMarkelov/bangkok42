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

int	is_colup(unsigned int **table, int col, char col_up);

int	is_coldown(unsigned int **table, int col, char col_down);

int	is_rowleft(unsigned int **table, int row, char row_left);

int	is_rowright(unsigned int **table, int row, char row_right);

int	col_check(unsigned int **table, int col, char col_up, char col_down);

int	row_check(unsigned int **table, int row, char row_left, char row_right);

int	ft_checker(unsigned int **table, char *clue, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (!col_check(table, i, clue[i], clue[i + size]))
			return (0);
		i++;
	}
	i = 0;
	while (i < size)
	{
		if (!row_check(table, i, clue[i + size * 2], clue[i + size * 3]))
			return (0);
		i++;
	}
	return (1);
}
