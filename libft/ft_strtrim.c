#include "libft.h"



char * ft_strtrim(char const *s)
{
    char **str;
    char *res;
    int i;
    int c;
    int amount;

    c = 0;
    i = 0;
    amount = 0;
    str = ft_strsplit(s);
    while(str[i])
    {
        amount += ft_strlen(str[i]);
        i++;
    }

    c = 0;
    i = 0;
    while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
        i++;
    res = (char *)malloc(amount * (sizeof(char) + 1));
    if(res == 0)
        return (NULL);
    while(s[i])
    {
        res[c++] = s[i++];
    }
    c--;
    while(res[c] == ' ' || res[c] == '\t' || res[c] == '\n' )
        c--;
    c++;
    res[c] = '\0';
    return (res);
}

int main()
{
    char strtrim1[] = " 1 da  Hello World Fucken  d     ";
    printf("ft_strtrim - >>>>>>>>>>>>\n%s --- %s\n--------------------\n", ft_strtrim(strtrim1), strtrim1);
    return (0);
}