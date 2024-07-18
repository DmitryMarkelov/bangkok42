/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <dmimarke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 23:54:54 by dmimarke          #+#    #+#             */
/*   Updated: 2024/07/18 17:44:56 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	index;
	unsigned int	dest_lengh;

	index = 0;
	dest_lengh = 0;
	while (dest[dest_lengh] != '\0')
	{
		++dest_lengh;
	}
	while (src[index] != '\0')
	{
		dest[dest_lengh + index] = src[index];
		++index;
	}
	dest[dest_lengh + index] = '\0';
	return (dest);
}
/*
int main(void)
{
    char    src[20] = "11\0113";
    char    dest[20] = "2222";
    char    src1[20] = "11\0113";
    char    dest1[20] = "2222";

    printf("%s :: %s", ft_strcat(dest, src), strcat(dest1, src1));
    return (0);
}
*/
