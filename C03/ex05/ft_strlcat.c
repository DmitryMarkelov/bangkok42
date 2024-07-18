#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int ft_calculate_size(char *str);

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    src_size;
    unsigned int    dest_size;
    unsigned int    index;

    src_size = ft_calculate_size(src);
    dest_size = ft_calculate_size(dest);
    if (size <= dest_size)
    {
        return(src_size + size);
    }
    index = 0;
    while (src[index] != '\0' && dest_size < size - 1)
    {
        dest[dest_size] = src[index];
        ++index;
        ++dest_size;
    }
    dest[dest_size] = '\0';
    return (src_size + dest_size);

}

unsigned int ft_calculate_size(char *str)
{ 
    unsigned int    index;

    index = 0;
    while (str[index] != '\0')
    {
        ++index;
    }
    return (index);
}

int main(void)
{
    char    src[] = "12";
    char    dest[] = "abcdef";
    //char    src1[] = "12";
    //char    dest1[] = "abcdef";

    //НУЖНА ПРОВЕРКА НА ВОЗМОЖНОСТЬ DEST ВПИХНУТЬ В СЕБЯ SRC
    printf("%u + %s\n", ft_strlcat(dest, src, 12), dest);
    //printf("%lu + %s", strlcat(dest1, src1, 12) , dest1);
    return (0);
}