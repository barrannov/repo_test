/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaranov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 15:07:20 by abaranov          #+#    #+#             */
/*   Updated: 2016/11/30 15:30:01 by abaranov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *	ft_memchr(const void *s, int c, size_t n)
{
	const char *res;
	int i;
	
	res = s;
	i = 0;
	while(n--)
	{
		if(*res++ == c)
		{
			return ((void*)(res - 1));
		}
	}
	return(NULL);
}
