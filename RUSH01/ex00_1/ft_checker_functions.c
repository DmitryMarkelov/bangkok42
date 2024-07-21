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

int	is_colup(unsigned int **table, unsigned int col, char col_up);

int	is_coldown(unsigned int **table, unsigned int col, char col_down);

int	is_rowleft(unsigned int **table, unsigned int row, char row_left);

int	is_rowright(unsigned int **table, unsigned int row, char row_right);

int	col_check(unsigned int **table, unsigned int col, char col_up, char col_down)
{
	return (is_colup(table, col, col_up) && is_coldown(table, col, col_down));
}

int	row_check(unsigned int **table, unsigned int row, char row_left, char row_right)
{
	return (is_rowleft(table, row, row_left) && \
		is_rowright(table, row, row_right));
}
