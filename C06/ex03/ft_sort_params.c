/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 19:13:57 by dmimarke          #+#    #+#             */
/*   Updated: 2024/07/24 20:27:37 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_arg_sort(char **argv, int argc);
int		ft_argv_comp(char *argv1, char *argv2);
void	ft_argv_swap(char **argv1, char **argv2);

void	ft_argv_swap(char **argv1, char **argv2)
{
	char	*temp;		

	temp = *argv1;
	*argv1 = *argv2;
	*argv2 = temp;
}

int	ft_argv_comp(char *argv1, char *argv2)
{
	int	index;

	index = 0;
	while (argv1[index] != '\0' && (argv1[index] == argv2[index]))
	{
		++index;
	}
	return (argv1[index] - argv2[index]);
}

void	ft_arg_sort(char **argv, int argc)
{
	int	index1;
	int	index2;

	index1 = 0;
	while (index1 < argc)
	{
		index2 = 0;
		while (index2 < argc -1 - index1 - 1)
		{
			if (ft_argv_comp(argv[index2], argv[index2 + 1]) > 0)
				ft_argv_swap(&argv[index2], &argv[index2 + 1]);
			++index2;
		}
		++index1;
	}
}

int	main(int argc, char *argv[])
{
	int	argv_index;
	int	index;

	if (argc > 1)
	{
		++argv;
		ft_arg_sort(argv, argc);
		argv_index = 0;
		while (argv_index < argc - 1)
		{
			index = 0;
			while (argv[argv_index][index] != '\0')
			{
				write(1, &argv[argv_index][index], 1);
				++index;
			}
			++argv_index;
			write(1, "\n", 1);
		}
	}
	return (0);
}
