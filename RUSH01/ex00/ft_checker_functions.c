/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_functions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papiyapa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:01:43 by papiyapa          #+#    #+#             */
/*   Updated: 2024/07/21 22:31:35 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_colup(int **table, int col, char col_up, int size);

int	is_coldown(int **table, int col, char col_down, int size);

int	is_rowleft(int **table, int row, char row_left, int size);

int	is_rowright(int **table, int row, char row_right, int size);

int	col_check(int **table, int col, char col_up, char col_down, int size)
{
	return (is_colup(table, col, col_up, size) && is_coldown(table, col, col_down, size));
}

int	row_check(int **table, int row, char row_left, char row_right, int size)
{
	return (is_rowleft(table, row, row_left, size) && \
		is_rowright(table, row, row_right, size));
}
