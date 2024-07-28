#include "ft_all_functions.h"

void    ft_do_conversion(FILE *dict_file, char *number);
void    ft_print_result(FILE *dict_file,  char *numb, int pow);

void    ft_do_conversion(FILE *dict_file, char *number)
{
        int     index;
        int     size;
        int     check_size;
        int     itr;
        char *numb;

        index = 0;
	size = ft_get_size(number);
        while (number[index] != '\0')
        {        
                if (number[0] == '-' && index == 0)
                {
                        write(1, "minus ", 6);
                        index = 1;
                }
                check_size = size  - index;
                itr = 0; 
                while (check_size - 3 >= 0)
                {
                        ++itr;
                        check_size -= 3;
                }
                if (size  - index  - 3 * itr == 2)
                {
                        numb = (char *)malloc(2 * sizeof(char));
                        numb[0] = number[index];
                        numb[1] = number[index + 1];
                        //ft_print_result(dict_file,  numb, 0);
                        ft_print_result(dict_file,  numb, 1);
                        //printf("%s %c\n", "dozen", number[index]);
                        free (numb);
                }
                if (size  - index  - 3 * itr == 1)
                {
                        numb = (char *)malloc(sizeof(char));
                        numb[0] = number[index];
                        ft_print_result(dict_file,  numb, 0);
                        //printf("%s %c\n", "number", number[index]);
                        free (numb);
                }
                if (size  - index  - 3 * itr == 0)
                {
                        numb = (char *)malloc(sizeof(char));
                        numb[0] =  number[index];
                        ft_print_result(dict_file,  number, itr);
                        //ft_print_result(dict_file,  number[index], 2);
                        //printf("%s %c\n", "hundreds", number[index]);
                        free (numb);
                }
                ++index;
        }
}

void    ft_print_result(FILE *dict_file,  char *numb, int pow)
{
        ssize_t	read;
	size_t	len;
	char *str;
        int     index;
        //      printf("%s\n", numb);
        rewind(dict_file);
        while ((read = getline(&str, &len, dict_file)) != -1)
        {
                index = 0;
                if (str[index] >= '0' && str[index] <= '9')
                {
                        if (pow == 0)
                        {
                                if (numb[0] == str[index] && (str[index + 1] != ' ' || str[index + 1] != ':'))
                                {
                                        write(1, "number", 6 );
                                        break;
                                }
                        }
                        if (pow == 1)
                        {

                                if (numb[0] == str[index] && numb[1] == str[index + 1] && (str[index + 2] != ' ' || str[index + 2] != ':'))
                                {
                                        write(1, "dozen", 5 );
                                        break;
                                }
                        }
                        if (pow > 1)
                        {

                        }
                       ++index;              
                                
                }
                ++index;
       }
}
