/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <dmimarke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:23:42 by dmimarke          #+#    #+#             */
/*   Updated: 2024/07/17 22:36:16 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && index < n)
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		++index;
	}
	if (s1[index] != '\0' && s2[index] == '\0')
	{
		return (s1[index]);
	}
	if (s1[index] == '\0' && s2[index] != '\0')
	{
		return (0 - s2[index]);
	}
	return (0);
}
/*
int main(void)
{
	char	s1[] = "Hell\74o";
	char	s2[] = "Hell\74o";
	printf("%d :: %d", ft_strncmp(s1, s2, 5), strncmp(s1, s2, 5));
	return (0);
}
*/
