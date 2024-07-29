#include <unistd.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);
void	ft_print_str(char *str);
void	ft_print_numb(int numb);

void	ft_show_tab(struct s_stock_str *par)
{
	int	index;

	index = 0;
	while (par[index].str != 0)
	{

		++index;
	}
}

void	ft_print_str(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		++str;
	} 
	write(1, "\n", 1);
}

void	ft_print_numb(int numb)
{
	int	print;
	int	index;
	char	c;

	if (numb == -2147483648)
		write(1, "-2147483648", 11);
	else if (numb < 0)
	{
		numb *= -1;
		write(1, "-", 1);
	}
	print = numb;
	index = 0;
	while (print > 0)
	{
		index *= 10;
		print /= 10;
	}
	print = numb;
	while (index > 0)
	{
		c = print / index + '0';
		write(1, &c, 1);
		print %= index; 
		index /= 10;
	}
}