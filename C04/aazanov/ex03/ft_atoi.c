/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazanov <aazanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:11:12 by aazanov           #+#    #+#             */
/*   Updated: 2024/07/19 18:18:49 by aazanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	modul(char *str)
{
	int	len_min;
	int	len_plus;
	int	i;

	i = 0;
	len_min = 0;
	len_plus = 0;
	while (!(str[i] >= 'a' && str[i] <= 'z') && \
	!(str[i] >= 'A' && str[i] <= 'Z'))
	{
		if (str[i] == '-')
		{
			len_min++;
		}
		else if (str[i] == '+')
		{
			len_plus++;
		}
		i++;
	}
	if ((len_plus > len_min) || (len_min % 2 == 0))
	{
		return (1);
	}
	return (-1);
}

int	length_num(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			count++;
		}
		else if (count > 0)
		{
			return (count);
		}
		i++;
	}
	return (count);
}

int	ten_pow(int x)
{
	int	ten;

	ten = 1;
	while (x > 0)
	{
		ten *= 10;
		x--;
	}
	return (ten);
}

int	check_err(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] >= '0' && str[i] <= '9'))
	{
		i++;
	}
	if (str[i - 1] == '-' || str[i - 1] == '+' || (i == 0) || str[i - 1] == ' ')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_atoi(char *str)
{
	int	mod;
	int	len_number;
	int	nums;
	int	i;

	mod = modul(str);
	nums = 0;
	i = 0;
	len_number = length_num(str);
	if (check_err(str) == 0)
	{
		return (0);
	}
	while (len_number > 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			len_number--;
			nums += (str[i] - '0') * ten_pow(len_number);
		}
		i++;
	}
	return (mod * nums);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_atoi("+-123"));
// }