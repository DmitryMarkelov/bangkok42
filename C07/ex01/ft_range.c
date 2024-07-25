#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*arr;
	int	index;

	if (min >= max)				
		return (NULL);
	arr = (int *)malloc((max - min) * sizeof(int));
	index	=  0;
	while (min < max)
	{
		arr[index] = min;
		++min;
		++index;
	}
	return (arr);
}

int	main(void)	
{
	int	*arr;
	int	index;
	int	min;
	int	max;

	min = 5;
	max = 0;
	arr = ft_range(min, max);
	index = 0;
	while (index <(max - min))
	{
		printf("%d\n", arr[index]);
		++index;
	}
	return (0);
}