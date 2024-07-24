#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;

	index = 0;
	if (argc > 0)
	{
		while (argv[0][index])
		{
			// переделать на вывод строки
			ft_print_srtr(argv[0][index]);
			++index;
		}
	}
	return (0);
}