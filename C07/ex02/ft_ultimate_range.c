#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	index;

	if (min >= max)				
		return (-1);
	arr = (int *)malloc((max - min) * sizeof(int));
	index	=  0;
	while (min < max)
	{
		arr[index] = min;
		++min;
		++index;
	}
	*range = arr;
	return (index);
}

int	main(void)	
{
	int	*arr;
	int	index;
	int	min;
	int	max;

	min = 5;
	max = 7;
	printf("%d\n", ft_ultimate_range(&arr, min, max));
	index = 0;
	while (index <(max - min))
	{
		printf("%d\n", *(&arr[index]));
		++index;
	}
	return (0);
}