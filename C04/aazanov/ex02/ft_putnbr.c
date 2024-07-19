/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazanov <aazanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:35:43 by aazanov           #+#    #+#             */
/*   Updated: 2024/07/19 19:05:11 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	i;

	i = '0';
	if (nb < -9 || nb > 9)
	{
		ft_putnbr(nb / 10);
		if ((nb % 10) > 0)
			ft_putnbr((nb % 10));
		else
			ft_putnbr((nb % 10) * -1);
	}
	else
	{
		if (nb >= 0)
			i += nb;
		else
		{
			write(1, "-", 1);
			nb *= -1;
			i += nb;
		}
		write(1, &i, 1);
	}
}

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
