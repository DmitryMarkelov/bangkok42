#include <unistd.h>

void    ft_putchar(char c);
void    ft_putnbr(int nbr);

int main(void)
{
    ft_putnbr(-2147483648);
    return (0);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nbr)
{
    if (nbr == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr *= -1;
    }
    if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putchar(48 + nbr % 10);
    }
    else
    {
        ft_putchar(48 + nbr);
    }
}