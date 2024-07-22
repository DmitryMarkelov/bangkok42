/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <dmimarke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:20:28 by dmimarke          #+#    #+#             */
/*   Updated: 2024/07/18 19:51:34 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb);

void ft_putnbr(int nb)
{
    char    c;

    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
    }
    else
    {
        if (nb < 0)
        {
            nb *= -1;
        	write(1, "-", 1);
	    }
        if (nb > 9)
        {
            ft_putnbr(nb / 10);
            ft_putnbr(nb %= 10);
        }
        else
        {
            c = nb + 48;
            write(1, &c, 1);
        }
    }
}

int main(void)
{
    ft_putnbr(-2147483648);
    return (0);
}