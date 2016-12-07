/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaranov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 15:33:06 by abaranov          #+#    #+#             */
/*   Updated: 2016/11/30 17:05:29 by abaranov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *b1;
	const unsigned char *b2;

	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	while((n-- -1) && *b1 == *b2)
	{
		b1++;
		b2++;
	}
	return (*b1 - *b2);
}
