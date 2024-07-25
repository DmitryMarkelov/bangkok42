#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)   
{
	while(*str)
		ft_putchar(*str++);
}


int		ft_is_space(char to_find, char *str)
{
	while (*str)
	{
		if (to_find == *str++)
			return (1);
	}
	return (0);
}

int		ft_wordcount(char *str, char *charset)
{
	int		count;
	count = 0;		
	while (*str)
	{
		while (*str && ft_is_space(*str, charset))
			str++;
		if (*str && !(ft_is_space(*str, charset)))
		{								
			count++;					
			while (*str && !(ft_is_space(*str, charset)))
				str++;					
		}
	}
	return (count);				
}


char	*create_word(char *str, int i, int j)	
{
	char	*word;		
	int		o;						

	if ((word = (char *)malloc(sizeof(char) * (j - i))) == ((void *)0))
		return ((void *)0);			
	o = 0;							
	while (i < j)				
	{
		word[o] = str[i];		
		i++;						
		o++;						
	}
	word[o] = '\0';				
	return (word);				
}


char		**ft_split(char *str, char *charset)
{
	char	**arr;			
	int		i;		
	int		j;				
	int		index;				
	int		words;		

	if ((words = ft_wordcount(str, charset)))
	{

	
		if (!str || (((arr = (char **)malloc(sizeof(char *) * (words + 1)))) == ((void *)0)))
			return ((void *)0);			
		i = 0;						
		index = 0;			
		while (index < words)			
		{
			while (ft_is_space(str[i], charset) && (str[i]))	
				i++;				
			j = i;						
			while (!(ft_is_space(str[j], charset)) && (str[j]))
				j++;				
			arr[index] = create_word(str, i, j);
			i = j + 1;					
			index++;			
		}
	}
	else							
		arr = (char **)malloc(sizeof(char *));	
	arr[i] = ((void *)0);			
	return (arr);												
}


int     main(void)	
{
	char	**arr_str;				

	if ((arr_str = ft_split("_hello$my$##cool=frie nd!+", "! _=$+#@")) == ((void *)0)) 
		return (0);
	while (*arr_str != ((void *)0))		
	{
		ft_putstr(*arr_str);			
		ft_putchar('\n');			
		arr_str++;					
	}
	return (0);							
}