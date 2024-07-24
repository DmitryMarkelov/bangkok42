#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;
        
	index = argc - 1;	
	if(argc > 1)
	{
		while (index > 0)		
		{
			ft_print_str(argv[index]);
			write(1, "\n", 1);
			--index;
		}
	}
	return (0);
}