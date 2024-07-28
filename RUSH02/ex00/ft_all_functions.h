#ifndef FT_ALL_FUNCTIONS_H
# define FT_ALL_FUNCTIONS_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_start_conversion(int argc, char **argv);
void	ft_is_dictionary(char *number, char *dictionary);
char   * ft_is_correct_input(char *number);
void	ft_print_string(char *str);
int	ft_get_size(char *str);
char	*ft_str_copy(char *src);
int	ft_str_compare(char *str1, char *str2);
void    ft_do_conversion(FILE *dict_file, char *number);

#endif

