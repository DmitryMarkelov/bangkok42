/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmingrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 20:18:13 by nmingrat          #+#    #+#             */
/*   Updated: 2024/07/18 20:46:44 by nmingrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime_recursion(int nb, int div);

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime_recursion(nb, 2) != 1)
	{
		nb++;
	}
	return (nb);
}

int	ft_is_prime_recursion(int nb, int div)
{
	if (nb <= 1)
		return (0);
	else if (div == nb)
		return (1);
	else if (nb % div == 0)
		return (0);
	return (ft_is_prime_recursion(nb, div + 1));
}
