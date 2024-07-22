/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <dmimarke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:06:13 by dmimarke          #+#    #+#             */
/*   Updated: 2024/07/20 23:16:31 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_print_error(char *msg);
void	ft_print_grid(unsigned int **arr);
void	ft_arrange_boxes(unsigned int **board, unsigned int **weighs, unsigned int size);
void	ft_arrange_two_three(unsigned int **board, unsigned int **weighs, unsigned int size);
unsigned int	**ft_free_arr(unsigned int **arr, unsigned int size);
unsigned int	**ft_get_weighs(char *params, unsigned int *size);
unsigned int	**ft_create_arr(unsigned int size);
unsigned int	ft_can_put_number(unsigned int **board, unsigned int size, unsigned int nbr, unsigned int i, unsigned int j);


void	ft_print_error(char *msg)
{
	while (*msg != 0)
	{
		write(1, msg, 1);
		++msg;
	}
	write(1, "\n", 1);
}

unsigned int	**ft_free_arr(unsigned int **arr, unsigned int size)
{
	unsigned int	index;
	index = 0;
	while (index < size)
	{
		free(arr[index]);
		arr[index] = NULL;
		++index;
	}
	free(arr);
	arr = NULL;
	return (arr);
}

unsigned int	**ft_create_arr(unsigned int size)
{
	unsigned int i;
	unsigned int **temp;

	i = 0;
	temp = (unsigned int **)malloc(size * sizeof(unsigned int*));
	while (i < size)
	{
		temp[i] = (unsigned int *)malloc(size * sizeof(unsigned int));
		++i;
	}
	return (temp);
}

void	ft_print_grid(unsigned int **arr)
{
	unsigned int i;
	unsigned int j;
	char c;
	
	i = 0;
	j = 0;
	write(1, "\n", 1);
	while (i < 4)
	{	
		while (j < 4)
		{
			c = arr[i][j] + 48;
			write(1, &c, 1);
			write(1, " : ", 3);
			++j;
		}
		write(1, "\n", 1);
		j = 0;
		++i;
	}
}

unsigned int	**ft_get_weighs(char *params, unsigned int *size)
{
	unsigned int	**weighs;
	unsigned int	index_p;
	unsigned int	index_r;
	unsigned int index_c;

	*size = 4;
	index_r = 0;
	index_c = 0;
	weighs = (unsigned int **)malloc(*size * sizeof(unsigned int*));
	while (index_r < *size)
	{
		weighs[index_r] = (unsigned int *)malloc(*size * sizeof(unsigned int));
		++index_r;
	}
	if (params[0] >= '1' && params[0] <= '4')
	{
		weighs[0][0] = params[0] - 48;
	}
	else
	{
		ft_print_error("wrong params");
		return (ft_free_arr(weighs ,*size));
	}
	index_p = 1;
	index_r = 0;
	index_c = 1;
	while (params[index_p] != '\0')
	{
		if (params[index_p] == 32)
		{
			++index_p;
		}
		if (params[index_p] >= '1' && params[index_p] <= '4' && params[index_p - 1] == 32)
		{
			weighs[index_r][index_c] = params[index_p] - 48;
			if (index_c == 3)
			{
				++index_r;
				index_c = -1;
			}
			++index_c;
		}
		else
		{
			ft_print_error("wrong params");
			return (ft_free_arr(weighs ,*size));
		}
		++index_p;
	}
	if (index_r != 4 && index_c != 0)
	{
		printf("%d :: %d\n", index_r, index_c);
		ft_print_error("not enough parameters for array");	
		return (ft_free_arr(weighs ,*size));
	} 
	return (weighs);
}

void	ft_arrange_boxes(unsigned int **board, unsigned int **weighs, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int finish;

	i = 0;
	j = 0;
	finish = 0;
	ft_print_grid(weighs);
	write(1, "\n", 1);
	while (finish == 0)
	{
		i = 0;
		while (i < size)
		{
			while (j < size)
			{
				if (weighs[0][i] == size)
				{
					board[j][i] = j + 1; 
				}
				if (weighs[1][i] == size)
				{
					board[j][i] = size - j;
				}
				if (weighs[2][i] == size)
				{
					board[i][j] = j + 1;
				}
				if (weighs[3][i] == size)
				{
					board[i][j] = size - j;
				}
				//--
				if (weighs[0][j] == 1)
				{
					board[0][j] = size; 
				}
				if (weighs[1][j] == 1)
				{
					board[3][j] = size;
				}
				if (weighs[2][j] == 1)
				{
					board[0][j] = size;
				}
				if (weighs[3][j] == 1)
				{
					board[3][j] = size;
				}
				++j;
			}
			++i;
		}
			ft_arrange_two_three(board, weighs, size);
			//ft_print_grid(board);

			finish = 1;
	}
}

unsigned int	ft_can_put_number(unsigned int **board, unsigned int size, unsigned int nbr, unsigned int i, unsigned int j)
{
	unsigned int cell;

	cell = 0;
	while (cell < size)
	{
		if (board[i][cell] == nbr || board[cell][j] == nbr)
		{
			return (0);
		}
		++cell;
	}
	return (1);
}

void	ft_arrange_two_three(unsigned int **board, unsigned int **weighs, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	i = 0;
	j = 0;
	size -= 1;	
	while (j <= size) // перебор по числам 0 ... 3
	{
		while (i <= size)  // перебор по условиям in conditions 0 .. 3
		{
				if (weighs[0][i] == size - j)					// верхние столбцы
				{
					if (ft_can_put_number(board, size, size - j, size - 1 - j, i) == 1)
					{
						board[size - 1 - j][i] = size + 1 - j;
					}
				}
				if (weighs[1][i] == size - j)					// нижние столбцы
				{
					board[j + 1][i] = size + 1 - j;
				}
				if (weighs[2][i] == size - j)					// левые строки
				{
					board[i][size - 1 - j] = size + 1 - j;
				}
				if (weighs[3][i] == size - j)					// правые строки
				{
					board[size - 2][j + 1] = size + 1 - j;
				}
			++i;
		}
		i = 0;
		++j;
		ft_print_grid(board);
		if (j == 2) break;
	}
}


int	main(int argc, char **argv)
{	
	unsigned int	*size;
	unsigned int 	**board;
	unsigned int	**weighs;
	unsigned int	size_init;

	size_init = 0;
	size = &size_init;
	if (argc == 2)
	{
		// 	need to check the conditions
		weighs = ft_get_weighs(argv[1], size);
		if (weighs != NULL)
		{	
			board = ft_create_arr(*size);
			ft_arrange_boxes(board, weighs, *size);
			//ft_print_grid(board);		
		}
	}
	else 
	{
		ft_print_error("not enough params in main");
	}
	return (0);
}
