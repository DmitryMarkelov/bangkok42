#include "ft_all_functions.h"

void	ft_is_dictionary(char *number, char *dictionary);
char   *ft_is_correct_input(char *number);
int	ft_check_dict(FILE *dict_file); 

void	ft_is_dictionary(char *number, char *dictionary)
{
	FILE *dict_file;
	if (dictionary == NULL)
		dict_file = fopen("numbers.dict", "r");
	else
		dict_file = fopen(dictionary, "r");
	if (dict_file != NULL && ft_check_dict(dict_file))
		ft_do_conversion(dict_file, number);
	else
		ft_print_string("Error with dictionary");
	fclose(dict_file);
}

char	*ft_is_correct_input(char *number)
{	
	int	index;
	int	count;
	char	*res;

	index = 0;
	count = 0;
	res = (char *)malloc(ft_get_size(number) * sizeof(char));
	while (number[index] != '\0')
	{
		if (number[index] == '-' && index == 0)
		{
			res[count++] = '-';
			++index;
		}
		if (number[index] >='0' && number[index] <= '9' )
			res[count++] = number[index];
		else
		{
			res = NULL;
			break;
		}
		++index;
	}
	return (res);
}

int ft_check_dict(FILE *dict_file)
{
	ssize_t	read;
	size_t	len;
	char *str;
	int	index;
	int	flag;

	flag = 1;
	len = 0;
	while ((read = getline(&str, &len, dict_file)) != -1)
	{
		index = 0;
		while (str[index] != '\0')
		{
			while (str[index] >= '0' && str[index] <= '9')
				++index;
			while (str[index] == ' ')
				++index;
			if (str[index] != ':')
				break;
			else
				++index;
			while (str[index] == ' ')
				++index;
			while (str[index] > 32 && str[index] < 127)
				++index;
		}
		if (str != NULL && index !=  ft_get_size(str) - 1)
			flag = 0;
	}
	free(str);
	return (flag);
}