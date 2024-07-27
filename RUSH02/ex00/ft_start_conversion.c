#include "ft_all_functions.h"

void	ft_start_conversion(int argc, char **argv);

void	ft_start_conversion(int argc, char **argv)
{
	char	*number;
	if (argc == 2 ||  argc == 3)
	{
		number = ft_is_correct_input(argv[1]) ;
		if (number != NULL)
		{
			if (argc == 2 && ft_is_dictionary(number, "default"))
			{}
			else if  (argc == 3 && ft_is_dictionary(number, argv[2]))
			{}
			else
				ft_print_string("Erorr: wrong dictionary");
		}
		else
		{
			ft_print_string("Error: here is not any number according the conditions to check");
			return ;
		}
	}
	else
		ft_print_string("Erorr: wrong number of parameters");
}
