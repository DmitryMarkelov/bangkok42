#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE		1
# define FALSE		0
# define SUCCESS	0
# define EVEN(nbr)	((nbr % 2) == 0 ? TRUE : FALSE)
# define EVEN_MSG	"I have a pair number of arguments.\n"
# define ODD_MSG	"I have an impair number of arguments.\n"

typedef int	t_bool;
void		ft_putstr(char *str);
t_bool		ft_is_even(int nbr);

#endif