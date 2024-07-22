/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 22:31:01 by dmimarke          #+#    #+#             */
/*   Updated: 2024/07/22 22:36:59 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	ittr;

	if (nb < 2)
		return (0);
	ittr = 2;
	while (ittr <= (nb / ittr))
	{
		if ((nb % ittr) == 0)
			return (0);
		++ittr;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_is_prime(9));
	return (0);
}
*/
