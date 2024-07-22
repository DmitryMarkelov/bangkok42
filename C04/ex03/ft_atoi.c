#include <stdio.h>

int     ft_atoi(char *str);

int     ft_atoi(char *str)
{
        int     result;
        int     minus;
        int     index;

        minus = 1;
        result = 0;
        index =  0;
        while (str[index] != '\0' && (str[index] == ' ' || str[index] == '\n' 
                || str[index] == '\t' || str[index] == '\v'
		|| str[index] == '\f' || str[index] == '\r'))
        {
                ++index;
        }
        while (str[index] != '\0' && (str[index] == '+' || str[index] == '-'))
        {
                if (str[index] == '-')
                {
                        minus *= -1;
                }
                ++index;
        }
        while (str[index] != '\0' && str[index] <='9' && str[index] >= '0')
        {
                result = result * 10 + str[index] - 48;
                ++index;
        }
        result *= minus;
        return (result);
}

int     main(void)
{       
        char    str[] = "   ---+--+1234ab567";
        printf("%s = %d", str, ft_atoi(str));
        return (0);
}