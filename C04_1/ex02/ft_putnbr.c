/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <dmimarke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:20:28 by dmimarke          #+#    #+#             */
/*   Updated: 2024/07/18 20:56:58 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
    char    c;
	
    while (nb > 1)
	{
		if (nb < 10 && nb > 1)
		{
            c = nb + 48;
            write(1, &c, 1);
            //printf("%d", nb);
			//rnb *= 10;
			//rnb += nb % 10;
		}
        else
        {
            c = nb * 10 + 48;
            write(1, &c, 1);
        }
		nb = nb / 10;
        ft_putnbr(nb);
    }
}

int main(void)
{
    ft_putnbr(42);
    return (0);
}
