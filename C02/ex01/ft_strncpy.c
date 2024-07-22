#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0' && index < n )
	{
		dest[index] = src[index];
		++index;
	}
	while (index < n)
	{
		dest[index] = '\0';
		++index;
	}
	return (dest);
}

int	main(void)
{
	char	dest[] = "1234567890";
	char	src[] = "abcdefg";

	printf("%s", ft_strncpy(dest, src, 5));
	return (0);
}