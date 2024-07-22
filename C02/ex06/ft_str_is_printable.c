#include <stdio.h>

int ft_str_is_printable(char *str);

int ft_str_is_printable(char *str)
{
    unsigned int index;

    index = 0;
    if (str[index] != '\0')
    {
        while (str[index] != '\0')
	    {
		    if (str[index] >= 32 && str[index] <= 126)
            {
			    ++index;
            }
	    	else
            {
                return (0);
            }
	    }
        return (1);
    } 
    else
    {
        return (1);
    }
}

int main(void)
{
    char    str[] = "fdefe";
    printf("%d",  ft_str_is_printable(str));
    return (0);
}