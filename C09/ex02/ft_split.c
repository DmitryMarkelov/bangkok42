#include <stdlib.h>

char	**ft_split(char *str, char *charset);
int	ft_str_number(char *str, char *charset);
int	ft_check_sep(char symb, char *charset);
int	ft_get_str_len(int index, char *str, char *charset);

char	**ft_split(char *str, char *charset)
{
	int str_numb;
	char	**res;
	int	index;
	int index_s;
	int pos;

	str_numb = ft_str_number(str, charset);
	res = (char **)malloc((str_numb + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	index = 0;
	pos = 0;
	while (index < str_numb)
	{
		res[index] = (char *)malloc((ft_get_str_len(pos, str, charset) + 1) * sizeof(char));
		if (res[index] == NUL)
			return (NULL);
		while (ft_check_sep(str[index], charset) == 1)
			++pos;
		index_s = 0;
		while (ft_check_sep(str[index], charset) == 0)
		{
			res[index][index_s] = str[pos];
			++index_s;
			++pos;
		}
		res[[index][index_s]] = '\0';
		++index;
	}
	res[index] = NULL;
	return (res);
}

int	ft_str_number(char *str, char *charset)
{
	int	index;
	int str_numb;

	index = 0;
	str_numb = 0;
	while (str[index] != '\0')
	{
		if (ft_check_sep(str[index], charset) == 1)
			++index;
		if (ft_check_sep(str[index], charset) == 0)
		{
			while (ft_check_sep(str[index], charset) == 0)
				++index;
			++str_numb;
		}
		++index;
	}
	return (str_numb);
}

int	ft_check_sep(char symb, char *charset)
{
	int	index;

	index = 0;
	while (charset[index] != '\0')
	{
		if (charset[index] == symb)
			return (1);
		else
			return (0);
		++index;
	}
}

int	ft_get_str_len(int index, char *str, char *charset)
{
	int str_len;

	str_len = 0;
	while (str[index] != '\0')
	{
		if (ft_check_sep(str[index], charset) != 1)
			++str_len;
		else
			break;
		++index;
	}
	return (str_len);
}