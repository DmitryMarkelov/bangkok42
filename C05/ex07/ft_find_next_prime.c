/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 22:37:47 by dmimarke          #+#    #+#             */
/*   Updated: 2024/07/22 22:44:50 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb);

int	ft_is_prime(int nb)
{
	int	ittr;

	if (nb < 2)
		return (0);
	ittr = 2;
	while (ittr <= nb / ittr)
	{
		if (nb % ittr == 0)
			return (0);
		else
			++ittr;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	++nb;
	while (ft_is_prime(nb) == 0)
		++nb;
	return (nb);
}
/*
int 	main(void)
{
	printf("%d", ft_find_next_prime(13));
	return (0);
}
*/
