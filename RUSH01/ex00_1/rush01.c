/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papiyapa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:34:34 by papiyapa          #+#    #+#             */
/*   Updated: 2024/07/21 22:26:27 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	display_table(unsigned int **table);

void	ft_zero(unsigned int **table);

int		ft_strlen(char *str);

char	*ft_split(char *str, unsigned int *size);

int		rush(unsigned int **table, unsigned int row, unsigned int col, char *clues, unsigned int size);

unsigned int		**ft_create_arr_x2(unsigned int size);

unsigned int		**ft_delete_arr_x2(unsigned int **arr, unsigned int size);

int	main(int argc, char **argv)
{
	char	*clues;
	unsigned int	**table;
	unsigned int	size;

	size = 0;
	if (argc == 2)
	{
		clues = ft_split(argv[1], &size); 
		if (clues != NULL)
		{
			table = ft_create_arr_x2(size); 
			if (rush(table, 0, 0, clues, size))
			{
				display_table(table);
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
