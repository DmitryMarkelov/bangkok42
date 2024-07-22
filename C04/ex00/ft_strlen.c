/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:10:12 by dmimarke          #+#    #+#             */
/*   Updated: 2024/07/18 18:10:14 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int ft_strlen(char *str);

int ft_strlen(char *str)
{
    unsigned int    size;

    size = 0;
    while (*str != '\0')
    {
        ++size;
        ++str;
    }
    return (size);
}
/*
int main(void)
{
    printf("%d", ft_strlen("Hello world1"));
    return (0);
}
*/