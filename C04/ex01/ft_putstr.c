/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:16:10 by dmimarke          #+#    #+#             */
/*   Updated: 2024/07/18 18:16:14 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str);

void ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1);
        ++str;
    }
}

int  main(void)
{
    ft_putstr("Hell\\:o wor\nld");
    return (0);
}