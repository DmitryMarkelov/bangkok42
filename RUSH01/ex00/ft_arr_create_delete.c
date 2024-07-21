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

char	*ft_create_arr_x1(int size);
char	*ft_delete_arr_x1(char *arr);
int    **ft_create_arr_x2(int size);
int    **ft_delete_arr_x2(int **arr, int size);

char	*ft_create_arr_x1(int size)
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

int    **ft_create_arr_x2(int size)
{
        int    i;
        int    **temp;

        i = 0;
        temp = (int **)malloc(size * sizeof(int *));
        while (i < size)
        {
                temp[i] = (int *)malloc(size * sizeof(int));
                ++i;
        }
        return (temp);
}

int    **ft_delete_arr_x2(int **arr, int size)
{
        int    index;

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

