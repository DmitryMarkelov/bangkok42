/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <dmimarke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:34:34 by papiyapa          #+#    #+#             */
/*   Updated: 2024/07/21 23:11:19 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	display_table(int **table, int size);

int		ft_strlen(char *str);

char	*ft_split(char *str, int *size);

int		rush(int **table, int row, int col, char *clues, int size);

int		**ft_create_arr_x2(int size);

int		**ft_delete_arr_x2(int **arr, int size);

int	main(int argc, char **argv)
{
	char	*clues;
	int	**table;
	int	size;

	size = 0;
	if (argc == 2)
	{
		clues = ft_split(argv[1], &size); 
		if (clues != NULL)
		{
			table = ft_create_arr_x2(size); 
			if (rush(table, 0, 0, clues, size))
			{
				display_table(table, size);
				table = ft_delete_arr_x2(table, size);
			}
			else
			{
				ft_putstr("Error");
				table = ft_delete_arr_x2(table, size);
			}
		}
		else
			ft_putstr("Error");
	}
	else
	{
		ft_putstr("Error");
	}
	return (0);
}
