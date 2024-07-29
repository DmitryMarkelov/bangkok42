#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_param_to_tab(int ac, char **av);
int     ft_str_size(char *str);
char    *ft_str_copy(char *str);

struct s_stock_str	*ft_param_to_tab(int ac, char **av)
{
	int				index;
	t_stock_str		*av_struct;

        av_struct = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
        if (av_struct == NULL)
        {
                free(av_struct);
                return (NULL);
        }
	index = 0;
	while (index < ac)
	{
		av_struct[index].size = ft_str_size(av[index]);
		av_struct[index].str = av[index];
		av_struct[index].copy = ft_str_copy(av[index]);
		++index;
	}
	av_struct[index].str = 0;
	return (av_struct);
}

int     ft_str_size(char *str)
{
        int     index;

        index = 0;
        while (str[index] != '\0')
                ++index;
        return(index);
}

char    *ft_str_copy(char *str)
{
        char    *res;
        int	index;

        res = (char *)malloc((ft_str_size(str) + 1) * sizeof(char));
        if (res == NULL)
        {
                free(res);
                return (NULL);
        }
	index = 0;
        while (str[index] != '\0')
	{
		res[index] = str[index];
		++index;
	}
	res[index] = '\0';
	return(res);
}