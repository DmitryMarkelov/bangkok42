/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 22:27:14 by dmimarke          #+#    #+#             */
/*   Updated: 2024/07/22 22:30:30 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	find_nb;

	find_nb = 0;
	while (find_nb * find_nb < nb)
		find_nb++;
	if (find_nb * find_nb == nb)
		return (find_nb);
	else
		return (0);
}
/*
int 	main(void)
{
	printf("%d", ft_sqrt(25));
	return (0);
}
*/
