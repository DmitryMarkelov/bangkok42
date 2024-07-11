#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	n;
	int	*p_n1;
	int     **p_n2;
        int     ***p_n3;
        int     ****p_n4;
        int     *****p_n5;
        int     ******p_n6;
        int     *******p_n7;
        int     ********p_n8;
        int     *********p_n9;

	n = 11;
	p_n1 = &n;
	p_n2 = &p_n1;
        p_n3 = &p_n2;
        p_n4 = &p_n3;
        p_n5 = &p_n4;
        p_n6 = &p_n5;
        p_n7 = &p_n6;
        p_n8 = &p_n7;
        p_n9 = &p_n8;
	ft_ultimate_ft(p_n9);
	printf("%d", n);
	return (0);
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
