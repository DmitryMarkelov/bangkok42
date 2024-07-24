#include <unistd.h>

void	ft_swap(char **x, char **y)
{
	char *temp;		
	temp = *x;
	*x = *y;
	*y = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;	
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_arg_sort(char *tab[], int size) 
{
	int i;			
	int j;				
	i = 0;						
	while (i < size)		
	{
		j = 0;					
		while (j < size - i - 1)	
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)	
				ft_swap(&tab[j], &tab[j + 1]);		
			j++;					
		}
		i++;						
	}
}

int		main(int argc, char *argv[])	
{
	if(argc > 1)	
	{
		ft_arg_sort(argv + 1, argc - 1);	
		// печать всех аргументов от 1 до после  сделать while argv[1] и до конца пока argv[n] не будет равен нулю 
                ft_arg_arr(argv + 1);			
	}
	return (0);					
}