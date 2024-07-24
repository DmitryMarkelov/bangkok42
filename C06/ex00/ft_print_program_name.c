/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:37:17 by dmimarke          #+#    #+#             */
/*   Updated: 2024/07/24 20:28:46 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;

	index = 0;
	if (argc > 0)
	{
		while (argv[0][index] != '\0')
		{
			write(1, &argv[0][index], 1);
			++index;
		}
	}
	write(1, "\n", 1);
	return (0);
}
