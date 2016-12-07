#include "libft.h"

int		ft_count_l(char *s, char c)
{
	int test;
	int i;
	
	test = 0;
	i = 0;
	while(((char )s[i]) != c && ((char )s[i]) != '\0')
		i++;
	return (i);
}

char *full(char *s , int c)
{
	char *res;
	int i;

	i = 0;
	res = (char *)malloc(ft_count_l((char *)s, c) * sizeof(char) + 1);
	while(i < ft_count_l((char *)s, c))
	{
		res[i] = (char)s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int		ft_count_w(char *s, char c)
{
    char *p;
    int cw;

    cw = 0;
    while(*s)
    {
        (*s == c && *s)? s++: 0;
        p = (char *)s;
        while (*p != c && *p)
            p++;
        (*s != c && *s)? cw++: 0;
        s = p;
    }
    return (cw);
}

char	**ft_strsplit(char const *s, char c)
{
	char **res;
	int count_words;
	int f;
	int y;

	y = ft_count_w((char *)s, c);
	f = 1;
	count_words = 0;
	res = (char **)malloc(y * sizeof(char*) + 1);
	if (res == 0)
		return (0);
	while (s && count_words < y)
	{
		if (*(char *)s == c && s)
		{
			while (*((char *)s) != c && s)
				s++;
			f = 1;
		}
		else if (f == 1 && s)
		{
			res[count_words] = full((char *)s, c);
			count_words++;
			f = 0;
		}
		s++;
	}
	res[count_words] = (char *)'\0';
	return (res);
}
