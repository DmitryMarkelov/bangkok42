/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmingrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 20:32:07 by nmingrat          #+#    #+#             */
/*   Updated: 2024/07/18 20:41:23 by nmingrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	index;
	int	sub_t;

	index = 0;
	sub_t = 1;
	if (nb == 2)
		return (0);
	while (nb > 0)
	{
		nb -= sub_t;
		sub_t += 2;
		index++;
	}
	if (nb != 0)
		return (0);
	return (index);
}
