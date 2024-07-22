#include <unistd.h>

void    ft_putstr_non_printable(char *str);

void    ft_putstr_non_printable(char *str)
{
    unsigned int    index;
    char    *hex_pattern;
    char    c;

    index = 0;
    hex_pattern = "0123456789abcdef";
    while (str[index] != '\0')
	{
		if (str[index] < 32 || str[index] == 127)
		{
			write(1,"'\\", 2);
            c = hex_pattern[str[index] / 16];
			write(1, &c, 1);
            c = hex_pattern[str[index] % 16];
            write(1, &c,1);
		}
		else
        {
			write(1, &str[index], 1);
        }
		++index;
	}
}

int main(void)
{
    char    str[] = "Coucou\ntu vas bien ?";

    ft_putstr_non_printable(str);
    return (0);
}