#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    index;

    index = 0;
    while (s1[index] != '\0' && s2[index] != '\0' && index < n)
    {
        if (s1[index] != s2[index])
        {
            return (s1[index] - s2[index]);
        }
        ++index;
    }
    if (s1[index] == '\0' && s2[index] != '\0' && index < n) return (0 - s2[index]);
    if (s1[index] != '\0' && s2[index] == '\0' && index < n)  return (s1[index]);
    return (0);
}

int main(void)
{
    char    s1[] = "ab";
    char    s2[] = "adgg";

    printf("%d\n", ft_strncmp(s1, s2, 1));
    printf("%d", strncmp(s1, s2, 1));
    return (0);
}