#include <stdio.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	unsigned int	index;

	index = 0;
	if (str[index] >= 'a' && str[index] <= 'z')
	{
		str[index] -= 32;
		++index;
	}
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z' )
		{
			str[index] += 32;
		}
		if (str[index] >= 'a' && str[index] <= 'z' && str[index - 1] < 47)
		{
			str[index] -= 32;
		}
		++index;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return (0);
}