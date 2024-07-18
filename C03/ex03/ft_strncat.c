/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:41:04 by dmimarke          #+#    #+#             */
/*   Updated: 2024/07/18 17:43:26 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	dest_size;

	dest_size = 0;
	while (dest[dest_size] != '\0')
	{
		++dest_size;
	}
	index = 0;
	while (src[index] != '\0' && nb > 0)
	{
		dest[dest_size] = src[index];
		++index;
		++dest_size;
		--nb;
	}
	dest[dest_size] = '\0';
	return (dest);
}
/*
int main(void)
{
    char    src[] = "12";
    char    dest[] = "abcdef";
    char    src1[] = "12";
    char    dest1[30] = "abcdef";

    //НУЖНА ПРОВЕРКА НА ВОЗМОЖНОСТЬ DEST ВПИХНУТЬ В СЕБЯ SRC
    printf("%s :: %s", ft_strncat(dest, src, 3), strncat(dest1, src1, 3));
    return (0);
}
*/
