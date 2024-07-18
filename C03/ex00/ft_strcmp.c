#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int ft_strcmp(char *s1, char *s2)
{
    unsigned int    index;

    index = 0;
    while (s1[index] != '\0' && s2[index] != '\0' && s1[index] == s2[index])
    {
        ++index;
    }
    return (s1[index] - s2[index]);
}

int main(void)
{
    char    s1[] = "abc";
    char    s2[] = "";

    printf("%d\n", ft_strcmp(s1, s2));
    printf("%d", strcmp(s1, s2));
    return (0);
}