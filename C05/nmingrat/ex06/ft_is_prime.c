/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmingrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:37:52 by nmingrat          #+#    #+#             */
/*   Updated: 2024/07/19 15:29:49 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime_recursion(int nb, int div);

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	nb = ft_is_prime_recursion(nb, 2);
	return (nb);
}

int	ft_is_prime_recursion(int nb, int div)
{
	if (div == nb)
		return (1);
	else if (nb % div == 0)
		return (0);
	return (ft_is_prime_recursion(nb, div + 1));
}

int	main(void)
{
	printf("%d", ft_is_prime(14));
	return (0);
}
