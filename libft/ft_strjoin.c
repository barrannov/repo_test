/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaranov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 14:36:03 by abaranov          #+#    #+#             */
/*   Updated: 2016/12/13 14:36:23 by abaranov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		ss;
	char	*res;
	int		i;
	int		c;

	if (s1 == NULL)
		return (0);
	c = 0;
	i = 0;
	ss = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	res = (char *)malloc(ss * sizeof(char) + 1);
	if (res == NULL)
		return (0);
	while (i < ft_strlen((char *)s1))
	{
		res[i] = s1[i];
		i++;
	}
	while (i < ss)
	{
		res[i++] = s2[c++];
	}
	res[i] = '\0';
	return (res);
}
