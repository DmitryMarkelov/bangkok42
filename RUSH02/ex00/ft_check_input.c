#include "ft_all_functions.h"

int	ft_is_dictionary(char *number, char *dictionary);
char   *ft_is_correct_input(char *number);

int	ft_is_dictionary(char *number, char *dictionary)
{
	char	*dictionary_file;
	if (ft_str_compare(dictionary, "default"))
		dictionary_file = ft_str_copy("numbers.dict");
	else
		dictionary_file = ft_str_copy(dictionary);
	//проверка словаря
	ft_print_string(dictionary_file);
	ft_print_string(number);	
	return (1);
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
