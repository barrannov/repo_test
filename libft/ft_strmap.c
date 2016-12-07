/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaranov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 15:17:11 by abaranov          #+#    #+#             */
/*   Updated: 2016/12/06 15:19:30 by abaranov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *res;
	int i;

	i = 0;
	res = ft_strnew(ft_strlen((char *)s) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while(s[i])
	{
		res[i] = f(s[i]);
		i++;
	}
	return (res);
}
