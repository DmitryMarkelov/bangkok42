/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:11:30 by dmimarke          #+#    #+#             */
/*   Updated: 2024/07/16 20:15:24 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while ((s1[index] != '\0' || s2[index] != '\0') && s1[index] == s2[index])
	{
		++index;
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
/*
int	main(void)
{
	printf("%d :: %d", ft_strcmp("Helloo", "Hello"), strcmp("Helloo", "Hello"));
	return (0);
}
*/