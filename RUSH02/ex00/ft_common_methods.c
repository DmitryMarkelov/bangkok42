#include "ft_all_functions.h"

void	ft_print_string(char *str);
int	ft_get_size(char *str);
char	*ft_str_copy(char *src);
int	ft_str_compare(char *str1, char *str2);

void    ft_print_string(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		write(1, &str[index++], 1);
}

int	ft_get_size(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
		++index;
	return (index);
}

char	*ft_str_copy(char *src)
{
	char *dest;
	int	index;

	if (src == NULL)
		return (NULL);
	dest = (char *)malloc((ft_get_size(src) + 1) * sizeof(char));
	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		++index;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_str_compare(char *str1, char *str2)
{
	int	index;

	index = 0;
	if (ft_get_size(str1) != ft_get_size(str2))
		return (0);
	while (str1[index] !='\0' && str2[index] != '\0' )
	{
		if (str1[index] == str2[index])
			++index;
		else
			return (0);
	}
	return (1);
}