/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_create_delete.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmimarke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:20:08 by dmimarke          #+#    #+#             */
/*   Updated: 2024/07/21 22:04:25 by dmimarke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_create_arr_x1(unsigned int size);
char	*ft_delete_arr_x1(char *arr);
unsigned int    **ft_create_arr_x2(unsigned int size);
unsigned int    **ft_delete_arr_x2(unsigned int **arr, unsigned int size);

char	*ft_create_arr_x1(unsigned int size)
{
	char	*temp;

	temp = (char *)malloc(size * sizeof(char));
	return (temp);
}

char	*ft_delete_arr_x1(char *arr)
{
	free(arr);
	arr = NULL;
	return (arr);
}

unsigned int    **ft_create_arr_x2(unsigned int size)
{
        unsigned int    i;
        unsigned int    **temp;

        i = 0;
        temp = (unsigned int **)malloc(size * sizeof(unsigned int *));
        while (i < size)
        {
                temp[i] = (unsigned int *)malloc(size * sizeof(unsigned int));
                ++i;
        }
        return (temp);
}

unsigned int    **ft_delete_arr_x2(unsigned int **arr, unsigned int size)
{
        unsigned int    index;

        index = 0;
        while (index < size)
        {
                free(arr[index]);
                arr[index] = NULL;
                ++index;
        }
        free(arr);
        arr = NULL;
        return (arr);
}

