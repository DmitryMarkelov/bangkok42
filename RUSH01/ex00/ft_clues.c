/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clues.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papiyapa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:29:49 by papiyapa          #+#    #+#             */
/*   Updated: 2024/07/21 15:29:56 by papiyapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_clues(char *str, char clues[16])
{
	int	index;
	int	index_1;

	index = 0;
	index_1 = 0;
	while (index < 32)
	{
		if (index % 2 == 0)
		{
			clues[index_1] = str[index];
			index_1++;
		}
		index++;
	}
}
