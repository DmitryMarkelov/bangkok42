#include <stdio.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int index;

    index = 0;
    while (src[index] != '\0' && index < size - 1)
    {
        dest[index] = src[index];
        ++index;
    }
    if (size > 0)
    {
        dest[index] = '\0';
    }
    index = 0;
    while (src[index] != '\0')
    {
        ++index;
    }
    return (index);
}

int main(void)
{
    char    dest[] = "Helllo world"; 
    char    src[] = "Hyvnfknvkfnvkfnvlmslmdc";
    printf("%d :: %s", ft_strlcpy(dest, src, 0) , dest);
    return (0);
}
