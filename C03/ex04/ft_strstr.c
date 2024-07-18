#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    if (to_find[0] == '\0')
    {
        return (0);
    }

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] != '\0' && str[i + j] == to_find[j])
        {
            if (to_find[j + 1] == '\0')
            {
                return (&str[i]);
            }
            ++j;
        }
        ++i;
    }
    return (0);
}

int main(void)
{
    char    str[] = "fdefrrfargrt";
    char    to_find[] = "ar";
    char    str1[] = "ccfc";
    char    to_find1[30] = "f";

    //НУЖНА ПРОВЕРКА НА ВОЗМОЖНОСТЬ DEST ВПИХНУТЬ В СЕБЯ SRC
    printf("%s :: %s", ft_strstr(str, to_find), strstr(str1, to_find1));
    return (0);
}