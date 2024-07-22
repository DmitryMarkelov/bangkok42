#include <unistd.h>
#include <stdio.h>
/*
void    *ft_print_memory(void *addr, unsigned int size);

void    *ft_print_memory(void *addr, unsigned int size)
{
    if (size != 0) 
    {

    }

}
*/
int main(void)
{
    char    str[] = "Hello world";
    printf("%p", str);
    // ft_print_memory(str, 11);
    return (0);
}