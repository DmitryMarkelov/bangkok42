#include <stdio.h>
#include <string.h>

char    *ft_strcat(char *dest, char *src);

char    *ft_strcat(char *dest, char *src)
{
    unsigned int    index;
    unsigned int    dest_size;

    dest_size = 0;
    while (dest[dest_size] != '\0')
    {
        ++dest_size;
    }
    index = 0;
    while (src[index] !='\0')
    {
        dest[dest_size] = src[index];
        ++index;
        ++dest_size;
    }
    dest[dest_size] = '\0';
    return (dest);
}

int main(void)
{
    char    src[] = "123456";
    char    dest[] = "abcdef";
    char    src1[] = "123456";
    char    dest1[30] = "abcdef";

    //НУЖНА ПРОВЕРКА НА ВОЗМОЖНОСТЬ DEST ВПИХНУТЬ В СЕБЯ SRC
    printf("%s :: %s", ft_strcat(dest, src), strcat(dest1, src1));
    return (0);
}