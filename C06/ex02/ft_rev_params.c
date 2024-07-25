/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 19:08:46 by dmimarke          #+#    #+#             */
/*   Updated: 2024/07/24 19:13:40 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	param_index;
	int	index;

	if (argc > 1)
	{
		param_index = argc - 1;
		while (param_index > 0)
		{
			index = 0;
			while (argv[param_index][index] != '\0')
			{
				write(1, &argv[param_index][index], 1);
				++index;
			}
			write(1, "\n", 1);
			--param_index;
		}
	}
	return (0);
}
