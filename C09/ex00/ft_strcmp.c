int		ft_strcmp(char *s1, char *s2);

int		ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0'  && s1[index] == s2[index])
		++index;
	return (s1[index] -  s2[index]);
}
