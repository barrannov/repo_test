#include "libft.h"

void ft_putstr(char const *str)
{
    int i;
    
    if (str == NULL)
        return ;
    i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

