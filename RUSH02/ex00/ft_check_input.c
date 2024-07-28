#include "ft_all_functions.h"

void	ft_is_dictionary(char *number, char *dictionary);
char   *ft_is_correct_input(char *number);
int	ft_check_dict(FILE *dict_file); //, char *dict_words, char *indexes);

void	ft_is_dictionary(char *number, char *dictionary)
{
	FILE *dict_file;
//	char	*dict_words;
//	char	*indexes;

//	dict_words = NULL;
//	indexes = NULL;
	if (dictionary == NULL)
		dict_file = fopen("numbers.dict", "r");
	else
		dict_file = fopen(dictionary, "r");
	if (dict_file != NULL && ft_check_dict(dict_file))//, dict_words, indexes))
	{
		printf("%s" , number);
	}	
	else
	{
		ft_print_string("Error the dictionary file is not exist");
	}
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

int ft_check_dict(FILE *dict_file) //, char *dict_words, char *indexes)
{
	ssize_t	read;
	size_t	len;
	char *str; 

	len = 0;
	while ((read = getline(&str, &len, dict_file)) != -1)
	{
		printf("%zu  = %s\n", read, str);
	}
	//printf("%s + %s", dict_words, indexes);
	free(str);
	return (0);
}