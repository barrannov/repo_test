/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaranov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 18:50:56 by abaranov          #+#    #+#             */
/*   Updated: 2016/12/01 21:02:03 by abaranov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char *a;
	const char *b;

	if (!*little)
		return ((char*)big);
	while (len >= 1)
	{
		a = big;
		b = little;
		while (*b && *a && *b++ == *a++ && len >= 1)
		{
			len--;
			if (!*b)
				return ((char*)big);
		}
		big++;
	}
	return (0);
}
