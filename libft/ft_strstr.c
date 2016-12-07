/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaranov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 12:38:16 by abaranov          #+#    #+#             */
/*   Updated: 2016/12/01 21:01:04 by abaranov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int count;
	char *b;

	b = to_find;
	i = 0;
	count = 0;	
	if(!*b)
		return str;
	while (str[i])
	{
		if (to_find[count] == str[count + i])
		{
			while (to_find[count])
			{
				if (to_find[count] != str[count + i])
				{
					count = 0;
					break ;
				}
				count++;
			}
			if (to_find[count] == '\0')
				return (str + i);
		}
		i++;
	}	
	return (0);
}
