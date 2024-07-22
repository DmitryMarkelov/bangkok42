int		ft_iterative_factorial(int nb)
{
	int		factorial;
	int		i;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	factorial = 1;
	i = 0;
	while (i++ < nb)
		factorial *= i;
	return (factorial);
}
