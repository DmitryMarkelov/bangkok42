#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);;

char	*ft_strdup(char *src)
{
	int	size;		
	char	*dest;		

	size = 0;
	while (src[size] != '\0')
		++size;
	if (size)
	{	
		size = 0;
		dest = (char *)malloc(size * sizeof(char));
		while (src[size] != '\0')
		{
			dest[size] = src[size];
			++size;
		}
	}
	else
		return (NULL);
	return (dest);				
}


int     main(void)	
{
	printf("%s", ft_strdup("HERE WE ARE"));
	return (0);				
}