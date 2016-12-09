#include "libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
    if (s == NULL)
        return 0;
    size_t i;
    char *res;
    
    res = (char *)malloc(len * sizeof(char) + 1);
    if (res == 0)
        return (NULL);
    i = 0;
    while(i < len)
    {
        res[i] = s[start];
        i++;
        start++;
    }
    res[i]= '\0';
    return (res);
}
