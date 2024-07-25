#include <unistd.h>			
#include <stdlib.h>			

void	ft_putchar(char c)			
{
	write(1, &c, 1);
}


void	ft_putstr(char *str)		/* Функция печати строки */
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int		ft_ctoi(char c)				
{
	if (c >= '0' && c <= '9')	
		return (c - '0');			
	if (c >= 'A' && c <= 'F')		
		return (c - 'A' + 10);		
	if (c >= 'a' && c <= 'f')		
		return (c - 'a' + 10);		
	return (-1);				
}


int		ft_pow(int nb, int power)	
{
	int	result;					
	result = 1;						
	if(power < 0)					
		return (0);					
	if(power == 0)					
		return (1);				
	while (power--)				
		result *= nb;			
	return (result);				
}


int		ft_check_base(char *base)		
{
	int	i;								
	int	z;							

	i = 0;								
	if (!base || !base[1])				
		return (0);						
	while (base[i])						
	{
		if (!((base[i] >= '0' && base[i] <= '9') || (base[i] >= 'a' \
				&& base[i] <= 'z') || (base[i] >= 'A' && base[i] <= 'Z'))) 
			return (0);					
		z = i + 1;						
		while (base[z])				
		{
			if (base[i] >= base[z])		
				return (0);			
			z++;						
		}
		i++;							
	}
	return (i);						
}

int		ft_atoi_base(char *str, char *base)
{
	int		num;						
	int		negative;					
	int		i;							
	int		pow;						
	int		base_type;		

	negative = 1;			
	i = 0;							
	if((base_type = ft_check_base(base)))
	{
		if (*str == '-')				
		{
			i++;					
			negative = -1;				
		}
		while (str[i])				
			i++;
		pow = 0;					
		num = 0;					
		while (--i >= 0)				
		{
			if ((ft_ctoi(str[i]) != -1) && (ft_ctoi(str[i]) < base_type))
				num += ft_ctoi(str[i]) * ft_pow(base_type, pow++);	
		}
		return (num * negative);		
	}
	return (0);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		i;						
	int		j;							
	int		base_type;						
	int		n[16];						
	char	*final;							
	i = 0;									
	if ((base_type = ft_check_base(base)))	
	{
		if (nbr < 0)						
		{
			nbr = -nbr;						
										
			n[i] = '-';						
			i++;
		}
		while (nbr)							
		{
			n[i] = nbr % base_type;			

			nbr /= base_type;				

			i++;							
		}
		if ((final = (char *)malloc(sizeof(char) * (i + 1))) == ((void *)0))
			return (((void *)0));
		if ((n[0] == '-'))				
			final[0] = n[0];				
		j = 1;						
		while (i > 0)					
		{
			--i;						
			final[j] = base[n[i]];		
			j++;							
		}
		final[j] = '\0';				
	}
	return (final);						
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int dec;					
	char *final;							
	dec = ft_atoi_base(nbr, base_from);		
	final = ft_itoa_base(dec, base_to);	

	return (final);						
}

int     main(void)							
{
	char *hex = "0123456789ABCDEF";		
	char *binary = "01";				
	char *number = "010100100101001010";	
	char *result;

	result = ft_convert_base(number, binary, hex);
	ft_putstr(result);					
	ft_putchar('\n');					
	free(result);						
	return (0);							
}
