#include <unistd.h>

void	ft_putchar(char c);
void    ft_print_pairs(int first_pair, int second_pair);
void    ft_print_comb2(void);

int    main(void)
{
    ft_print_comb2();
    return (0);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_pairs(int first_pair, int second_pair)
{
    ft_putchar(first_pair / 10 + 48);
    ft_putchar(first_pair % 10 + 48);
    ft_putchar(' ');
    ft_putchar(second_pair / 10 + 48);
    ft_putchar(second_pair % 10 + 48);
    if (first_pair != 98)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_comb2(void)
{
    int first_pair;
    int second_pair;

    first_pair = 0;
    second_pair = 1;
    while (first_pair < 99)
    {
        while(second_pair < 100)
        {
            ft_print_pairs(first_pair, second_pair);
            ++second_pair;
        }
        ++first_pair;
        second_pair = first_pair + 1;
    }
}