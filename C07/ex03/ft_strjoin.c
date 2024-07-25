#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);
int	ft_str_size(char *str);

int	ft_str_size(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		++index;
	return (index);
}

char	*ft_strjoin(int size, char **strs, char *sep) 
{
	int		str_count;
	int		index;	
	int		symb_count;
	char	*str;
	int	joint_str_size;	

	if (size == 0)
		return (NULL);
	str_count = 1;						
	joint_str_size = 0;
	while (str_count < size)
	{
		joint_str_size += ft_str_size(strs[str_count]);
		++str_count;
	}
	joint_str_size += ((size - 1) * ft_str_size(sep));

	str = (char *)malloc((joint_str_size + 1) * sizeof(char));
	str_count = 0;
	symb_count = 0;
	while (str_count < size)	
	{
		index = 0;
		while (strs[str_count][index] != '\0')
		{
			str[symb_count] = strs[str_count][index];
			++index;
			++symb_count;
		}
		if (str_count != size - 1)
		{
			index = 0;
			while (sep[index] != '\0')	
			{
				str[symb_count] = sep[index];
				++index;
				++symb_count;
			}
		}
		++str_count;
	}
	str[symb_count] = '\0';
	return (str);
}

int     main(int argc, char **argv)
{
	char	*str;
	char	**strs;
	char	sep[] = " , ";
	strs = argv;
	str = ft_strjoin(argc - 1, strs + 1, sep);
	printf("%s\n%d", str , argc);
	free(str);
	return (0);	
}

