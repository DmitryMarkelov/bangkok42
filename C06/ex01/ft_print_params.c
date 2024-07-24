#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;				
	if(argc > 1)			
	{
		while (index < argc)		
		{
                        /* переделать на вывод строки */
			while (*argv[index] != '\0')
                        {
                                write(1, argv[index], 1);
                                ++argv[index];
                        }
                        write(1, "\n", 1);
			index++;	
		}
	}
	return (0);
}