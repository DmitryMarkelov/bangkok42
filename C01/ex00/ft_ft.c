#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	number;
	int	*p_number;
	
	number = 11;
	p_number = &number;
	ft_ft(p_number);
	printf("%d", *p_number);
	return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
