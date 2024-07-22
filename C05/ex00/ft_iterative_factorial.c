/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 21:34:41 by dmimarke          #+#    #+#             */
/*   Updated: 2024/07/22 22:00:13 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	index;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	fact = 1;
	index = 1;
	while (index <= nb)
	{
		fact *= index;
		++index;
	}
	return (fact);
}
/*
int	main(void)
{
	int	nb;

	nb = 120;
	printf("%d", ft_iterative_factorial(nb));
	return (0);
}
*/
