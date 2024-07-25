#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)	
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)			/* Функция печати строки */
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int		ft_strlen(char *str)
{
	int l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}


char	*ft_strdup(char *src)	
{
	int		l;		
	char	*dest;			
	l = ft_strlen(src);				
	if ((dest = malloc(sizeof(*src) * (l + 1))) == ((void *)0))
		return (((void *)0));		
	while (l >= 0)					
		dest[l] = src[l];			
		l--;						
	return (dest);					
}


int     main(int argc, char **argv)	
{
	char *dup;
	
	if (argc > 1)				
	{
		dup = ft_strdup(argv[1]);
		ft_putstr(dup);
		ft_putchar('\n');
		free(dup);
	}
	return (0);				
}