#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 5;
	ft_swap(&a, &b);
	printf("%d %d", a, b);
	return (0);
}

void	ft_swap(int *a, int *b)
{
	int	n;
	
	n = *a;
	*a = *b;
	*b = n;
}
