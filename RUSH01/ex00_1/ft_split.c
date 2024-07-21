/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papiyapa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:20:05 by papiyapa          #+#    #+#             */
/*   Updated: 2024/07/21 20:36:54 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_create_arr_x1(unsigned int size);
char	*ft_delete_arr_x1(char *arr);

char	*ft_split(char *str, unsigned int *size)
{
	int			index;
	int			index_clues;
	int			count;
	char			*clues;

	index = 0;
	count = 0;
	while (str[index] != '\0')
	{
		if (index % 2 == 0)
		{
			++count;
		}
		++index;
	}
	if (count % 4 != 0)
	{
		return (NULL);
	}
	clues = ft_create_arr_x1(count);
	index = 0;
	index_clues = 0;
	while (str[index] != '\0' && index_clues < count)
	{
		if ((index % 2 == 0) && str[index] >= '1' && str[index] <= count / 4 + 48)
		{
			clues[index_clues] = str[index];
			++index_clues;
		}
		else if ((index % 2 == 1) && str[index] == ' ')
		{
		}
		else
		{
			return (ft_delete_arr_x1(clues));
		}
		index++;
	}
	*size = count / 4;
	return (clues);
}
